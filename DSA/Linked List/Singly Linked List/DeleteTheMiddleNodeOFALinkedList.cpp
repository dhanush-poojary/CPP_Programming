#include<iostream>//Leetcode       2095 Delete the Middle Node of a Linked List
using namespace std;
class ListNode{//this is for our node
   public:
   int data;
   ListNode* next ;
   ListNode(int data){ 
      this->data = data;
      this->next = NULL;
    }
};
void display(ListNode* Head){ 
  ListNode* temp = Head;//we can even use head also no need to create temp
     while(temp!=NULL){
      cout<<temp->data<<"->";//printing the nodes
      temp = temp->next;//moving to next node
  }
  cout<<"NULL"<<endl;
}
int main(){
  ListNode* a = new ListNode(10);//creating new node mannually
  ListNode* b = new ListNode(20);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(40);
  a->next = b;//linking the nodes mannually
  b->next = c;
  c->next = d;

  ListNode* head = a;
  display(head);//printing the linked list
  
        ListNode* slow = head;//2 pointers  for traversing
        ListNode* fast = head;
//traverse these 2 pointers and move slow by 1 node and fast by 2 nodes
        while(fast != NULL && fast->next != NULL ){//maintaining the order of the conditions is must otherwise it will give null pointer exception error 
        //bcz there is nothing next to null it is end 
            slow = slow->next;
            fast = fast->next->next;
        }
        if(slow == head) {//if only 1 node present in list
            head = NULL; //after deleting it list will be empty
            cout<<head->data<<endl;
            return 0;
        }
        if(slow->next == NULL){//if it is a last node in list
            head->next = NULL;//it will delete slow's node by removing pointer from it
        }
        else{//for any other position in the list
            slow->data= slow->next->data; //inserting the data of slow->next's node 
            slow->next = slow->next->next;//and then connect the pointer to slow->next's->next
        }
       
       cout<<head->data<<endl;//this is our first node
       display(head);//printing the linked list
} 