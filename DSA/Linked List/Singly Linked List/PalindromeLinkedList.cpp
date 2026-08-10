  #include<iostream>//Leetcode   234                Palindrome Linked List
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
 int main() {
 //if we compare first half with second half's reverse if it is same then it is a palindrome otherwise not a palindrome       
  ListNode* a = new ListNode(1);//creating the new node
  ListNode* b = new ListNode(2);
  ListNode* c = new ListNode(2);
  ListNode* d = new ListNode(1);
  a->next = b;//linking all the nodes
  b->next = c;
  c->next = d;
  ListNode* head = a;
  display(head);//for displaying
     
 ListNode* slow = head;
    ListNode* fast = head;
//we are making 2 parts of the list then recursing the second part
    while(fast->next != NULL && fast->next->next != NULL){//taking the left middle incase of even and middle in case of odd
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* A = slow->next;

    //slow->next = NULL;  //it will divide linked list into 2 parts
     A = reverse(A);//calling a function to reverse 2nd part

    slow->next = NULL;////it does not divide it
     ListNode* B = head;
    while(A!=NULL){//then compare those 2 lists 
        if(A->val != B->val) {//if any of the node's value gets unequal then return false
          cout<<false;
        return 0;
      }
        A = A->next; //otherwise move A and B
        B = B->next;
    }  
    cout<<true;//return true if it is a palindrome
}