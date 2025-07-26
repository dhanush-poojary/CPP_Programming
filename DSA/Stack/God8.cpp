#include<iostream>//stack implementation using linked list
using namespace std;//it is better then array/vector implementation and also of unlimited size

class Node{//this is for creation of linked list
  public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    next = NULL;
  }
};
class stack{
   public:
   Node* head;//it is the top of our stack
   int size;//we can not maintain size in linked list automatically so use a variable
   stack(){
      head = NULL;
      size = 0;
   }
   void push(int val){//an new node is created in stack of linked list
    Node* temp = new Node(val);
           temp->next = head;//it will be connected to head
           head = temp;//them move head to temp so that next element can be connected again to head
         size++;//increase size
   }
   void pop(){
    if(head == NULL){//underflow
      cout<<"Stack is empty!"<<endl;
      return;
    }
     head = head->next;//we are not deleting the node but moving the head or top node to it's next
     size--;  //so that head will be disconnect
   }
   int top(){
      if(head == NULL){//underflow
      cout<<"Stack is empty!"<<endl;
      return -1;
    }
     return head->val; //returning thr head or top nodes value only
   }
   void display(){//it will display the linked list using a temporary node temp
      Node* temp = head;
      while(temp!=NULL){//temp will travel till NULL so dont use head
        cout<<temp->val<<"->";
        temp = temp->next;
      }
      cout<<"NULL"<<endl;
   }

};
int main(){
  stack st;//creating a new stack
  st.push(10);//inserting elements
  st.push(20);
  st.push(30);
  st.push(40); 

  cout<<st.size<<endl;//prints size it is not the function but a member of stack class
  cout<<st.top()<<endl;//it will print the top element
  st.display();//for displaying

}