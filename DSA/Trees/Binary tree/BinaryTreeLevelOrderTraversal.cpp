#include<iostream>//Leetcode         102   Binary Tree Level Order Traversal
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
int level(TreeNode* root){//this function will give no of level of the tree
         if(root == NULL) return 0;
         return 1 + max(level(root->left),level(root->right));
    }
    void helper(TreeNode* root,vector<int> &ans,int lv,int idx){//this is for traversing in level order
      if(root == NULL) return;
      if(lv == idx){//if we reached that level then push back that element
        ans.push_back(root->val);
        return;
      }
      helper(root->left,ans,lv,idx+1);//increament idx by 1 for left subtree
      helper(root->right,ans,lv,idx+1);//increament idx by 1 for right subtree
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
 
      vector<vector<int>> v;//we need all level's node inside this
        int n = level(a);//we will get level of tree

        for(int i=1;i<=n;i++){//it will call the level order printing function
         vector<int> ans;
         helper(a,ans,i,1);//i is i'th row 1 is idx's value
         v.push_back(ans);//push back ans to v bcz we got the nodes of this level
        }
       
        for(int i=0;i<v.size();i++){//it will print the tree elements as level ordered
           for(int j=0;j<v[i].size();j++){
             cout<<v[i][j]<<" ";
           }
           cout<<endl;
        }
}