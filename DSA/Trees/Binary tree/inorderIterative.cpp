#include<iostream>//inorder travarsal iterative method
#include<stack>
#include<vector>
#include<algorithm>
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

void inorder(TreeNode* root){//this method does not uses recursion
   if(root == NULL) return ;
   stack<TreeNode*> st;
   TreeNode* node = root;//make the node as root at first
   while(st.size()>0 || node!= NULL){
       if(node){///if it is not NULL
           st.push(node);//then push it to stack
           node = node->left;//and also move node to it's left
       }
       else{//if it is NULL then
          TreeNode* temp = st.top();//take the top element of stack
          st.pop();//pop it
          cout<<temp->val<<" ";//print it
           node = temp->right;//and make node to temp's right which is the right subtree
       }
   }
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
 
 inorder(a);//it will display the tree in inorder

} 