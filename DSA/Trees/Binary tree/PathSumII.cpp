#include<iostream>//Leetcode      113           Path Sum II
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
  void helper(TreeNode* root,vector<vector<int> >&v,vector<int>ans,int sum){ 
     if(root == NULL) return; 
    if(root->left == NULL && root->right == NULL)//when path reaches to lead node just see whether it is a valid path or not
    {   if(sum == root->val){//if it is valid 
            ans.push_back(root->val);//then insert it into ans value of lead node
            v.push_back(ans);//and push back to v
        }
        return;
    }
     ans.push_back(root->val);//insert every element in ans
     helper(root->left,v,ans,sum-root->val);//substract that inserted value
     helper(root->right,v,ans,sum-root->val);
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
 
      int targetSum = 8;
        vector<vector<int> > v;
         helper(a,v,{},targetSum);//we need to store all the valid paths inside  vector
    
      for(int i=0;i<v.size();i++){//it will print all the valid paths stored inside v
          for(int j=0;j<v[i].size();j++){
              cout<<v[i][j]<<" ";
          }
          cout<<endl;
      }   
    
 }