#include<iostream>//Printing a Linked List II
using namespace std;
class Node{//user defined data type or we are creating a node
   public:
   int data;//node's first part data
   Node* next ;//node's seocnd part link or next
   Node(int data){ //initializing data and next usig constructor for each node
      this->data = data;
      this->next = NULL;
    }
};
int main(){
  Node*a = new Node(10);//creating a object pointer of node type
  Node*b = new Node(20);         
  Node*c = new Node(30);         
  Node*d = new Node(40);         
   
  a->next  = b;//linking the nodes
  b->next = c;
  c->next = d;
  //d->next = NULL  no need of using this
 
  Node *temp = a;////need to create a new object otherwise a wll be lost
  while(temp!=NULL){//when temp reaches end point of linked list then end the loop
      cout<<temp->data<<"->";//prints
      temp = temp->next;//moving temp to the next node
  }
  cout<<"NULL";

  //cout<<a->next->next->next->data;

}