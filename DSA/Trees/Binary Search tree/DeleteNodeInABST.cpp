#include<iostream>//Leetcode        450                  Delete Node in a BST
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
 TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;//if zero nodes are present then return NULL
        if(root->val == key){ //this is if the element deleted to be is found
            //case 1 : delete a node with zero child or lead node
            if(root->left == NULL && root->right == NULL) return NULL;//directly delete it

            //case 2: delete a node with 1 child either left or right
            if(root->left == NULL || root->right == NULL){
                if(root->left != NULL) return root->left;//return child which exisit to root either left or right
                else return root->right;
            }
            //case 3: delete a node with 2 child 
            //here we need to replace root's value with either it's inorder predecessor/ successer
            if(root->left != NULL && root->right != NULL){
                TreeNode* pred = root->left;//we need to take inorder predecceor for that node
                while(pred->right != NULL){
                    pred = pred->right;
                }
                root->val = pred->val;//after thath replace root's val with predeccessors val
                root->left = deleteNode(root->left,pred->val);//here need to delete the value/node of predeccessor from it's original place
            }  //here NULL will be attached
        }
        else if(root->val > key){//to search key go left
             root->left = deleteNode(root->left,key);
        }
        else{//to search key go right
             root->right = deleteNode(root->right,key);
        }
        return root;//after that return root
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

  int key = 7;
  TreeNode* root = deleteNode(a,key);
  display(root);//for displaying bst
}