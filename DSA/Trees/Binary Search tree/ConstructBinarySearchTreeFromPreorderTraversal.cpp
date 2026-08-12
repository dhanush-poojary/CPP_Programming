#include<iostream>//Leetcode  1008   Construct Binary Search Tree from Preorder Traversal
#include<vector>
using namespace std;
class TreeNode{//node of BST contains 3 parts val, left and right child
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
      this->val = val;
      left = NULL;
      right = NULL;
    }
};
 TreeNode* insertInBst(TreeNode* root,TreeNode* temp){
            if(root == NULL) return new TreeNode(temp->val);//if there is 0 node present then create a new node and return it
            else if(temp->val < root->val){//insert in left subtree
                if(root->left == NULL){//if left does not exisit then insert temp
                     root->left = temp;
                }
                else insertInBst(root->left,temp);//otherwise call the left subtree
            }
            else{//insert in right subtree
                if(root->right == NULL){//if right does not exisit then insert temp
                     root->right = temp;
                }
                else insertInBst(root->right,temp);//otherwise call the right subtree
            }
            return root;//at end return root after inserting
    }
    
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode* root = new TreeNode(pre[0]);//take the first element of as a root in preorder
        for(int i=1;i<pre.size();i++){
           TreeNode* temp = new TreeNode(pre[i]);//take each element except 1st ,create a new node
           insertInBst(root,temp);//and applay insert in BST function and pass root and temp
        }
        return root;
    }
void display(TreeNode* root){//this function is ditto same as display function of binary tree
   if(root == NULL) return;
   cout<<root->val<<" ";//it will print all nodes of BST
   display(root->left);//to travarse in left sub tree
   display(root->right);//to travarse in right sub tree
}
int main(){
  int arr[] = {8,5,1,7,10,12};//an array of integers( preorder travarsal)
  int n = sizeof(arr)/4;
   vector<int> v(arr,arr+n);

 TreeNode* root =  bstFromPreorder(v);//it will construct a new BST

  display(root);//for displaying bst
  cout<<endl;
 
}