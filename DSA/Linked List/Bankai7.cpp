#include<iostream>//InsertAt end function for manual implementation of linked list
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
void display(Node* head){//it will display the linked list
       Node* temp = head;//it is not neccsary at all
       while(temp!=NULL){
          cout<<temp->data<<"->";//printing
          temp = temp->next;
       }
       cout<<"NULL"<<endl;
}
void insertAtEnd(Node *head,int val){
   Node* t = new Node(val);//this is the new node that need to be inserted
   Node* temp = head;
   while(temp->next != NULL) temp = temp->next; //moving the temp to the current last node of the linked list
 
   temp->next = t;//inserting t to the end of temp
}
int main(){
  Node*a = new Node(10);//creating a object pointer of type node 
  Node*b = new Node(20);         
  Node*c = new Node(30);         
  Node*d = new Node(40);         
   
  a->next  = b;//linking all nodes
  b->next = c;
  c->next = d;

  int val = 50;//this is the value to be inserted
  insertAtEnd(a,val);//calling function to insert a new node at end
  
  display(a);//for printing
  
}