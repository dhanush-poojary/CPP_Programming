#include<iostream>//level order travarsal using queue (BFS)
#include<queue>
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
int level(TreeNode* root){//this function will return the level of the tree
   if(root == NULL) return 0;
   return 1 + max(level(root->left),level(root->right));
}

void levorder(TreeNode* root){//this method does not uses recursion
   int n = level(root);
   queue<TreeNode*> q;//create a queue of node type
   q.push(root);
   while(q.size()>0){//when q becomes 0 we need to stop
      TreeNode* temp = q.front();//remove the front element
      q.pop();
      cout<<temp->val<<" ";//print it
      if(temp->left != NULL) q.push(temp->left);//if it is not NULL then push it
      if(temp->right != NULL) q.push(temp->right);//if it is not NULL then push it
   }
   cout<<endl;
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

  levorder(a);//it will print the level order
  
} 