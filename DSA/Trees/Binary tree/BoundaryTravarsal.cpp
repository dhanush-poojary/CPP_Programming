#include<iostream>//Boundary travarsal
#include<queue>
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
int level(TreeNode* root){//this function will return the level of the tree
   if(root == NULL) return 0;
   return 1 + max(level(root->left),level(root->right));
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
void leftBound(TreeNode* root){//this function will print all the element in the left side boundary
   if(root->left == NULL && root->right == NULL) return;//no need to print when leaf node comes
   cout<<root->val<<" ";//here we need to print elements in top to bottom order
    if(root->left != NULL) leftBound(root->left);
    if(root->left == NULL) leftBound(root->right);
}
void preorder(TreeNode* root){//this function will only print the tree's all the leaf nodes
  if(root == NULL) return;
   if(root->left == NULL && root->right == NULL) cout<<root->val<<" ";
   preorder(root->left);
   preorder(root->right);
}
void rightBound(TreeNode* root){//this function will print all the elements in the right side boundary
  if(root->left == NULL && root->right == NULL) return;//no need to print when leaf node comes
  if(root->right != NULL) rightBound(root->right);
  if(root->right == NULL) rightBound(root->left);
  cout<<root->val<<" ";//here we need the elements to be printed in bottom to top order
}
TreeNode* constructTree(int arr[],int n)
{  //here we are considering INT_MIN as NULL bcz NULL can not be stored in the int array
  queue<TreeNode*> q;
   TreeNode* root = new TreeNode(arr[0]);//storing root to a node
   q.push(root);
   int i = 1,j = 2;
   while(q.size()>0 && i<n){
     TreeNode*temp = q.front();//remove the front of queue
     q.pop();
    if(arr[i] != INT_MIN){ //if it is NULL then dont to anything bcz the nodes are by default NULL
      TreeNode* left = new TreeNode(arr[i]);
       q.push(left);//also insert left to queue
       temp->left = left;//connect to temp's left to left
    }
    if(j!= n && arr[j] != INT_MIN){//if it is NULL then dont to anything bcz the nodes are by default NULL
     TreeNode* right = new TreeNode(arr[j]);
     q.push(right);//also insert right to queue
      temp->right = right;//connect to temp's right to right
    }
    i+=2;//move to next set of 2 nodes for each node
    j+=2;
   }
   return root;
}
int main(){
  //an array containing the node's values
   int arr[] = {1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
   int n = sizeof(arr)/4;

 TreeNode* root =  constructTree(arr,n);//root is the new root node of newly constructed tre
 int m = level(root);//for retriving the no of levels of this tree
 for(int i=0;i<m;i++){//here we gonna print the nodes of each level at a time 
   levorder(root,1,i+1);
      cout<<endl;
 }
 cout<<endl;
 leftBound(root);
 preorder(root);//it will display the tree in preorder
 rightBound(root->right);  
} 