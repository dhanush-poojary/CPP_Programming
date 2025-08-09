#include<iostream>//To find the maximum value of any node in a  given treee
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
int maxnode(Node* root){
  if(root == NULL) return INT_MIN;//when we reach root to NULL then return INT_MIN it is important
   int left = maxnode(root->left);//it will give maximum value of left subtree
   int right = maxnode(root->right);//it will give maximum value of right subtree
   return max(root->val,(max(left,right)));//it will compare current root and with max(left,right) then returns the maximum
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
   a->left = b;//linking the nodes or branches of tree
   a->right = c;
   b->left = d;
   b->right = e;
   c->left = f;
   f->left = g;

   display(a);//for displaying
   cout<<endl<<maxnode(a);//it will give the maximum value's node
}