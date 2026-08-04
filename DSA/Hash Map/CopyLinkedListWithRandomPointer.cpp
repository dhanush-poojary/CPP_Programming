#include<iostream>//Copy list with random pointer using unordered map in O(n) T.C and S.C
#include<unordered_map>
using namespace std;
class Node{//this is for our node of linked list with 2 pointer next and random
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
  Node* head = new Node(7);//creating the nodes
  Node* b = new Node(13);
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

  
  display(head);//for displaying the linked list
 //here firstly we are gonna make a deep copy of a original linked list using extra node
       Node* temp = head;
        Node* list = new Node(-1);
        Node*templ = list;
        while(temp!= NULL){//we are gonna make copy without random pointer
            Node* C = new Node(temp->val);   
              templ->next = C;
              temp = temp->next;
              templ = templ->next;
        }

       Node* A = head;//head node of original linked list
       Node* B = list->next;//head node of deeply copied linked list

       unordered_map<Node*,Node*> mp;//<a,b> nodes of both linked list
       Node*tempA = A;//node for traversing in original linked list
       Node*tempB = B;//node for traversing in copy linked list

       while(tempA!=NULL && tempB !=NULL){
         mp[tempA] = tempB;//insert both linked list's node inside the map
          tempA = tempA->next;//go to the next node 
          tempB = tempB->next;
       }

//after that we gonna assign the random pointers        
     for(auto x : mp){//traverse in map in any order

        Node* origin = x.first;//node for traversing in original linked list
        Node* copy = x.second;//node for traversing in copy linked list

        if(origin->random){//origin's random != null then only
           Node* A_random = origin->random;//taking the original list's node's random pointer's freuquency with which 
                                            //copied list's node is present
           copy->random = mp[A_random];//then assign copy's random to frequncy of mp[A_random] 
                                                                    //original node's frequncy is copied node
        }
     }
     cout<<endl;
     display(B);//for displaying the linked list
}