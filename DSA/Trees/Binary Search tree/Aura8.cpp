#include<iostream>//Leetcode      108  Convert Sorted Array to Binary Search Tree
#include<vector>
using namespace std;
class TreeNode{//node of BST contains 3 parts val, left and right child
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
      this->val = val;
      left = NULL;
      right = NULL;
    }
};
//in order of a BST is always in sorted order
TreeNode* helper(vector<int>& arr,int low,int hi){
        if(low > hi) return NULL;//if there is only 1 node then we could not attach it's left and right so attach NULL
        int mid = (low+hi)/2;//we gonna take the mid 
         TreeNode* root = new TreeNode(arr[mid]);//bcz root is the mid itself
              root->left = helper(arr,low,mid-1);//connect root's left and applay recursion
              //bcz low to mid-1 will be strictly lesser then root
              root->right = helper(arr,mid+1,hi);//connect root's right and applay recursion
              //bcz mid+1 to hi wil be strictly greater then root
              return root;
}
TreeNode* sortedArrayToBST(vector<int>& arr) {
         TreeNode* root = helper(arr,0,arr.size()-1);//it will get the root of newly constructed BST
         return root;
}
void display(TreeNode* root){//this function is ditto same as display function of binary tree
   if(root == NULL) return;
   cout<<root->val<<" ";//it will print all nodes of BST
   display(root->left);//to travarse in left sub tree
   display(root->right);//to travarse in right sub tree
}
int main(){   
  int arr[] = {-10,-3,0,5,9};//an array of integers
  int n = sizeof(arr)/4;
  vector<int>v(arr,arr+n);

  TreeNode* root =sortedArrayToBST(v);//it will convert the array into a BST 

  display(root);//for displaying bst
  cout<<endl;
}