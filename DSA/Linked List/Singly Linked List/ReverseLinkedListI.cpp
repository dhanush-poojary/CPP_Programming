#include<iostream>//Leetcode   206                  Reverse Linked List I
#include<vector>//there are 2 methods iterative and recursive
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
ListNode* reverseList(ListNode* head) {
      //Method : 2 Recursive solution
      if(head == NULL || head->next == NULL) return head;//when list contains only 0 or only 1 list then end recursion
      ListNode* newHead = reverseList(head->next); //making newhead
      head->next->next = head;//connecting the old head next to head itself
      head->next = NULL;//connecting head to NULL
      return newHead;//then return head
}
int main(){ //above function uses recursion 
   ListNode* a = new ListNode(10);//creating the new node
  ListNode* b = new ListNode(40);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(50);
  a->next = b;//linking all the nodes
  b->next = c;
  c->next = d;
  ListNode* head = a;
  display(head);//for displaying

  //Method : 2 Recursive solution
 head = reverseList(head);//function call for reversing a linked list
  display(head);//for displaying
  
       //Method : 1 Iterative solution
        // ListNode* prev = NULL; //3 pointer technique
        // ListNode* curr = head;
        // ListNode* NEXT = NULL;
        // while(curr != NULL){//break the loop when curr gets NULL
        //     NEXT = curr->next; //move next to curr's next
        //     curr->next = prev;//make prev to curr's next
        //     prev = curr;//move prev to cur
        //     curr = NEXT;//move curr to next
        // }
        // display(prev); //for displaying
}