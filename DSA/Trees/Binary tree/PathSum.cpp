#include<iostream>//Leetcode        112                  Path Sum
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
 bool hasPathSum(TreeNode* root, int targetSum) {//here we will traverse in the entire 
  //tree and see if a path exists which equals targetsum
       if(root == NULL) return false;
       //after minusing if it is a valid path then left  nodes value will be same as current sum
       if(root->left == NULL && root->right == NULL)  if(targetSum == root->val) return true;    
       else return false;//not a valid sum
       ////substract that inserted value
        return hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val);
    }    
int main(){   
  TreeNode*a = new TreeNode(1);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(2);    
  TreeNode*c = new TreeNode(3);     
  TreeNode*d = new TreeNode(4);     
  TreeNode*e = new TreeNode(5);     
  TreeNode*f = new TreeNode(6);     
  TreeNode*g = new TreeNode(7);     
        
  //connecting the branches or nodes of tree   (edges of
 a->left = b;
 a->right = c;
 b->left = d;
 b->right = e;
 c->left = f;
 c->right = g;
  int targetSum = 8;
     cout<<hasPathSum(a,targetSum);//it will print true or false
 }