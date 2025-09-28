#include<iostream>//Convert BST to MaxHeap
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
//take the reverse inorder of bST to get  elements sorted in decreasing order
void revinorder(TreeNode* root,vector<int>&v){
   if(root == NULL) return;
   revinorder(root->right,v);//to travarse in right sub tree

   v.push_back(root->val);//insert the values into v
   
   revinorder(root->left,v);//to travarse in left sub tree
}
void insertele(TreeNode* root,vector<int>&v,int& idx){
   if(root == NULL) return;
   root->val = v[idx++];//insert each element of v into the root's value
   insertele(root->left,v,idx);//to travarse in left sub tree
   insertele(root->right,v,idx);//to travarse in right sub tree
}
int level(TreeNode* root){//this function will give no of level of the tree
         if(root == NULL) return 0;
         return 1 + max(level(root->left),level(root->right));
    }
    void levorder(TreeNode* root,int lv,int idx){//this is for traversing in level order
      if(root == NULL) return;
      if(lv == idx){//if we reached that level then push back that element
        cout<<root->val<<" ";
        return;
      }
      levorder(root->left,lv,idx+1);//increament idx by 1 for left subtree
      levorder (root->right,lv,idx+1);//increament idx by 1 for right subtree
    }
    
int main(){
 TreeNode*a = new TreeNode(10);//creating and initializing the nodes of the BST
  TreeNode*b = new TreeNode(5);     
  TreeNode*c = new TreeNode(16);     
  TreeNode*d = new TreeNode(1);     
  TreeNode*e = new TreeNode(8);     
  TreeNode*f = new TreeNode(12);     
  TreeNode*g = new TreeNode(20);  
                 //connecting the branches or nodes of BST  (edges of)
  a->left = b; //in BST the nodes on left should be strictly less then root and on right should be strictly greater
  a->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;

   int n = level(a);//it will return level

  for(int i=0;i<n;i++){
       levorder(a,i,0);//prints the level by level elements
       cout<<endl;
  }
  vector<int> v;

  revinorder(a,v);//it will insert all elements of  tree into array v in right root left 
  int i = 0;
  insertele(a,v,i);//it will insert all elements of v into tree

  cout<<endl;
  for(int i=0;i<n;i++){
       levorder(a,i,0);//prints the level by level elements
       cout<<endl;
  }
}