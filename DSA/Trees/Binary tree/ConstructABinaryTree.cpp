#include<iostream>//To Construct a binary Tree automatically 
#include<queue>
#include<climits>
using namespace std;
class Node{//node of tree contains 3 parts val, left and right child
    public://end of last node of tree is connected to NULL
    int val;
    Node* left;
    Node* right;
    Node(int val){
      this->val = val;
      left = NULL;
      right = NULL;
    }
};
void display(Node* root){//we gonna applay recursion in order to traverse through binary tree
   if(root == NULL) return;//when root gets to NULL
    cout<<root->val<<" ";//it will first print elements of left sub tree
    display(root->left);//then print elements of right sub tree
    display(root->right);
}
Node* constructTree(int arr[],int n)
{  //here we are considering INT_MIN as NULL bcz NULL can not be stored in the int array
  queue<Node*> q;
   Node* root = new Node(arr[0]);//storing root to a node
   q.push(root);
   int i = 1,j = 2;
   while(q.size()>0 && i<n){
     Node*temp = q.front();//remove the front of queue
     q.pop();
    if(arr[i] != INT_MIN){ //if it is NULL then dont to anything bcz the nodes are by default NULL
      Node* left = new Node(arr[i]);
       q.push(left);//also insert left to queue
       temp->left = left;//connect to temp's left to left
    }
    if(j!= n && arr[j] != INT_MIN){//if it is NULL then dont to anything bcz the nodes are by default NULL
     Node* right = new Node(arr[j]);
     q.push(right);//also insert right to queue
      temp->right = right;//connect to temp's right to right
    }
    i+=2;//move to next set of 2 nodes for each node
    j+=2;
   }
   return root;
}
int main(){
   int arr[] = {1,2,3,INT_MIN,4,5,6,INT_MIN,8,9};//an array containing the node's values
   int n = sizeof(arr)/4;

  Node* root =  constructTree(arr,n);//root is the new root node of newly constructed tree
   display(root);//for displaying the tree
   
}