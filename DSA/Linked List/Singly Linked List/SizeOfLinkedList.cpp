#include<iostream>//To find size or length of a linked list & printing linked list
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
void display(Node* Head){ 
  Node* temp = Head;//we can even use head also no need to create temp
     while(temp!=NULL){
      cout<<temp->data<<"->";//printing the nodes
      temp = temp->next;//moving to next node
  }
  cout<<"NULL"<<endl;
}
int Size(Node* Head){
  Node* temp = Head;//no need to create this can use head itself
  int n = 0;//for counting size
     while(temp!=NULL){
      n++;//increase size
      temp = temp->next;//move temp to the next node
  }
  return n;
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
  cout<<Size(a);//it will give the size of the linked list
}