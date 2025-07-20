  #include<iostream>//Leetcode   143          Reorder List
#include<vector>
using namespace std;
class ListNode{//this is for our node
 public:
   int val;
   ListNode* next;
   ListNode(int data){
    val = data;
    next = NULL;
   }
};
      void display(ListNode* Head){ //this function is for displaying list
  ListNode* temp = Head;//we can even use head also no need to create temp
     while(temp!=NULL){
      cout<<temp->val<<"->";//printing the nodes
      temp = temp->next;//moving to next node
    }
    cout<<"NULL"<<endl;
  }   
   
   
 ListNode* reverse(ListNode* head){//this function will reverse the list
       ListNode* prev = NULL;//maintain 3 pointers
        ListNode* curr = head;
        ListNode* NEXT = NULL;
        while(curr != NULL){//break the loop when curr reaches NULL
            NEXT = curr->next;
            curr->next = prev;
            prev = curr;
            curr = NEXT;
        }
        return prev;//it is our new head
   }
  int main() {
      ListNode* a = new ListNode(1);//creating the new node
  ListNode* b = new ListNode(2);
  ListNode* c = new ListNode(3);
  ListNode* d = new ListNode(4);
  ListNode* e = new ListNode(5);
  a->next = b;//linking all the nodes
  b->next = c;
  c->next = d;
  d->next = e;
  ListNode* head = a;

  display(head);//for displaying the list
       ListNode* temp = head;
       ListNode* t = head;//it is important otherwise list's connection will be lost
       
       while(temp->next != NULL){//no need to reverse 1 node of the last
          t = temp;//move t to temp
           temp = reverse(temp->next);//reverse to temp->next to NULL and make temp a new head 
           t->next = temp; //connect t's next to temp
       }
       display(head);//for displaying the list
}