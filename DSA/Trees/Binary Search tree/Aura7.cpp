#include<iostream>//Leetcode      98  Validate Binary Search Tree
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
//in order of a BST is always in sorted order
void inorder(TreeNode* root,vector<int>&v){
     if(root == NULL) return;
        inorder(root->left,v);//traverse in left subtree
        v.push_back(root->val);//insert the elements of tree into the vector
        inorder(root->right,v);//traverse in right subtree
    }
bool isValidBST(TreeNode* root) {
    vector<int> v;//here we are taking inorder of the Tree bcz inorder of BST will always in sorted order
     inorder(root,v);

      for(int i=1;i<v.size();i++){
          if(v[i-1] >= v[i]) return false;//if any element is not in sorted order then it is not a BST
      }
      return true;//if all are sorted then it is a BST
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

  cout<<isValidBST(a);//it will return true if tree is a BST otherwise false

  
}