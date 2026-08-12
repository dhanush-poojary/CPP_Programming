#include<iostream>//To take the sum of elements of the binary tree
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
void display(TreeNode* root){//we gonna applay recursion in order to traverse through binary tree
   if(root == NULL) return;//when root gets to NULL
    cout<<root->val<<" ";//it will first print elements of left sub tree
    display(root->left);//then print elements of right sub tree
    display(root->right);
}
int sum(TreeNode* root){
    if(root == NULL) return 0;
    int ans = root->val;//for storing the value of root
    int left =  sum(root->left);//it will  store the sum of left sub tree
    int right =  sum(root->right);//it will store the sum of right sub tree
    return ans+left+right;//then all it together

    //return root->val +  sum(root->left) + sum(root->right); //this is also correct
}
int main(){
    TreeNode*a = new TreeNode(1);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(2);     
  TreeNode*c = new TreeNode(3);     
  TreeNode*d = new TreeNode(4);     
  TreeNode*e = new TreeNode(5);     
  TreeNode*f = new TreeNode(6);     
  TreeNode*g = new TreeNode(7);  
                 //connecting the branches or nodes of tree   (edges of)
  a->left = b; //a is the root node
  a->right = c;//b and c are childrens of a
  b->left = d;//d and e are childrens of b
  b->right = e;
  c->left = f;//f and g are childrens of c
  c->right = g;

  cout<<sum(a)<<endl;//it will print sum of the tree
  display(a);//for displaying the tree

}