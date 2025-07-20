#include<iostream>//Leetcode 2074. Reverse Nodes in Even Length Groups
#include<vector>
#include<climits>
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
void display(ListNode* head){//it will display all the nodes of the linked list
   while(head != NULL){
       cout<<head->val<<"->";
       head=  head->next;
   }
   cout<<"NULL\t";
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
ListNode* reverseBetween(ListNode* head,int left,int right){
        if(left == right)//if they both are equal then return head no need to reverse
        return head;
      
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
        if(A)//otherwise it will an error sometimes A already reaches NULL
        return head;
        

         return C;

      }
int main(){
  int k = 5; //this is the no of linked list 

  ListNode* head = new ListNode(5);//creating the nodes
  ListNode* b = new ListNode(2);//5,2,6,3,9,1,7,3,8,4
  ListNode* c = new ListNode(6);
  ListNode* d = new ListNode(3);
  ListNode* e = new ListNode(9);
  ListNode* f = new ListNode(1);
  ListNode* g = new ListNode(7);
  ListNode* h = new ListNode(3);
  ListNode* i = new ListNode(8);
  ListNode* j = new ListNode(4);
  head->next = b;//linking the nodes
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = f;
  f->next = g;
  g->next = h;
  h->next = i;
  i->next = j;
  
  display(head);//for displaying the list
 
        ListNode* temp = head;
        int gap = 1;//it will be 1 at first then it will be getting increased by 1

        while(temp!=NULL && temp->next != NULL){

            int remlen = 0;//it is for calculating the remaining length of linked list
             ListNode* t = temp->next;//from 2nd index  of current group it will travel
            for(int i=1;i<=gap+1 && t != NULL;i++){//this is only for that last even group of uneven length bcz of NULL
                 t = t->next;
                 remlen++;
            }
            if(remlen < gap+1) gap = remlen-1;//if remaining length is lesser then
            // actual supposed to be length then reduce gap to be able to fix in that remaining length

        //here 2 is bcz keeping temp in current groups 1 and so reversing it from 2nd to 2+gap
        //here 2+gap is for every even groups last index will be gap+2'th index
        if(gap % 2 !=0) reverseBetween(temp,2,2+gap);//we need to reverse only the even groups so use if otherwise odd groups also being reversed
         //here checking gap whether it is odd bcz gap+2 will be always odd we need that as a tail of that group
         gap++;
         for(int i=1; temp!= NULL && i<=gap;i++){//here need to check temp otherwise temp can try to go beyond NULL it will be error
            temp = temp->next;//travese temp for next group of even till it gets NULL which is i<= gap
         }
            
        }

        cout<<endl;
        display(head);//for displaying the list

      return 0;
}