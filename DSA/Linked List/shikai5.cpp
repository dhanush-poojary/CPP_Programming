#include<iostream>//Leetcode        19 Remove Nth Node From End of List
using namespace std;
class ListNode{//this is for our node
   public:
   int val;
   ListNode* next ;
   ListNode(int data){ 
      this->val = data;
      this->next = NULL;
    }
};
void display(ListNode* Head){ //this function is for printing the linked list
  ListNode* temp = Head;//we can even use head also no need to create temp
     while(temp!=NULL){
      cout<<temp->val<<"->";//printing the nodes
      temp = temp->next;//moving to next node
  }
  cout<<"NULL"<<endl;
}
int main(){
  ListNode* a = new ListNode(10);//creating the new node
  ListNode* b = new ListNode(20);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(40);
  a->next = b;//linking all the nodes
  b->next = c;
  c->next = d;
  ListNode* head = a;
  display(head);//for printing the linked list

  int n = 2;//this element from last or tail we need to delete
   //Method- 1 //this method consumes O(n) time complexity
    //    int len = 0;
    //    ListNode* temp = head;
    //    while(temp != NULL){//calculate the length of linked list
    //       len++;
    //       temp = temp->next;
    //    }
    //    if(n == len){//this is for first node of list
    //         head = head->next; //moving head to next node
    //         return head;
    //    }
    //    int m = (len - n);//this is our index of the node to be deleted
    //    temp = head;
    //    for(int i=1;i<=m-1;i++){//traverse till index -1 
    //        temp = temp->next;
    //    }
    //    temp->next = temp->next->next;//then directly delete that node no need to store the data or anything

    //    return head;//we need to return it in leetcode

    //Method-2 slow & fast approach within 1 pass
    ListNode* slow = head;
    ListNode* fast = head;
//first move the fast pointer to the  n+1 'the index 
    for(int i=1;i<=n+1;i++){
        if(fast == NULL ) {//this is if we want to delete 1st node or if list contains only 1 node
            cout<<head->next<<endl;
            return 0;
        }
         fast = fast->next;//moving fast by 1 node
    }
    while(fast!=NULL){//then traverse slow and fast by 1 node till fast== NULL
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = slow->next->next;//then directly delete that node no need to store the data or anything

    cout<< head->val<<endl;

    display(head);//for printing the linked list
}