 #include<iostream>//Leetcode    148            Sort List
#include<vector>//using merge sort we gonna sort the linked list
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
  
  ListNode* merge(ListNode* tempA, ListNode* tempB) {//this will merge 2 sorted array's
         ListNode* c = new ListNode(-1);//this is a temparory node it is useless later
         ListNode* tempC = c;//pointer for that node

         while(tempA != NULL && tempB != NULL){////here we are sorting and merging the list to a new single list
            if(tempA->val <= tempB->val){
                tempC->next = tempA;
                tempC = tempA;
                tempA = tempA->next;
            }
            else{
                   tempC->next = tempB;
                   tempC = tempB;
                  tempB = tempB->next;
            }
         }
         if(tempA == NULL ){//if 1st list gets ended then connect 2nd list
             tempC->next = tempB;
         }
         if(tempB == NULL ){//if 2nd list gets ended then connect 1st list
             tempC->next = tempA;
         }
       return c->next;//new head
    }
 
   ListNode* sortList(ListNode* head){
       //base case
       if(head == NULL || head->next == NULL) {
        //if the list consist of only 1 node or 0 nodes then return head basically is is the base case
          return head;
       }
        ListNode* slow = head;
        ListNode* fast = head;
       //first case is for odd and second is for even
        while(fast->next != NULL && fast->next->next != NULL){//it will give left middle or even and middle for odd
            slow = slow->next;
            fast= fast->next->next;
        }
        ListNode* a = head;//dividing the list into 2 lists until 1 node is left
        ListNode* b = slow->next;
        slow->next = NULL;

        a = sortList(a);//applying recursion to sort a list
        b = sortList(b);//applying recursion to sort b list
        ListNode*c = merge(a,b);//it will merge those list 
      }
int main(){//it uses recursion we just used it as a function

   ListNode* a = new ListNode(10);//creating the new node
  ListNode* b = new ListNode(40);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(50);
  a->next = b;//linking all the nodes
  b->next = c;
  c->next = d;
  ListNode* head = a;

  display(head); //for displaying
  head =  sortList(head);//function call to sort the list
  display(head);//for displaying
}
