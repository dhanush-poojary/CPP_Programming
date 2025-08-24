#include<iostream>//Morris Travarsal  
using namespace std;//T.C O(n) and S.C O(1) it is basically inorder travarsal but advanced
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
void morries(TreeNode* curr){
  while(curr != NULL){
    if(curr->left != NULL){
          TreeNode* pred = curr->left;//take the inorder predecessor
          while(pred->right != NULL && pred->right != curr) pred = pred->right;

          if(pred->right == NULL)//fake connection making if pred's left Does not exisit
          {   pred->right = curr;//conncetion to curr which will be root
              curr = curr->left;//go to curr's left
          }
          if(pred->right == curr){//removing the fake connection and visit to avoid infinite looping
              pred->right = NULL;//connect to NULL
              cout<<curr->val<<" ";//visit curr 
              curr = curr->right;//and go to it's right
          }
    }
    else{//if curr->left == NULL then we reached the left part in inorder
        cout<<curr->val<<" ";//visit  the curr 
        curr = curr->right;//and go to it's right
    }
  }
}
int main(){
    TreeNode* root = new TreeNode(5);//Creating the nodes of the BST
    TreeNode* a = new TreeNode(1);
    TreeNode* b = new TreeNode(2);
    TreeNode* c = new TreeNode(3);
    TreeNode* d = new TreeNode(4);
    TreeNode* e = new TreeNode(6);
    TreeNode* f = new TreeNode(7);
    TreeNode* g = new TreeNode(8);

    root->left = b;//connecting the nodes of BST
    root->right = f;
    b->left = a;
    b->right = c;
    f->left = e;
    f->right = g;
    
    morries(root);//it is for displaying the BST
    cout<<endl;
}