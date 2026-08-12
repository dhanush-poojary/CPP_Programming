#include<iostream>//Leetcode  106 Construct Binary Tree from Inorder and Postorder Traversal
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
 TreeNode* construct(vector<int>&in,int inlow,int inhi,vector<int>&pos,int poslow,int poshi){
 //we gonna make piece of tree using recursion then it will be a new constructed tree   
  if(poslow>poshi) return NULL;//if  0 elements are present then return NULL so it will be connected to NULL
     
  TreeNode* root = new TreeNode(pos[poshi]);//making the root for our new tree
       if(poslow == poshi) return root;//if there is only 1 element present so return root
     
       int idx = 0; 
       for(idx = inlow;idx<inhi;idx++){//here we need to mark root node in inorder array by idx
             if(root->val == in[idx]) break;
       }
       int leftcount = idx-inlow;//element present at left of root
       int rightcount = inhi-idx;//element present at right of root

       root->left = construct(in,inlow,idx-1,pos,poslow,poshi-rightcount-1);//it will construct the left subtree and connect to root
       root->right = construct(in,idx+1,inhi,pos,poslow+leftcount,poshi-1);//it will construct the right subtree and connect to root

       return root;//at the end return root
    }
int main(){   
  int arr[] = {9,15,7,20,3};//post order array
  int brr[] = {9,3,15,20,7};//inorder array
  int n = 5;

  vector<int> postorder(arr,arr+n);
  vector<int> inorder(brr,brr+n);

TreeNode* root = construct(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);//we gonna pass both array fully
        display(root);//for printing the tree
 }