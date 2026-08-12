#include<iostream>//Leetcode       199       Binary Tree Right Side View
#include<vector>
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
int level(TreeNode* root){//this function will give the level of the tree
   if(root == NULL) return 0;
   return 1 + max(level(root->left),level(root->right));
}

void levorder(TreeNode* root,int lev,int idx,vector<int>&v){//it will give us the all right side view
   if(root == NULL) return;
   if(idx == lev){//when it reaches the level 
    //just keep on inserting the element in that level's index in array from left to right
    //untill only 1 element isleft which will be right sided elememnt
       v[lev] = root->val;
      return;
   }
   levorder(root->left,lev,idx+1,v);
   levorder(root->right,lev,idx+1,v);
}    
int main(){   
  TreeNode*a = new TreeNode(1);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(2);    
  TreeNode*c = new TreeNode(3);     
  TreeNode*d = new TreeNode(4);     
  TreeNode*e = new TreeNode(5);     
  TreeNode*f = new TreeNode(6);     
  TreeNode*g = new TreeNode(7);     
        
  //connecting the branches or nodes of tree   (edges of
 a->left = b;
 a->right = c;
 b->left = d;
 b->right = e;
 c->left = f;
 c->right = g;
 
         int n = level(a);//n will hold the height of tree

        vector<int> v(n);
        for(int i=0;i<n;i++){
            levorder(a,i,0,v); //it will insert the level order travarsal of each row into v array but only the right side viewed element will be inserted
        }
        for(int i=0;i<v.size();i++){//printing the right side viewed element
             cout<<v[i]<<" ";
           }
 }