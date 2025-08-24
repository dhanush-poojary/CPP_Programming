#include<iostream>//Leetcode     669             Trim a Binary Search Tree
#include<climits>
using namespace std;
//here we need to keep only the elements which are comes in range low to high
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
void trim(TreeNode* root, int low, int hi){
        if(root == NULL) return;//if there is 0 node present then return NULL
        while(root->left != NULL){//it will compulsoryly run even if low and hi lies in range
            if(root->left->val < low) root->left = root->left->right;//root's left's value will also be less so dont need that
           else if(root->left->val > hi)  root->left = root->left->left;//root's left's value will also be big so dont need that
           else break;//if not then break
            }
        while(root->right != NULL){//it will compulsoryly run even if low and hi lies in range
            if(root->right->val > hi)  root->right =  root->right->left;//root's lright's value will also be less so dont need that
            else if(root->right->val < low)  root->right = root->right->right;//root's right's value will also be big so dont need that
            else break;//if not then break
            }
        trim(root->left,low,hi);//travarse the left subtree 
        trim(root->right,low,hi);//travarse the right subtree
         
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        TreeNode* temp = new TreeNode(INT_MAX);//created a temparory root node //it is import as we need to compare the root also
        temp->left = root; //connect it's left to original root
        trim(temp,low,high);//call the function to trim
        return temp->left;//no need to return the temparory node so left
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
  int low = 4;
  int hi = 8;
  TreeNode* root = trimBST(a,low,hi);

  display(root);//for displaying bst
}