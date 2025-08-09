#include<iostream>//Leetcode      257             Binary Tree Paths
#include<vector>
#include<string>
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
void display(TreeNode* root){//we gonna applay recursion in order to traverse through binary tree
   if(root == NULL) return;//when root gets to NULL
    cout<<root->val<<" ";//it will first print elements of left sub tree
    display(root->left);//then print elements of right sub tree
    display(root->right);
}
  void helper(TreeNode* root,string ans,vector<string> &s){
         if(root == NULL) return;//we never gonna send root to NULL

         if(root->left == NULL && root->right == NULL){//when root reches root node then do path marking
            ans+=to_string(root->val);//store root's value into ans
            //we need not give '->' for leaf node
             s.push_back(ans);//then push back to ans
             return;
         }
          helper(root->left,(ans+(to_string(root->val))+"->"),s);//traverse left sub tree and append root's val and '->' to ans
          helper(root->right,(ans+(to_string(root->val))+"->"),s);//traverse right sub tree and append root's val and '->' to ans
    }
    vector<string> binaryTreePaths(TreeNode* root, vector<string> &s) {//it will return the binary tree paths
        helper(root,"",s);
        return s;
    }
int main(){
TreeNode*a = new TreeNode(10);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(20);     
  TreeNode*c = new TreeNode(30);     
  TreeNode*d = new TreeNode(40);     
  TreeNode*e = new TreeNode(50);     
  TreeNode*f = new TreeNode(60);     
  TreeNode*g = new TreeNode(70);  
                 //connecting the branches or nodes of tree   (edges of)
  a->left = b; //a is the root node
  a->right = c;//b and c are childrens of a
  b->left = d;//d and e are childrens of b
  b->right = e;
  c->left = f;//f and g are childrens of c
  c->right = g;

  display(a);//it will display the tree's elements in some order  
  cout<<endl;

   vector<string> s;  //for storing the paths
  binaryTreePaths(a,s);
  
  for(string ele: s){//it will display all the possible paths
     cout<<ele<<endl;
  }
}