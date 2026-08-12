#include<iostream>//To take the minimum of the tree 
#include<climits>
using namespace std;
class TreeNode{//node of tree contains 3 parts val, left and right child
    public://end of last node of tree is connected to NULL
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
      this->val = val;
      left = NULL;
      right = NULL;
    }
};
int minVal(TreeNode* root,int &mn){
  if(root == NULL) return INT_MAX;//when it reaches NULL the INT_MAX value will be always larger so 
  int left = minVal(root->left,mn);
   int right =  minVal(root->right,mn);
  return mn = min(root->val,min(left,right));
}
  
int main(){
 TreeNode*a = new TreeNode(3);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(5);    
  TreeNode*c = new TreeNode(1);     
  TreeNode*d = new TreeNode(6);     
  
                 //connecting the branches or nodes of tree   (edges of)
  a->left = b; 
  a->right = c;
  b->left = d;
  int min = INT_MAX;
  cout<<minVal(a,min);//this will print the minimum variable
} 