#include<iostream>//Insert Node at tail in a circular singly linked list
using namespace std;
class Node{//it is for our nodes
   public:
   int val;
   Node* next;
   Node(int val){
    this->val = val;
    next = NULL;
   }
};
void display(Node* head){//it will display our circular linked list
  Node* temp = head;
  while(temp->next != head){//it does not print tail nodes value so
      cout<<temp->val<<"->";
      temp = temp->next;
  }
  cout<<temp->val<<"->"<<"NULL"<<endl;//we need to print after the loop ended 
}
int main(){
  Node* head = new Node(10);//creating the nodes
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);
  Node* e = new Node(50);
  head->next = b;//linking the nodes 
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = head;//linking tail to head

  display(head);//for displaying
   
  Node* temp = head;

  while(temp->next != head){//traverse till tail node
     temp = temp->next;
  }
  Node*t = new Node(99);//new node

  temp->next = t;//connect temp to t
  t->next = head;//connect t to head bcz it is a new tail
  temp = t;//move temp to t

  display(head);//for displaying

  
}