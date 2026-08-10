#include<iostream>//Leetcode 142                Linked List Cycle II
using namespace std;
class ListNode{//this is for our node
 public:
   int data;
   ListNode* next;
   ListNode(int data){
    this->data = data;
    next = NULL;
   }
};
int main(){
  //here the len - 2n will be our slow and fast connecting point
        // n is the length of linear list

 ListNode* a = new ListNode(10);//creating the new node
  ListNode* b = new ListNode(20);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(40);
  a->next = b;//linking all the nodes
  b->next = c;  
  c->next = d;
  d->next = b;//this is linking to b instead of NULL bcz there is loop or cycle
        ListNode* head = a;
        ListNode* slow = head;//slow and fast pointers
        ListNode* fast = head;

        bool flag = false;//false means no cycle
        while(fast != NULL && fast->next != NULL){
              slow = slow->next;//move slow by 1 node
              fast = fast->next->next;//move fast by 2 nodes
            if(fast == slow){ 
                flag = true;//there is a cycle
                break;
            }
        }
        if(flag == false) {//if still flag is false then there is no cycle's node or loop's node
            cout<<NULL;//exit
            return 0;
        }
         ListNode* temp = head;//then set temp to head and move slow and temp by 1 node till slow != temp
         while(slow != temp){
                slow = slow->next;//both are moving by 1 node
                temp = temp->next;   
         }
         cout<<slow->data;//this is the looping point node

}