#include<iostream>//to find the level of a given tree
#include<climits>
using namespace std;
class Node{//node of tree contains 3 parts val, left and right child
   public://end of last node of tree is connected to NULL
  int val;
  Node* left;
  Node* right;
  Node(int val){
    this->val = val;
    left = NULL;
    right = NULL;
  }
};
int level(Node* root){
  if(root == NULL) return 0;//when root reaches NULL then return 0 level

  int count = 1;//root nodes's level
   int leftcount = level(root->left);//it will return the level of left subtree
   int rightcount = level(root->right);//it will return the level of right subtree
   return count+ max(leftcount,rightcount);//then add count with maximum of left and right subtree
}
void display(Node* root){//we gonna applay recursion in order to traverse through binary tree
   if(root == NULL) return;//when root gets to NULL
    cout<<root->val<<" ";//it will first print elements of left sub tree
    display(root->left);//then print elements of right sub tree
    display(root->right);
}
int main(){
   Node* a = new Node(10);//creating the nodes of the tree
   Node* b = new Node(20);
   Node* c = new Node(30);
   Node* d = new Node(40);
   Node* e = new Node(50);
   Node* f = new Node(60);
   Node* g = new Node(70);
   Node* h = new Node(80);
   a->left = b;//linking the nodes or branches of tree
   a->right = c;
   b->left = d;
   b->right = e;
   c->left = f;
   f->left = g;
   g->right = h;

   display(a);//for displaying
   cout<<endl<<level(a);//it will print the level's of the given node
}