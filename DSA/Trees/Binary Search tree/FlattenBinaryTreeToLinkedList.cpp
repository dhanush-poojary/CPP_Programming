#include<iostream>//Leetcode 114       Flatten Binary Tree to Linked List
#include<climits>//here we gonna use morris travarsal technique
using namespace std;
class TreeNode{
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
void display(TreeNode* root){//this function is ditto same as display function of binary tree
   if(root == NULL) return;
   cout<<root->val<<" ";//it will print all nodes of BST
   display(root->left);//to travarse in left sub tree
   display(root->right);//to travarse in right sub tree
}
int main(){
    TreeNode* root = new TreeNode(1);//Creating the nodes of the BST
    TreeNode* a = new TreeNode(2);
    TreeNode* b = new TreeNode(3);
    TreeNode* c = new TreeNode(4);
    TreeNode* d = new TreeNode(5);
    TreeNode* e = new TreeNode(6);
    TreeNode* f = new TreeNode(7);
    TreeNode* g = new TreeNode(8);

    root->left = b;//connecting the nodes of BST
    root->right = f;
    b->left = a;
    b->right = c;
    f->left = e;
    f->right = g;

    TreeNode* temp = new TreeNode(INT_MAX);//it is a temparory node in order to compare root
    temp->left = root; //temp->right will be NULL
    TreeNode* curr = root;
   while(curr != NULL){//when it reaches NULL it means our List is Created
    if(curr->left != NULL){

          TreeNode* r = curr->right;//we need to save our right subtree
          curr->right = curr->left;//root->left should be in root->right 
          TreeNode* pred = curr->left;//take the inorder prediccessor
          while(pred->right != NULL) pred = pred->right;
          pred->right = r;  //connet the pred to it's right sides sub-tree
          curr = curr->left;//move curr to it's left    
    }
    else{
        curr = curr->right;//if(curr->left == NULL) then only go right
    }
  }

  TreeNode* t = root;
  while(t != NULL){//we are going the traverse root to NULL and make 
    t->left = NULL;//all nodes left as NULL bcz we need to take nodes in a single line like LINKED LIST
     t = t->right;
  }
    display(root);//it is for displaying the LL
    cout<<endl;
}