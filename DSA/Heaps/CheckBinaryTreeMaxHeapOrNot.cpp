#include<iostream>//Check if the give binary tree is MaxHeap or not
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
bool CBT(TreeNode* root){//it will check whehter the tree is a Complete binary tree or not
    if(root == NULL) return true;
    if(root->left == NULL && root->right != NULL) return false;//if anynode has right child but not left  then not a CBT
    CBT(root->left);//traverse left
    CBT(root->right);//traverse right
}
bool check(TreeNode* root){//it will check whether it is a max heap or not
//inorder it to become maxheap all nodes except root should be smaller then root it applies for all nodes   
   if(root == NULL) return true;
   if(root->left){//if not equal to null
      if(root->left->val > root->val) return false;
   }
   if(root->right){//if not equal to null
      if(root->right->val > root->val)return false;
   }
   check(root->left);//traverse left
   check(root->right);//traverse right
}
int main(){
 TreeNode*a = new TreeNode(20);//creating and initializing the nodes of the BST
  TreeNode*b = new TreeNode(16);     
  TreeNode*c = new TreeNode(12);     
  TreeNode*d = new TreeNode(10);     
  TreeNode*e = new TreeNode(8);     
  TreeNode*f = new TreeNode(5);     
  TreeNode*g = new TreeNode(1);  
                 //connecting the branches or nodes of BST  (edges of)
  a->left = b; //in BST the nodes on left should be strictly less then root and on right should be strictly greater
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;
   
   if(CBT(a)){ //only if it is a complete binary tree then only check for Max heap or not
     if(check(a)){ //if it is a max heap
    cout<<"true";
    return 0;
  }
   }
   cout<<"False";//it is not a max heap

}