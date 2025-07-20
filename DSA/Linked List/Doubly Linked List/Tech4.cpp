#include<iostream>//Leetcode 430      Flatten a Multilevel Doubly Linked List
using namespace std;//in this question there will be multiple levels of linked list
// and we need to connect and make it one single list , it will be connect it's head with child pointer
class Node{//this is for node of DLL
   public:
   int val;
   Node* prev;//2 pointer nodes
   Node* next;
   Node* child;
   Node(int val){
    this->val = val;
    prev = NULL;
    next = NULL;
    child = NULL;
   }
};
//in this question we require recursion so made it as a function
 Node* flatten(Node* head) {
        Node* temp = head;
        while(temp != NULL){//traverse temp untill NULL
             Node* NEXT = temp->next;//we need next node also for connecting it to child's head
            if(temp->child != NULL){//only if the node of main list has any child
              Node* C = temp->child;//store temp's child in c
              temp->child = NULL;//then make temp's child NULL
             
              C = flatten(C);//apply recursion then while coming back it will be all done
             
              temp->next = C; //connect main list to child's head
               C->prev = temp;//connect previous of child to temp 
               while(C->next != NULL){//traverse C to it's tail 
                  C = C->next;
               }
               C->next = NEXT;//and connect c's tail to main list's next node which is maintained eralier
              if(NEXT) NEXT->prev = C;//only connct next's previous to c's tail bcz if it is NULL then it will be an error

            }
            temp = NEXT;//otherwise just move temp to the next node
        }
        return head;
    }
void display(Node* head){//for displaying the linked list
  Node*temp = head;
   while(temp != NULL){//it will print the nodes of double linked list forward
      cout<<temp->val<<"->";
      temp = temp->next;
  }
  cout<<"NULL"<<endl;
}    
int main(){
  Node* a = new Node(10);//creating the nodes   //1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);
  
  a->next = b;//linking the nodes of next pointer
  b->next = c;
  c->next = d;
  d->prev = c;//linking the nodes of previous pointer
  c->prev = b;
  b->prev  = a;

  Node* x = new Node(1);//creating the nodes   //1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
  Node* y = new Node(2);
  Node* z = new Node(3);
  
  x->next = y;//linking the nodes of next pointer
  y->next = z;
             //linking the nodes of previous pointer
  z->prev = y;
  y->prev  = x;

  b->child = x;//an another level of list's head is coneccted to b
  Node* A = new Node(10);//creating the nodes   //1,2,3,4,5,6,null,null,null,7,8,9,10,null,null,11,12]
  Node* B = new Node(20);
 
  A->next = B;//linking the nodes of next pointer
   B->prev  = A;//llinking the nodes of previous pointer
    y->child = A;//an another level of list's head is connected to Y

   a = flatten(a);//calling that function
    display(a);//for dispalying the node list
}