#include<iostream>//Take the inorder predeccessor and successor
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
 TreeNode*  inop(TreeNode* root){
    if(root == NULL) return NULL;

    TreeNode* pred = root->left;//for predecessor once go left
    while(pred->right != NULL){//then go right untill pred->right == NULL
        pred = pred->right;
    }
    return pred; //after that loop pred will be at correct position
}
 TreeNode*  inos(TreeNode* root){
    if(root == NULL) return NULL;

    TreeNode* succ = root->right;//for successor once go right
    while(succ->left != NULL){//then go left untill succ->left == NULL
        succ = succ->left;
    }
    return succ; //after that loop succ will be at correct position
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
   
  cout<<(inop(a))->val<<endl;//it will print inorder predecessor
  cout<<(inos(a))->val<<endl;//it will print inorder successor
}