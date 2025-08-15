#include<iostream>//To take the product of elements of treee
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
int pro(TreeNode* root){//this function will print the product of all the elements of the tree
  if(root == NULL) return 1;//it is important to return 1 otherwise answer will be 0
  return root->val * pro(root->left) * pro(root->right);//root's value * left * right subtree
}
int main(){
 TreeNode*a = new TreeNode(3);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(5);    
  TreeNode*c = new TreeNode(1);     
  TreeNode*d = new TreeNode(6);     
  
                 //connecting the branches or nodes of tree   (edges of)
  a->left = b; 
  a->right = c;
  b->left = d;

  cout<<pro(a);
} 