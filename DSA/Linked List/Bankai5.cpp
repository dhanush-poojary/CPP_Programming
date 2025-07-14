#include<iostream>//To print a linked list using recursion
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
void display(Node* temp){
  if(temp == NULL){ //when temmp reaches last node then end the recursion
   cout<<"NULL";
   return; 
  }
  cout<<temp->data<<"->"; //printing
  display(temp->next);//passing the address of next node

 // cout<<temp->data<<"->";    //it will print in reverse order
 
}
int main(){
  Node*a = new Node(10);//creating a object pointer of node type which is basically node
  Node*b = new Node(20);         
  Node*c = new Node(30);         
  Node*d = new Node(40);         
   
  a->next  = b;////linking the each nodes
  b->next = c;
  c->next = d;
 
  display(a);//for displaying linked list by passing head or first node of the linked list
  
}