#include<iostream>//Leetcode     1038          Binary Search Tree to Greater Sum Tree
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
 int sum = 0;
    TreeNode* bstToGst(TreeNode* root) {//we are going to applay recursion from opposite
        if(root == NULL) return root;
     bstToGst(root->right);//so make first right subtree's call
    sum+= root->val;//add all elements into sum with it's values
    root->val = sum;//then insert it into root itself
     bstToGst(root->left);//then left subtree's call
        return root;
}
void display(TreeNode* root){//this function is ditto same as display function of binary tree
   if(root == NULL) return;
   cout<<root->val<<" ";//it will print all nodes of BST
   display(root->left);//to travarse in left sub tree
   display(root->right);//to travarse in right sub tree
}
int main(){
 TreeNode*a = new TreeNode(5);//creating and initializing the nodes of the BST
  TreeNode*b = new TreeNode(2);     
  TreeNode*c = new TreeNode(1);     
  TreeNode*d = new TreeNode(3);     
  TreeNode*e = new TreeNode(7);     
  TreeNode*f = new TreeNode(6);     
  TreeNode*g = new TreeNode(8);  
                 //connecting the branches or nodes of BST  (edges of)
  a->left = b; //in BST the nodes on left should be strictly less then root and on right should be strictly greater
  a->right = e;
  b->left = c;
  b->right = d;
  e->left = f;
  e->right = g;

  display(a);//for displaying bst
  cout<<endl;
  TreeNode* root = bstToGst(a);//it will make the tree for each node sum of all nodes with itself

  display(root);//for displaying bst
}