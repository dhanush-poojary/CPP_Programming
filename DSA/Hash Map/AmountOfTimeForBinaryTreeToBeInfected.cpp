#include<iostream>//leetcode   2385 Amount of Time for Binary Tree to Be Infected
#include<unordered_map>
#include<unordered_set>
#include<queue>
using namespace std;
class Node{//this is Node class for our binary tree with left and right and val
 public:
   int val;
   Node* left;
   Node* right;
   Node(int data){
    val = data;
    left = NULL;
    right = NULL;
   }
};
 Node* st;//for storing the start node

    void find(Node* root,int start){//it is for finding the element in a binary tree
     if(root == NULL) return;
      if(root->val == start){//node is found
          st = root;
          return;
      }
       find(root->left,start);//for traversing left subtree
       find(root->right,start);//for traversing right subtree
    }
    void markParent(Node* root,unordered_map<Node*,Node*> &mp){
           if(root == NULL) return;

           if(root->left) mp[root->left] = root;//insert left and root
           if(root->right) mp[root->right] = root; //insert right and root  

           markParent(root->left,mp);//for traversing left subtree
           markParent(root->right,mp);//for traversing right subtree
          }
int main(){
  Node* root = new Node(7);//creating the nodes
  Node* b = new Node(13);
  Node* c = new Node(11);
  Node* d = new Node(10);
  Node* e = new Node(1);
  Node* f = new Node(2);
  Node* g = new Node(3);

  root->left = b;
  root->right = c;
  b->left = d;
  b->right = e;
  c->left = f;
  c->right = g;

 
  int start = 10;
     find(root,start);//finding the start node in binary tree (st)

        unordered_map<Node*, Node*> parent;//to store left and root of each node
        markParent(root,parent); //to store root

        unordered_set<Node*> isInfected;  
        isInfected.insert(st);//insert st

        queue<pair<Node*,int> > q;
        q.push({st,0}); //a pair can be inserted as {first,second}
        int lv = 0;
          if((q.front()).first == NULL) return 1;//check if first is NULL then directly return 1 bcz only 1/0 node present

        while(q.size() > 0){
          pair<Node*,int> p = q.front();
          q.pop();
          int level = p.second;
          lv = max(lv,level);
          Node* temp = p.first;
          if(temp->left){//for injecting left node if it is not 
            if(isInfected.find(temp->left) == isInfected.end()){
               q.push({temp->left,level+1});//increament the level by  1 which is time
              isInfected.insert(temp->left);//infecting it
            }
            }
            if(temp->right){//for insecting right node if it is not
             if(isInfected.find(temp->right) == isInfected.end()){
               q.push({temp->right,level+1});//increament the level by  1 which is time
              isInfected.insert(temp->right);//infecting it
            }
            }
            if(parent.find(temp) != parent.end()){//for infecting root node if it is not
             if(isInfected.find(parent[temp]) == isInfected.end()){
               q.push({parent[temp],level+1});//increament the level by  1 which is time
               isInfected.insert(parent[temp]);//infecting it
            }
            }          
        }
    cout<<lv;//it will print the level

  }