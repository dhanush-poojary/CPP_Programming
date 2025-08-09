#include<iostream>//Leetcode      543            Diameter of Binary Tree
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
 int levels(TreeNode* root){
  if(root == NULL) return 0;//when root reaches NULL then return 0 level

  int count = 1;//root nodes's level
   int leftcount = levels(root->left);//it will return the level of left subtree
   int rightcount = levels(root->right);//it will return the level of right subtree
   return count+ max(leftcount,rightcount);//then add count with maximum of left and right subtree
}
    void diameter(TreeNode* root,int &maxd){//as we dont want to use gloval variable so just make changes in it
       if(root == NULL) return;
       int d = levels(root->left)+ levels(root->right);//add the levels of current left and right sub tree
       maxd = max(d,maxd);//then store the maximum of d and maxd
        diameter(root->left,maxd);//then do it for left sub tree 
       diameter(root->right,maxd);//and the right sub tree
    }
    
    int diameterOfBinaryTree(TreeNode* root) {//this function is just to avoid use of global variable maxd
       int maxd = 0;
       diameter(root,maxd);//pass max by reference
       return maxd;
    }
int main(){ 
  
  TreeNode*a = new TreeNode(10);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(20);     
  TreeNode*c = new TreeNode(30);     
  TreeNode*d = new TreeNode(40);     
  TreeNode*e = new TreeNode(50);     
  TreeNode*f = new TreeNode(60);     
  TreeNode*g = new TreeNode(70);  
                 //connecting the branches or nodes of tree   (edges of)
  a->left = b; //a is the root node
  a->right = c;//b and c are childrens of a
  b->left = d;//d and e are childrens of b
  b->right = e;
  c->left = f;//f and g are childrens of c
  c->right = g;
  
 cout<<diameterOfBinaryTree(a);//it will print the diameter of a tree

}    