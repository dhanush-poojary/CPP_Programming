#include<iostream>//Leetcode 138     Copy List with Random Pointer
#include<vector>//here we have to make a deep copy of a linked list with a random pointer 
//random pointer means any node in the list can point to it's next as well as to any random node in the list
#include<climits>
using namespace std;
class Node{//this is for our node
 public:
   int val;
   Node* next;
   Node* random;
   Node(int data){
    val = data;
    next = NULL;
    random = NULL;
   }
};
void display(Node* head){//it will display all the nodes of the linked list
   while(head != NULL){
       cout<<head->val<<"->";
       head=  head->next;
   }
   cout<<"NULL\t";
}

int main(){
  int k = 5; //this is the no of linked list 

  Node* head = new Node(7);//creating the nodes
  Node* b = new Node(13);// [[7,null],[13,0],[11,4],[10,2],[1,0]]
  Node* c = new Node(11);
  Node* d = new Node(10);
  Node* e = new Node(1);

  head->next = b;//linking the nodes
  b->next = c;
  c->next = d;
  d->next = e;
  head->random = NULL;//nodes pointing to any random nodes in the list
  b->random = head;
  c->random = e;
  d->random = c;
  e->random = head;

  
  display(head);
   //step 1:Making a deep copy without random pointer
        Node* temp = head;
        Node* list = new Node(-1);//making a tempararu 
        Node*templ = list;//and a pointer for traversing
        while(temp!= NULL){
            Node* C = new Node(temp->val);  //making the nodes for deepcopy of listt 
              templ->next = C;
              temp = temp->next;
              templ = templ->next;
        }
        //step 2: making alternative list by interconnecting both list
        //connecting the both deeply copied and main list as a zigzag
        Node*A = head;
        Node*B = list->next;
        Node*C  = new Node(-1);//making a new temparary node for making alternative list's head
        Node* tempC = C;//pointer for travsersing
        while(A != NULL){
            tempC->next = A;//we need to connect main list's node to deeply copied list's nodes and vice versa
            A = A->next;
            tempC = tempC->next;
            tempC->next = B;
            B = B->next;
            tempC = tempC->next; 
        }
        C = C->next;//this is the head of our alternative list

       //step 3: making the connections of random pointer using alternative list
       //always t2->next will be t1->random's next
       Node* t1 = head;//this will always traverse in original list
       Node* t2;//this will always traverse in copied list
       while(t1 != NULL){
            t2 = t1->next;//t1 will only travel in deeply copied list
            if(t1->random != NULL) t2->random = t1->random->next;
            t1 = t1->next->next;//t1 will only travel in main list
       }  

       //step 4: removing the alternative connections from original list
       Node* dummy1 = new Node(-1);//creating a new temparory node
       Node* d1 = dummy1;
       Node* dummy2 = new Node(-1);//creating a nre temparory node
       Node* d2 = dummy2;
       int n = 1;
       temp = C;
    while(temp != NULL){//basically we are partitioning the both linked list into 2 new linked list
       if(n%2 !=0){
          d1->next = temp;
          d1 = d1->next;
       }
       else{
           d2->next = temp;
           d2 = d2->next;
       }
       temp = temp->next;
       n++;

    }
    //after this loop dummy 1 will be our main list and dummy 2 will be our deeply copied list which we had partitioned
    d1->next = NULL;
    d2->next = NULL;
    dummy1 = dummy1->next;//this is our original list
    dummy2 = dummy2->next;//this is our new deeply copied list
   cout<<endl;
   display(dummy2);
   return 0;
}