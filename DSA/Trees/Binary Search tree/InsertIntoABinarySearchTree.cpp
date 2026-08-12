#include<iostream>//Leetcode 701 Insert into a Binary Search Tree
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
 TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root == NULL) return new TreeNode(val);//if there is no node then make a new node and return itself as root
        if(root->val > val){//go to left subtree
            if(root->left == NULL){//no nodes to left so we can insert it
                 TreeNode* temp = new TreeNode(val);
                 root->left = temp;//attach to root's left
            }
            else insertIntoBST(root->left,val);//otherwise go to left
        }
        else{//root->val < val   //go to right subtree
            if(root->right == NULL){//no nodes to right so we can insert it
                 TreeNode* temp = new TreeNode(val);
                 root->right = temp;//attach to root's right
            }
            else insertIntoBST(root->right,val);//otherwise go to right
        }
        return root;//after insertion return root
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

  int val = 3;//value to be inserted
 a =  insertIntoBST(a,val);//a new node with val will be inserted into BST

   display(a);//for displaying bst

}