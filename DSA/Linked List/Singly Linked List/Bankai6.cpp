#include<iostream>//Insert at end function for automatic implementation of linked list
using namespace std;                                        //O(1) time complexity
class Node{//user defined data type or we are creating a node
   public:
   int data;//node's first part data
   Node* next ;//node's seocnd part link or next
   Node(int data){ //initializing data and next usig constructor for each node
      this->data = data;
      this->next = NULL;
    }
};
//here we are creating a data structure itself that can be used as a vector like thing
class LinkedList{//user defined data structure
  public:
   Node* head;//first node of the linked list
   Node* tail;//last node of the linked list
   int size;//it's size

   LinkedList(){//when an linked list is created then constrctor will invoke
      head = NULL; 
      tail = NULL;
      size = 0;
   }
   void insertAtEnd(int val){
      Node* temp = new Node(val);//this is new node that need to be inserted
   //if no nodes then we are gonna add a that node at head and tail   
      if(size == 0) head = tail = temp;  //case 1 : size == 0
      else{                             //case 2 : size > 0

          tail->next = temp; //linking tail's  node to the new node
          tail = temp;//moving the tail to the new new node which is the new ending node
      }
      size++;//increasing size right after inserting an element
    }
    void display(){//it will display the linked list
       Node* temp = head;//it is neccssary to use temp otherwise head will be lost
       while(temp!=NULL){
          cout<<temp->data<<"->";//printing
          temp = temp->next;
       }
       cout<<"NULL"<<endl;
    }
   
};
int main(){
    LinkedList ll ;//object of linked list class but well likely a new data structure
    ll.insertAtEnd(10);//10 will be inserted at head node bcz there is no other nodes
    ll.insertAtEnd(20);//20 will be inserted after 10

    ll.display();//printing
    cout<<ll.size<<endl;//linked list's size

    ll.insertAtEnd(30);//30 will be inserted after 20
    ll.display();//printing
    cout<<ll.size<<endl;//linked list's size

}