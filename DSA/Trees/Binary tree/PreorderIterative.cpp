#include<iostream>//Preorder travarsal iterative method
#include<stack>
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

void preorder(TreeNode* root){//this method does not uses recursion
  if(root == NULL) return;
   stack<TreeNode*> st;//using stack we can travarse in preorder
   st.push(root);//insert root
   while(st.size()>0){
      TreeNode* temp = st.top();//remove the top node
      st.pop();
      cout<<temp->val<<" ";//print it
      if(temp->right) st.push(temp->right);//push temp's right first if it is not NULL
      if(temp->left) st.push(temp->left);//push temp's left first if it is not NULL
   }
   cout<<endl;
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
 
 preorder(a);//it will display the tree in preorder
  
} 