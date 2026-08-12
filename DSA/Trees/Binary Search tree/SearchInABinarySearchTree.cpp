#include<iostream>//Leetcode    700        Search in a Binary Search Tree
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
TreeNode* searchBST(TreeNode* root, int val) {//it will return the search element if it is present otherwise NULL
       if(root == NULL || root->val == val) return root; 
        else if(root->val > val) return searchBST(root->left,val);
        else return searchBST(root->right,val); //(root->val < val)
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

  int val = 2;//search element
cout<<(searchBST(a,val)->val);//it will print the search element if it is present

}