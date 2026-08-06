#include<iostream>//Implementing the Deque using DLL
using namespace std;//we can also implement by array but DLL is better 
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
class Deque{//this is a user defined data structure with some functions on it
   public:
   Node* head;
   Node* tail;
   int size;
   Deque(){//an empty list will be created
    head = tail = NULL;
      size = 0;
   }
   void display()//it will display the linked list
   {   Node* temp = head;
  while(temp != NULL){
      cout<<temp->val<<"->";
      temp = temp->next;
  }
  cout<<"NULL"<<endl;
}
   void Push_Back(int val){//this function is for inserting new node at tail when empty or ongoing
         Node* temp = new Node(val);
         if(size == 0){
            head = tail = temp;
            size++;
         }
         else{
           tail->next = temp;
           temp->prev = tail;
             tail = temp;
             size++;
         }
   }
   void Push_Front(int val){//this function is for inserting new node at head when ongoing list not when it is empty
         Node* temp = new Node(val);
         if(size == 0){
            head = tail = temp;
            size++;
         }
         else{
             temp->next = head;
             head->prev = temp;
             head = temp;
             size++;
         }
   }
   void pop_back(){
      if(size == 0){
         cout<<"The queue is empty!";
         return;
      }
      else{
           tail->prev->next = NULL;
           tail = tail->prev; 
           size--;
      }
   }
   void pop_front(){
      if(size == 0){
         cout<<"The queue is empty!";
         return;
      }
      else{
           head->next->prev = NULL;
           head = head->next; 
           size--;
      }
   }
    int front(){
       if(size == 0){
        cout<<"THE queue is empty!"<<endl;
        return -1;
      }
      return(head->val);
   }
   int back(){
      if(size == 0){
        cout<<"THE queue is empty!"<<endl;
        return -1;
      }
      return(tail->val);
   }
   
};
int main(){
  Deque qp;
  
  qp.Push_Back(10);
  qp.Push_Back(20);
  qp.Push_Back(30);
  qp.Push_Back(40);
  qp.display();
  qp.pop_back();
  qp.display();
  qp.pop_front();
  qp.display();
  qp.Push_Front(69);
  qp.display();
  cout<<qp.front()<<endl;
  cout<<qp.back()<<endl;
}