  #include<iostream>//Leetcode   92              Reverse Linked List II
#include<vector>//here we need to reverse a part of the linked list not just the entire linked list
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
int main(){
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
  display(head);//for displaying list

  int left = 2;//starting part to be reversed
  int right = 4;//ending part to be reversed

        if(left == right){//if they both are equal then return head no need to reverse
             display(head);//for displaying list
          return 0;

        }
        ListNode* temp = head;
        ListNode* A = NULL;//here we need to maintain 4 pointers on list
        ListNode* B = NULL;
        ListNode* C = NULL;
        ListNode* D = NULL;
        int n = 1;//for indexing
        while(temp != NULL){
            if(n == left-1) A = temp;//keep A at left-1
            if(n == left) B = temp;//keep B at left
            if(n == right) C = temp;//keep C at right
            if(n == right+1) D = temp;//keep D  at right+1
            n++;
            temp = temp->next;//move temp
        }
        if(A) A->next = NULL; //otherwise it will an error sometimes A already reaches NULL
        C->next = NULL;//C is the end of B

        C = reverse(B);//reverse the B to C

        if(A) A->next = C;//otherwise it will an error sometimes A already reaches NULL
        //B will be replaced by C 

        B->next = D;//connect B to D node
        if(A){//otherwise it will an error sometimes A already reaches NULL
            display(head);//for displaying list
            return 0;
        }
          display(c);//for displaying list
}