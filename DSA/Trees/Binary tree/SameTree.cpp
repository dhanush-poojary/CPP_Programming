#include<iostream>//Leetcode      100         Same Tree
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
 bool isSameTree(TreeNode* p, TreeNode* q) {
       if(p == NULL && q == NULL) return true;//if both gets NULL then they are same
       if(p == NULL || q == NULL) return false;//even when one of those gets to NULL then it is not same 
       if(p->val != q->val ) return false;//if any nodes value does not gets equal then also not same

       bool LstAns = isSameTree(p->left,q->left);//traverse both tree's left sub tree
        if(LstAns ==  false) return false;//false means nothing is same 
       bool RstAns = isSameTree(p->right,q->right);//traverse both tree's right sub tree
        if(RstAns ==  false) return false;//false means nothing is same 
       return true;//when everything is satisfied then return true
    }
int main(){
  TreeNode*a = new TreeNode(10);//creating and initializing the nodes of the 1st tree 
  TreeNode*b = new TreeNode(20);     
  TreeNode*c = new TreeNode(30);   
  a->left = b; //connecting the branches or nodes of tree   (edges of)
  a->right = c;
  TreeNode*d = new TreeNode(10); //creating and initializing the nodes of the 2nd tree  
  TreeNode*e = new TreeNode(20);     
  TreeNode*f = new TreeNode(30);     
  d->left = e;  //connecting the branches or nodes of tree   (edges of)
  d->right = f;

  cout<<isSameTree(a,d);//pass the 2 trees

}