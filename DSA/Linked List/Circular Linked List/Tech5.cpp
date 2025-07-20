#include<iostream>//insert node at tail in a doubly circular linked list
using namespace std;
class Node{//this is required for DLL nodes
   public:
   int val;
   Node* prev;//2 pointers
   Node* next;
   Node(int val){
    this->val = val;
    prev = NULL;
    next = NULL;
   }
};
void display(Node* head){//for displaying the circular double linked list
  Node* temp = head;
  while(temp->next != head){//this does not print the tail nodes value so
      cout<<temp->val<<"->";
      temp = temp->next;
  }
  cout<<temp->val<<"->"<<"NULL"<<endl;//we need to print it here the value of tail node
}
int main(){
  Node* head = new Node(10);//creating the nodes
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);
  Node* e = new Node(50);
  head->next = b;//linking the nodes the next
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = head;//linking tail to head
  
  e->prev = d;//linking the nodes the previous
  d->prev = c;
  c->prev = b;
  b->prev = head;
  head->prev = e;//linking head to tail

  display(head);//for displaying
   
  Node* temp  = head->prev; //no need to traverse till tail we can get it by previous of head
  Node*t = new Node(69);//new node

  t->prev  = temp;//connect t to temp
  temp->next = t;//connect temp to t
  temp = t;//move temp to t
  head->prev = temp;//connect head to temp
  temp->next = head;//connect new tail to head
  
  display(head);//for displaying

  
}