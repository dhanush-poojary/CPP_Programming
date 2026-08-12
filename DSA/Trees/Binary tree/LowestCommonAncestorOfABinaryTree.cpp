#include<iostream>//Leetcode   236  Lowest Common Ancestor of a Binary Tree
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
   bool find(TreeNode* root,TreeNode* temp){//it will see that whether the target node is present or not in the tree
       if(root == NULL) return false;//if root reaches NULL then temp does not exitst
        if(root == temp)return true;//if root reaches temp then it exists

         return find(root->left,temp) || find(root->right,temp);//it return true or false depending upon the node is present or not   
   }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      if(root == p || root == q) return root; //if any one of those is root then return root
      else if(find(root->left,p) && find(root->right,q)) return root;//if both exist in differet subtree then directly return root
      else if(find(root->right,p) && find(root->left,q)) return root;//if both p and q does not exist in left or right just return root
      else if(find(root->right,p) && find(root->right,q)) return lowestCommonAncestor(root->right,p,q);//if both are present in right sub tree call right 
      else  return lowestCommonAncestor(root->left,p,q);//if both are present in left sub tree call left 
      return root;//then return root
    }
int main(){
TreeNode*a = new TreeNode(3);//creating and initializing the nodes of the tree 
  TreeNode*b = new TreeNode(5);    
  TreeNode*c = new TreeNode(1);     
  TreeNode*d = new TreeNode(6);     
  TreeNode*e = new TreeNode(2);     
  TreeNode*f = new TreeNode(0);     
  TreeNode*g = new TreeNode(8);  
  TreeNode*h = new TreeNode(7);  
  TreeNode*i = new TreeNode(4);  
                 //connecting the branches or nodes of tree   (edges of)
  a->left = b; 
  a->right = c;
  b->left = d;
  c->left = f;
  c->right = g;

  display(a);//it will display the tree's elements in some order  
  cout<<endl;
  TreeNode* p = b;//p is our first node
  TreeNode* q = c ;//q is our second node that we want to take the accensters

  TreeNode* temp = lowestCommonAncestor(a,p,q);
  cout<<temp->val;//it will prent the lca
  
}