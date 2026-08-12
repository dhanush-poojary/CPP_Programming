#include<iostream>//Leetcode      437             Path Sum III
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
//in this the path need not to start with root and need not to end with lead node
  void helper(TreeNode* root,long long sum,int& count){  
      if(root == NULL) return; 
      //here we need not to store the elements of tree
       if((long long)root->val == sum) count++;//if it is a valid path then increament the count
        helper(root->left,sum - (long long)root->val,count);//substract the sum from root's value
        helper(root->right,sum - (long long)root->val,count);
     }
    int pathSum(TreeNode* root, int targetSum) {//here we need to check for path for each nodes of tree
        if(root == NULL) return 0;
        int count = 0;
        helper(root,(long long)targetSum,count);//it will add the count of all paths
        count+= pathSum(root->left,targetSum) +  pathSum(root->right,targetSum);//count of no of contains paths of left and right
        return count;
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

      cout<<pathSum(a,targetSum);//it will print the no of possible paths
 }