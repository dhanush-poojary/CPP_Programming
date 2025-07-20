#include<iostream>//Implementing the DLL functions thorugh DLL class
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
class LinkedList{//this is a user defined data structure with some functions on it
   public:
   Node* head;
   Node* tail;
   int size;
   LinkedList(){//an empty list will be created
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
 void dispalyrev(Node* tail)//it will display the linked list in reverse order
 {   Node* temp = tail;
  while(temp != NULL){
      cout<<temp->val<<"->";
      temp = temp->next;
  }
  cout<<"NULL"<<endl;
}
   void insertAtTail(int val){//this function is for inserting new node at tail when empty or ongoing
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
   void insertAtHead(int val){//this function is for inserting new node at head when ongoing list not when it is empty
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
   void insertAtPost(int val,int idx){//it will insert a new node at idx'th indexed position
     if(size == 0) insertAtHead(val);
     else if(size == idx) insertAtTail(val);
     else{
      Node* t = new Node(val);
      Node* temp = head;
      for(int i=1;i<=idx-1;i++){
        temp = temp->next;
      } 
      t->next = temp->next;  
      temp->next = t;
      t->prev = temp; 
      t->next->prev = t;
      size++;
    }
  }
};
int main(){
   LinkedList DLL;//creating a new linked list

   DLL.insertAtTail(10);//10 will be inserted at head
   DLL.insertAtTail(20);//20 will be inserted next to 10
   DLL.insertAtTail(30);//30 will be inserted next to 20
   DLL.insertAtTail(40);//40 will be inserted next to 30

   DLL.display();//it will display the DLL

   DLL.insertAtHead(69);//it will insert 69 at head and move 10 to head's next

   DLL.display();//it will display the DLL

   DLL.insertAtPost(99,2);//it will insert 99 at 2'nd index

   DLL.display();//it will display the DLL

}