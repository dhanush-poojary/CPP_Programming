#include<iostream>//Leetcode 2058. Find the Minimum and Maximum Number of Nodes Between Critical Points
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
int main(){
  int k = 5; //this is the no of linked list 

  ListNode* head = new ListNode(5);//creating the nodes
  ListNode* b = new ListNode(3);
  ListNode* c = new ListNode(1);
  ListNode* d = new ListNode(2);
  ListNode* e = new ListNode(5);
  ListNode* f = new ListNode(1);
  ListNode* g = new ListNode(2);
  head->next = b;//linking the nodes
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = f;
  f->next = g;
  
  display(head);//for displaying the linked list
   int idx = 1;
        int maxFirst = -1;
        int maxLast = -1;
        int minFirst = -1;
        int minLast = -1;
        ListNode* A = head;//keeping 3 pointers at these nodes
        ListNode* B = head->next;
        ListNode* C = head->next->next;
        int minDist = INT_MAX;//for storing minimum distance

         if(C == NULL) {//if the list contains only 2 nodes then it is impossible to find min and max distance
         cout<<-1<<","<<-1;
         return 0;   
      }  

        while(C != NULL){//when this poiner reaches end then break the loop
//a critial point is strcikly greter then it's left and right or striclty lesser then it's left and right          
             if((B->val > A->val && B->val > C->val) || (B->val < A->val && B->val < C->val)){            //this is for maximum distance
                     
              if(maxFirst == -1) maxFirst = idx;//only once maxfirst will be updated
                     else  maxLast = idx;//it will keep on getting changing untill last critical point's index is found

                    //this is for minimum distance
                     minFirst = minLast;//it will hold the any first critical point 
                     minLast = idx;//it will hold last critical point
                     //and update mindistance if first is not -1 , not -1 means critical exist
                    if(minFirst != -1) minDist = min(minDist,(minLast - minFirst));
             }
             idx++;//increament the index
             A = A->next;//move all 3 pointers by 1 node
             B = B->next;
             C = C->next;
        } 
        if(maxLast == -1){//if this is still -1 it means there is critical point as such
        cout<<-1<<","<<-1;//so return {-1,-1}
         return 0;   
         }
        int maxDist = maxLast - maxFirst;//it is the nodes between first and last critical point
       
    cout<<minDist<<","<<maxDist;//prints minimum distance and maximum distance
    return 0; // {minDist,maxDist}
        }