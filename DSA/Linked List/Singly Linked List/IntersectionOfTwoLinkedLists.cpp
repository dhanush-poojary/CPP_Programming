#include<iostream>//Leetcode  160          Intersection of Two Linked Lists
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
  ListNode* a = new ListNode(10);//1st linked list creation
  ListNode* b = new ListNode(20);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(40);
  a->next = b;//linking the nodes
  b->next = c;
  c->next = d;
  ListNode* x = new ListNode(90);//2nd linked list creation
  ListNode* y = new ListNode(80);
  x->next = y;//linking the 2nd liked lists y node to c node of 1st linked list which is the intersection point
  y->next = c;
  ListNode* headA = a;
  ListNode* headB = x;

  ListNode* tempA =  a;//head of 1st list
   ListNode* tempB = x;//head of 2nd list
        int m = 0;
        while(tempA != NULL){//calculating length of 1st linked list
            tempA = tempA->next;
            m++;
        }
        int n = 0;
        while(tempB != NULL){//calculating the length of 2nd lined list
            tempB = tempB->next;
            n++;
        }
        int idx = abs(m-n);//this is the node to be deleted
        tempA = headA;
        tempB = headB;
        if(m > n){//if 1st linked list longest then maintain tempA to idx'th index
             for(int i=1;i<=idx;i++){
                tempA = tempA->next;
             }            
        }
        else{//if 2nd linked list longest then maintain tempB to idx'th index
             for(int i=1;i<=idx;i++){
                tempB = tempB->next;
             }
        }

        while(tempA != NULL && tempB != NULL){//then traverse tempA and tempB till it gets equal to NULL
            if(tempA == tempB) {//when both node gets same address then it is the intersection point or node
              cout<<tempA->val;
              return 0;
            }
            tempA = tempA->next;//traverse by 1 node
            tempB = tempB->next;//traverse by 1 node
        }
        cout<< NULL;//otherwise return null if there is no intersection point
}