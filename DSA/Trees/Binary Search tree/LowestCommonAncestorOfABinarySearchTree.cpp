#include<iostream>//Leetcode         235 Lowest Common Ancestor of a Binary Search Tree
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
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) return NULL;//if both p and q does not exisit
        if(p->val == root->val || q->val == root->val) return root;//if any of p and q is root then return root
        else if(min(p->val,q->val) < root->val && max(p->val,q->val) > root->val) return root;//bcz both p and q are present in different subtree
        else if(p->val < root->val && q->val < root->val) return lowestCommonAncestor(root->left,p,q);//if both p and q exisit in left subtree
        else return lowestCommonAncestor(root->right,p,q);// if(p->val > root->val && q->val > root->val)  ////if both p and q exisit in right subtree
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

   TreeNode* p = new TreeNode(6);//these 2 are the nodes for wich we need to take LCA
   TreeNode* q = new TreeNode(11);

  cout<<lowestCommonAncestor(a,p,q)->val;//it will print LCA of p and q

  
}