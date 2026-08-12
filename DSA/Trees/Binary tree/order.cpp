#include<iostream>//in order travarsal in tree
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
void inorder(TreeNode* root){//this function will display the elements of tree in inorder left - root -right
   if(root == NULL) return;//when root gets to NULL
    inorder(root->left);//it will traverse in left subtree first
    cout<<root->val<<" ";//then print the root nodes one by 1
    inorder(root->right);//and then  it will traverse in right subtree
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

  inorder(a);//it will display the tree's elements in inorder    

}