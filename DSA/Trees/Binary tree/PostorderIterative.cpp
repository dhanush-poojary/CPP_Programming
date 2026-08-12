#include<iostream>//Postorder travarsal iterative method
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

vector<int> postorder(TreeNode* root){//this method does not uses recursion
   if(root == NULL) return {};
   stack<TreeNode*> st;//we gonna make use of stack
   vector<int> v;
   st.push(root);//push root to stack
   while(st.size()>0){
      TreeNode* temp = st.top();//remove the top element of stack
      st.pop();
      v.push_back(temp->val);//and insert temp into the vector
      if(temp->left) st.push(temp->left);//push the left element first if it is not NULL
      if(temp->right) st.push(temp->right);//push the right element if it not NULL
   }
   return v;
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
 
 vector<int> v;
  v = postorder(a);//it will display the tree in return postorder in reverse

  reverse(v.begin(),v.end());//so we need to reverse it
  for(int ele : v){
     cout<<ele<<" ";//printing in post order
  }
} 