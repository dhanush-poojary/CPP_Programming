#include<iostream>//Leetcode 237                    Delete a given Node
using namespace std;
class Node{//this is for our node
   public:
   int data;
   Node* next ;
   Node(int data){ 
      this->data = data;
      this->next = NULL;
    }
};

void deleteNode(Node* target){ //this function will delete our node 
          target->data= target->next->data;//put targert's next's data into target's data

        target->next = target->next->next;//connect target's next's next's node to target's next's node
}

void display(Node* Head){ //this function is for displaying list
  Node* temp = Head;//we can even use head also no need to create temp
     while(temp!=NULL){
      cout<<temp->data<<"->";//printing the nodes
      temp = temp->next;//moving to next node
  }
  cout<<"NULL"<<endl;
}
int main(){
  Node*a = new Node(10);//creating a object pointer of node type
  Node*b = new Node(20);         
  Node*c = new Node(30);         
  Node*d = new Node(40);         
   
  a->next  = b;//linking the nodes
  b->next = c;
  c->next = d;

  Node* head = a;
  display(head);//for printing the linked list

  deleteNode(c);//c'th node will be deleted
  
  display(head);//for printing the linked list
  
}