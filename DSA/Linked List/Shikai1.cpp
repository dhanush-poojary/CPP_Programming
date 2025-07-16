#include<iostream>//Delete at any position function
using namespace std;
class Node{//this is for our node
 public:
   int data;
   Node* next;
   Node(int data){
    this->data = data;
    next = NULL;
   }
};
class LinkedList{//it is a user defiend data structure
  public:
  Node* head;//fist node
  Node* tail;//last node
  int size;

  LinkedList(){//it will be initialized
    head = NULL;
    tail = NULL;
    size = 0;
  }
   void display(){//it will display the linked list
       Node* temp = head;//it is neccssary to use temp otherwise head will be lost
       while(temp!=NULL){
          cout<<temp->data<<"->";//printing
          temp = temp->next;
       }
       cout<<"NULL"<<endl;
    }
    void insertAtEnd(int val){
         Node* temp = new Node(val);
         if(size ==0 ) head = tail = temp;
         else{
             tail->next = temp;
             tail = temp;
         }
         size++;
    }
  void deleteAtHead(){
        if(size == 0){
            cout<<"Linked list is empty";
            return;
        }
        else if(size == 1){
          head = tail = NULL;
           size--;
        }
        else{//if(size>=1)
              head = head->next;
              size--;
        }
  }
   void deleteAtTail(){
        if(size == 0){
            cout<<"Linked list is empty";
            return;
        }
        else if(size == 1){
          head = tail = NULL;
           size--;
        }
        else{//if(size >= 1 )
             Node* temp = head;
             while(temp->next != tail) temp = temp->next;
            temp->next = NULL;
            tail = temp; //it is important otherwise tail will pointing at that deleted node
             size--;
        }
        
  }
   void deleteAtPos(int idx){
        if(idx< 0 && idx>= size){
            cout<<"Invalid position";
            return;
        }
        else if(idx == 1) deleteAtHead();
        else if(idx == size-1) deleteAtTail();
        else{//if(idx> 1 && idx< size-1)
             Node* temp = head;
             for(int i=1;i<=idx-1;i++){
              temp = temp->next;
             }
             temp->next = (temp->next)->next;
             size--;
        }
        
  }
    

};
int main(){
  
  LinkedList ll;//creating an object
  ll.insertAtEnd(10);//inserting a new node
  ll.insertAtEnd(20);
  ll.insertAtEnd(30);
  ll.insertAtEnd(40);
  ll.display();
  
  int idx = 2;
  ll.deleteAtPos(idx);
  ll.display();
  
  // ll.deleteAtHead();
  // ll.display();

  // ll.deleteAtTail();
  // ll.display();

 
}