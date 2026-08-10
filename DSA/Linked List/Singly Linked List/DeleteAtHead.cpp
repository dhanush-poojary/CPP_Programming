#include<iostream>//Delete at head and delete at tail functions
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
    void insertAtEnd(int val){//this is for inserting at end
         Node* temp = new Node(val);
         if(size ==0 ) head = tail = temp;//case 1: if there is no node
         else{//if size > 0   
             tail->next = temp;//connect the tail to temp and then
             tail = temp;//move tail to temp
         }
         size++;//increase the size
    }
    void insertAtBegining(int val){//this is for inserting at head
         Node* temp = new Node(val);
         if(size == 0) head = tail = temp;//case 1: if there is no node
         else{//if size > 0
             temp->next = head; //connect temp to head and then
             head = temp;//move head to temp
         }
         size++;
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
  int getAt(int idx){//this will return the idx'th indexed node's data or value
      if(idx < 0 && idx>= size){//this is a error msg
          cout<<"Invalid index!";
          return -1;
      }
      else if(idx == 0) return head->data; //if it is a head node
      else if(idx == size-1) return tail->data;//if it is a tail node
      else{  
           Node * temp = head;
           for(int i=1;i<=idx;i++){//traverse till idx'th index and then
               temp = temp->next;
           }
           return temp->data;//this is our idx'th node and return it's data
      }
  }
};
int main(){
  
  LinkedList ll;//creating a object
  ll.insertAtEnd(10);//inserting a new node
  ll.insertAtEnd(20);
  ll.insertAtEnd(30);
  ll.insertAtEnd(40);
  ll.display();//printing the linked list

  ll.insertAtBegining(69); //69 will be inserted at head
  ll.display();//printing the linked list

  int idx = 2,val = 99;
  ll.insertAtPos(idx,val);//99 will be inserted at idx'th index
  ll.display();//printing the linked list
  
  cout<<ll.getAt(2);//it will print 2'th index'th node's data or value


  
}