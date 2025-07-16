#include<iostream>//Leetcode  141                        Linked List Cycle
using namespace std;
class ListNode{//this is for our node creation
   public:
   int val;
   ListNode* next ;
   ListNode(int data){ 
      this->val = data;
      this->next = NULL;
    }
};
int main(){
  ListNode* a = new ListNode(10);//creation of linked list nodes
  ListNode* b = new ListNode(20);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(40);
  a->next = b;//linking the nodes
  b->next = c;
  c->next = d;

  ListNode* head = a;

        ListNode*slow = head;
        ListNode*fast = head;

        while(fast != NULL && fast->next != NULL){//traverse slow and fast untill fast gets equal to NULL
             slow = slow->next;//slow by 1 node
             fast = fast->next->next;//fast by 2 nodes
             if(slow == fast) {//it one point if it has loop or cycle then slow and fast will be at the same point
              cout<<true;//then return true
              return 0;
             }
         }  
        cout<<false;//then return false if there is not loop or cycle even if we found NULL it is false
}