#include<iostream>//Level order travarsal left to right and right to left
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
void levorderrev(TreeNode* root,int lev,int idx){//this function will print lev order in right to left
   if(root == NULL) return;
   if(idx == lev){ //here we gonna print n'th levels all nodes
    cout<<root->val<<" ";
    return;
  }
  //interchange the right and left calls to print right to left
  levorder(root->right,lev+1,idx);//increament lev+2 of right subtree
   levorder(root->left,lev+1,idx);//increament lev+1 of left subtree
}
void levorder(TreeNode* root,int lev,int idx){//this function will print lev order in left to right
   if(root == NULL) return;
   if(idx == lev){//here we gonna print n'th levels all nodes
    cout<<root->val<<" ";
    return;
  }
   levorder(root->left,lev+1,idx);//increament lev+1 of left subtree
   levorder(root->right,lev+1,idx);//increament lev+2 of right subtree
}
int level(TreeNode* root){//this function will return the level of the tree
   if(root == NULL) return 0;
   return 1 + max(level(root->left),level(root->right));
}
int main(){
 TreeNode*a = new TreeNode(3);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(5);    
  TreeNode*c = new TreeNode(1);     
  TreeNode*d = new TreeNode(6);     
  TreeNode*e = new TreeNode(7);     
  TreeNode*f = new TreeNode(3);     
  TreeNode*g = new TreeNode(6);     
                
  //connecting the branches or nodes of tree   (edges of
 a->left = b;
 a->right = c;
 b->left = e;
 b->right = f;
 c->left = d;
 d->right = g;

  int n = level(a);//for retriving the no of levels of this tree
  for(int i=0;i<n;i++){//here we gonna print the nodes of each level at a time 
    levorderrev(a,1,i+1);
       cout<<endl;
  }
} 