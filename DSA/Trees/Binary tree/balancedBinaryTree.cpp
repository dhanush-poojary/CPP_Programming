#include<iostream>//To check whether the tree is balanced or not
#include<climits>
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
int level(TreeNode* root){//this function will return the level of the tree
   if(root == NULL) return 0;
   return 1 + level(root->left) + level(root->right);
}
bool isBalanced(TreeNode* root){//this function will tell whether it is a balanced tree or not
  if(root == NULL) return true;//if root reaches NULL then it is balanced
   int lstLev = level(root->left);
   int rstLev = level(root->right);
   if(lstLev == 1 && rstLev != 1) return true;//if left 1 and right is different then balanced
   else if(rstLev == 1 && lstLev != 1) return true;//if right 1 and left is different then balanced
   else if(lstLev == rstLev) return  true;//if both are equal then also balanced
   else return false;//if any of the above does not matches then not balanced
}
  
int main(){
 TreeNode*a = new TreeNode(3);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(5);    
  TreeNode*c = new TreeNode(1);     
  TreeNode*d = new TreeNode(6);     
  TreeNode*e = new TreeNode(7);     
                 //connecting the branches or nodes of tree   (edges of
  a->right = b;
  //a->left = c; 
  b->left = d;
  b->right = e;
   
  cout<<isBalanced(a);
} 