#include<iostream>//Leetcode    86                   Partition List
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
  ListNode* a = new ListNode(1);//creating the new node
  ListNode* b = new ListNode(4);
  ListNode* c = new ListNode(3);
  ListNode* d = new ListNode(2);
  ListNode* e = new ListNode(5);
  ListNode* f = new ListNode(2);
  a->next = b;//linking all the nodes
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = f;
  int x = 3; //we need to partition the list according to x , less then x to left and greater then x to right
  ListNode* head = a;
  display(head); //for displaying

  ListNode* low = new ListNode(-1);//these 2 are temparary node and values of these are useless
  ListNode* hi = new ListNode(-1);
  ListNode* tl = low;//pointer for those 2
  ListNode* th = hi;
  
  ListNode* temp = head;//traverse temp till NULL
        while(temp != NULL){
            if(temp->val < x){//left values
               tl->next = temp; //connect tl's next to temp
               temp = temp->next; //move temp
               tl = tl->next;//move tl
            }
            else{ //temp->val >= x    //right values
                th->next = temp;//connect th's next to temp
                temp = temp->next;//move temp
                th = th->next;//move th
            }
        }
        th->next = NULL;//this is neccesary to connect
        tl->next = hi->next;

        display(low->next);  //low->next will be our new head     
    
}