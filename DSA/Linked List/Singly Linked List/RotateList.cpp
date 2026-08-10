#include<iostream>//Leetcode    61                 Rotate List
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
  void display(ListNode* Head){ //this function is for displaying list
  ListNode* temp = Head;//we can even use head also no need to create temp
     while(temp!=NULL){
      cout<<temp->data<<"->";//printing the nodes
      temp = temp->next;//moving to next node
    }
    cout<<"NULL"<<endl;
  }
int main(){
  int k = 2;//within k steps we need to rotate the linked list
   ListNode* a = new ListNode(10);//creating the new node
  ListNode* b = new ListNode(20);
  ListNode* c = new ListNode(30);
  ListNode* d = new ListNode(40);
  ListNode* e = new ListNode(50);
  a->next = b;//linking all the nodes
  b->next = c;
  c->next = d;
  d->next = e;

        ListNode* head = a;
        display(head);//for displaying the liked list
   if(k == 0 || head == NULL || head->next == NULL) {
    //if k is 0 or there is only 1 node or 0 nodes then exit no need to do anything
       cout<<head->data;
      return 0;
    }
        ListNode* t = head;
        ListNode* tail = head;//our tail node
        int n = 0;
        while(t != NULL){//calculating the length of  while maintaining the tail node 
           if(t->next == NULL) tail = t; //for tail node
            t = t->next;//moving 
            n++;
        }

       k = k %n;//if k>n then reduce k to k<n so that unneccsary operation can be reduced

       ListNode* temp = head;
       //then traverse temp to n-k-1'th index which is the one node before rotating
       for(int i=1;i<n-k;i++)temp = temp->next;
       

        tail->next = head;//link tail to head
        head = temp->next ;//move head to temp's next node
        temp->next = NULL;//link temp's next to NULL

        cout<<head->data<<endl;
        display(head);//for displaying the linked list

}