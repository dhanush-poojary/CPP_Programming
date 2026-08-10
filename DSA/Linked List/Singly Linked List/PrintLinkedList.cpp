#include<iostream>//Printing a linked list I
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
  Node a(10);//creating a node
  Node b(20);//creating a node       
  Node c(30);//creating a node        
  Node d(40);//creating a node       
  
  a.next = &b;//linking a to b
  b.next = &c;//linking b to c
  c.next = &d;//linking c to d
  //no need to link d bcz it is by defualt NULL
  Node temp = a;//need to create a new object otherwise a wll be lost
  while(1){
      cout<<temp.data<<"->"; //prints
      if(temp.next == NULL) break;//when temp reaches end point of linked list then break
      temp = *(temp.next); //moving temp to the next node
  }
  cout<<"NULL";

}