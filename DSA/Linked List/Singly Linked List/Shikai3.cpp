#include<iostream>//Leetcode  876           Middle of the Linked List
using namespace std;
class ListNode{//this is for our node creation
   public:
   int data;
   ListNode* next ;
   ListNode(int data){ 
      this->data = data;
      this->next = NULL;
    }
};
int main(){
  ListNode* a = new ListNode(10);//creating a new node
  ListNode* b = new ListNode(20);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(40);
  a->next = b;//linking the node mannually
  b->next = c;
  c->next = d;

  ListNode* head = a;
   //Method - 1   //this method consums O(n) time complexity
        // ListNode* temp = head;
        // int len = 0;
        // while(temp != NULL) { //this if for calculating the length of linked list
        //     temp = temp->next;
        //     len++;
        // }
        // temp = head;//point temp to head again
        // for(int i=0;i<(len/2);i++){ //traverse till half of length -1 'th index
        //       temp = temp->next;
        // }
        // return temp;//then return that node this is our middle node

        //Method - 2  Slow & Fast pointer approach 
        ListNode* slow = head;
        ListNode* fast = head;
        //traverse these 2 pointers and move slow by 1 node and fast by 2 nodes
        while(fast != NULL && fast->next != NULL ){//maintaining the order of the conditions is must otherwise it will give null pointer exception error 
        //bcz there is nothing next to null it is end 
            slow = slow->next;
            fast = fast->next->next;
        }
        cout<<slow->data; //slow will be our middle element when fast == NULL and fast->next == NULL

}