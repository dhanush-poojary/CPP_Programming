#include<iostream>//Leetcode   105 Construct Binary Tree from Preorder and Inorder Traversal
#include<vector>
using namespace std;
class TreeNode{//node of tree contains 3 parts val, left and right child
    public://end of last node of tree is connected to NULL
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
      this->val = val;
      left = NULL;
      right = NULL;
    }
};
void display(TreeNode* root){//this function will print the elements of tree in preorder
  if(root == NULL ) return;
  cout<<root->val<<" ";
   display(root->left);
  display(root->right);
}
  TreeNode* construct(vector<int>& pre,int prelow,int prehi, vector<int>& in,int inlow,int inhi){
   //we gonna make piece of tree using recursion then it will be a new constructed tree    
    if(prelow > prehi) return NULL;//if  0 elements are present then return NULL so it will be connected to NULL
    
    TreeNode* root = new TreeNode(pre[prelow]);//making the root for our new tree
        if(prelow == prehi) return root;//if there is only 1 element present so return root
          int idx = 0;
          for(idx= inlow;idx<inhi;idx++){//here we need to mark root node in inorder array by idx
               if(in[idx] == root->val) break;
          }
         int leftcount = idx-inlow;//element present at left of root
         int rightcount = inhi-idx;//element present at right of root
         root->left = construct(pre,prelow+1,prelow+leftcount,in,inlow,idx-1);//it will construct the left subtree and connect to root
         root->right = construct(pre,prelow+leftcount+1,prehi,in,idx+1,inhi);//it will construct the right subtree and connect to root
         return root;//at the end return root
    }    
int main(){   
  int arr[] = {3,9,20,15,7}; //preorder array
  int brr[] = {9,3,15,20,7};//in order array
  int n = 5;
  vector<int> preorder(arr,arr+n);
  vector<int> inorder(brr,brr+n);

TreeNode* root =  construct(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);//we gonna pass both array fully
     
display(root);//for printing the tree
 }