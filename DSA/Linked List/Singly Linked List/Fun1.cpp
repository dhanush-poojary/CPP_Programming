#include<iostream>//Leetcode   725              Split Linked List in Parts
#include<vector>//here we need to split the linked into k no of linked list  and store their head's into vector
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
void display(ListNode* head){//finally it will display all the k  linked list
   while(head != NULL){
       cout<<head->val<<"->";
       head=  head->next;
   }
   cout<<"NULL\t";
}
void display(vector<ListNode*> &v){//as we can not direclty display the linked list 
    for(int i=0;i<v.size();i++){
         display(v[i]);//calling a display function using the head's of each node
    }
}
int main(){
  int k = 5; //this is the no of linked list 

  ListNode* head = new ListNode(1);//creating the nodes
  ListNode* b = new ListNode(2);
  ListNode* c = new ListNode(3);
  head->next = b;//linking the nodes
  b->next = c;

  vector<ListNode*> v;//vector of type listnode
      int len = 0;
      ListNode* temp = head;
      while(temp != NULL){//calculating the size of the main linked list
        len++;
        temp = temp->next;
      }   
      int size = len/k;//this is the size of k' no of linked list

      int rem = len%k;//this is for the count of how many list can have size+1 elements
//some of the linked list can have size+1 nodes bcz of the uneven size of main linked list   


      temp = head;
      while(temp != NULL){
         ListNode* C = new ListNode(-1);//temparory node creation
         ListNode* tempC = C;//and a pointer for that 

          int s = size;//we dont want to modify the size so make new s
          if(rem>0) s++;//this is for uneven length of new list's which will have size+1
          rem--;//also make rem-- bcz not all list gonna have size+1  nodes

           for(int i=1;i<=s;i++){//this will form size or size+1 length of linked lists
               tempC->next = temp;
               temp = temp->next;
               tempC = tempC->next;
           }
          tempC->next = NULL;//connect NULL for every new linked list
         v.push_back(C->next);//and dont include the temparory node C
      }

      if(v.size() < k){//if k itself is greater then size of linked list then push_back NULL
         int extra = k - v.size();//it is the no of NULL we have to insert in the vector

         for(int i=1;i<=extra;i++){
             v.push_back(NULL);
         }

      }
      display(v);//for displaying the k no of linked lists
    }