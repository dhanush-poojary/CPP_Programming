#include<iostream>//Leetcode 83             Remove Duplicates from Sorted List
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
  int main(){
    ListNode* x = new ListNode(10);//creating the new node
    ListNode* y = new ListNode(10);
    ListNode* z = new ListNode(20);
  ListNode* w = new ListNode(20);
  x ->next = y;//linking all the nodes
  y->next = z;
  z->next = w;

  ListNode* head = x;
  display(head);//displaying the linked list

     if(head == NULL || head->next == NULL)
     //if the list contains 0 nodes or the list contains only 1 node
    {   cout<<head->val;
      return 0;  //then exit
    } 
     ListNode* a = head;//keep a at head
      ListNode* b = head->next;//keep b at head's next node
        while(b != NULL){
            if(a->val == b->val){//this is for removing duplicates
                a->next = b->next; //connect a->next to b->next
                b = b->next;//and move only b
            }
            else{//if there is not duplicate then move a and b to their next
                a = a->next;
                b = b->next;
            }
        }
         cout<<head->val<<endl;
         display(head);//for displaying the linked list
}