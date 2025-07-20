#include<iostream>//for reverse display of doubly linked list
using namespace std;
class Node{//this is for node of DLL
   public:
   int val;
   Node* prev;//2 pointer nodes
   Node* next;
   Node(int val){
    this->val = val;
    prev = NULL;
    next = NULL;
   }
};
int main(){
  Node* a = new Node(10);//creating the nodes
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);
  Node* e = new Node(50);
  a->next = b;//linking the nodes of next pointer
  b->next = c;
  c->next = d;
  d->next = e;

  e->prev = d;//linking the nodes of previous pointer
  d->prev = c;
  c->prev  = b;
  b->prev = a;
   
  Node* temp = e;//starting from tail

  while(temp != NULL){//it will print the nodes of DLL from tail reverse order
      cout<<temp->val<<"->";
      temp = temp->next;
  }
  cout<<"NULL"<<endl;
}