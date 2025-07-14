#include<iostream>//Basics implementation of Linked list
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
int main(){
     Node a(10) ;//creating a new node and giving value through constructor
     //a.data = 10; //we are reducing line by using contructor to assign value
     
     Node b(20);//creating a new node and giving value through constructor
    // b.data = 20;

     Node c(30);//creating a new node and giving value through constructor
     //c.data = 30;

     Node d(40);//creating a new node and giving value through constructor
     //d.data = 40;
           
     a.next = &b;//linking a to b
     b.next = &c;//linking b to c
     c.next = &d;//linking c to b
    // d.next = NULL;//no need to link d bcz it is by defalult it will be null 

   cout<<(a.next)->data<<endl;//printing value of 2nd node

  // cout<< (*(a.next)) ;//do it as above this is not a good practice

  cout<<(((a.next)->next)->next)->data;//print node d's data using node a
  //cout<<(*(*(*(a.next)).next).next).data; //we can also do the same like this but it is not a good practice
}