#include<iostream>//Implementing queue using linked list
using namespace std;
class Node{//this is for our node creation
  public:
  int val;
  Node* next;
  Node(int val){
     this->val = val;
     next = NULL;
  }
};
class Queue{
   public:
   Node* head;//it is front
   Node* tail;//it is rear or back
   int size;
   Queue(){
       head = NULL;
       tail = NULL;
       size = 0;
   }
   void push(int val){//it will insert a new node at tail or rear end
      Node* C = new Node(val);
      if(size == 0) head = tail = C;//no nodes means all at same position
       else{ tail->next = C;//otherwise insert the new node
        tail = C;
      }
      size++;
   }
   void pop(){//it will delete a node present at head
      if(size == 0){
        cout<<"THE queue is empty!"<<endl;
        return;
      }
      Node*temp = head;
      head = head->next;
/////////////////////****************important***********************///////////////////////
      delete(temp);//it will permentely delete that node from the memory itself
   //it can improve the space complexity 
      size--;
   }
   int front(){//this is for getting the back element
       if(size == 0){
        cout<<"THE queue is empty!"<<endl;
        return -1;
      }
      return(head->val);//head is the front node
   }
   int back(){//this is for getting back element
      if(size == 0){
        cout<<"THE queue is empty!"<<endl;
        return -1;
      }
      return(tail->val);//tail is the back or rear
   }
   void display(){//this is for displaying the linked list or queue
     if(size == 0){
        cout<<"THE queue is empty!"<<endl;
        return ;
      }
       Node*temp = head;
       while(temp!=NULL){//it will print the nodes
        cout<<temp->val<<"->";
        temp = temp->next;
       }
       cout<<"NULL"<<endl;
   }
};
int main(){
    Queue q;
    q.push(10);//inserting the elements
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();//for displaying
    cout<<q.size<<endl;

    q.pop();
    q.pop();

    q.display();//for displaying
    cout<<q.size<<endl;//size is not a function is it a data member

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
}