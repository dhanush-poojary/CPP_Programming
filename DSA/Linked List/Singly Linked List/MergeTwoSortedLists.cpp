#include<iostream>//Leetcode  21. Merge Two Sorted Lists
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
int main(){
 ListNode* a = new ListNode(1);//creating the new node of 1st linked list
  ListNode* b = new ListNode(2);
  ListNode* d = new ListNode(4);
  a->next = b;//linking all the nodes
  b->next = d;
 
   ListNode* x = new ListNode(1);//creating the new node of 2nd linked list
  ListNode* y = new ListNode(3);
  ListNode* z = new ListNode(4);
  x->next = y;//linking all the nodes
  y->next = z;
 
    ListNode* tempA = a, * tempB = x;
   display(tempA);//printing 1st linked list
   display(tempB);//printing 2nd linked list

      ListNode* c = new ListNode(-1);//this is node is useless but we need it as a head 
         ListNode* tempC = c;//pointer for that node

         while(tempA != NULL && tempB != NULL){//when both list's gets ended then break the loop
            if(tempA->val <= tempB->val){//minimum of from both list
                tempC->next = tempA;//connecting tempC to tempA
                tempC = tempA;//moving tempC to tempA
                tempA = tempA->next;//moving tempA to it's next node
            }
            else{//if(tempB->val < tempA->val)
                   tempC->next = tempB;//connecting tempC to tempB
                   tempC = tempB;//moving tempC to tempB
                  tempB = tempB->next;//moving tempB to it's next node
            }
         }

         if(tempA == NULL ){//when tempA gets NULL connect tempB's node by tempC's next
             tempC->next = tempB;
         }
         if(tempB == NULL ){//when tempB gets NULL connect tempA's node by tempC's next
             tempC->next = tempA;
         }
       cout<< c->next<<endl;
       display(c->next);//ignoring the first node and  printing the linked list from it's next

}