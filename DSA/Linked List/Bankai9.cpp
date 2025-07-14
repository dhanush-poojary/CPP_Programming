#include<iostream>//Insert at any position function  of linked list
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
class LinkedList{//user defined data structure
  public:
   Node* head;//linked list's first node
   Node* tail;//liked list's last node
   int size;//it's size

   LinkedList(){
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
    void InsertATBegining(int val){
     Node* temp = new Node(val);//this is new node that need to be inserted

     if(size == 0) head = tail = temp;//if no nodes then we are gonna add a that node at head and tail
     else{
         temp->next = head;//linking new node to the head
         head = temp;//and then moving the head to the temp
     }
     size++;//increasing size right after inserting an element
  }
  void insertAtPos(int idx,int val){
    if(idx< 0 || idx>size){  //case 1: if position is invalid
        cout<<"Invalid position!";
        return;
    }
    else if(idx == 0) insertAtEnd(val); //case 2:  if it is basically the head position
    else if(idx == size) insertAtEnd(val); //case 3: if it is basically the tail posotion
    else{ //case 4: idx>1 and idx<size

        Node*t = new Node(val);//this is the new node that need to be inserted
        Node *temp = head;//first node of the linked list

        for(int i=1;i<=idx-1;i++){//traversing temp till idx-1
              temp = temp->next;
        }
//here while inserting we can not break the previous connection without connecting another node
//otherwise it will be lost        
        t->next = temp->next;//linking node to the temp's next index or at the index position
        temp->next = t;//and linking temp or idx-1 node to the new node

        size++;//increasing the size after inserting an element
    }
  }
};
int main(){
  int idx = 2;//position to be inserted
  int val = 100;//data  or value to be inserted

    LinkedList ll ;  LinkedList ll ;//object of linked list class but well likely a new data structure
   ll.insertAtEnd(10);//10 will be inserted at head node bcz there is no other nodes
    ll.insertAtEnd(20);//20 will be inserted after 10
    ll.insertAtEnd(30);//30 will be inserted after 20
    ll.insertAtEnd(40);//40 will be inserted after 30

   ll.insertAtPos(idx,val);//the new node will be inserted at idx'th position
   ll.display();//for printing
}