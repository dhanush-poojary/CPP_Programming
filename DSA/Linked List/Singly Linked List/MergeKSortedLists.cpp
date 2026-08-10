#include<iostream>//Leetcode  23           Merge k Sorted Lists
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
 ListNode* merge(ListNode* tempA, ListNode* tempB) {//this function will merge 2 sorted lists into a new list
            ListNode* c = new ListNode(-1);//this is node is useless but we need it as a head 
         ListNode* tempC = c;//pointer for that node

         while(tempA != NULL && tempB != NULL){//when both list's gets ended then break the loop
            if(tempA->val <= tempB->val){//minimum of from both list
                tempC->next = tempA;//connecting tempC to tempA
                tempC = tempA;//moving tempC to tempA
                tempA = tempA->next;//moving tempA to it's next node
            }
            else{//if(tempB->val < tempA->val)
                   tempC->next = tempB;//connecting tempC to tempB
                   tempC = tempB;//moving tempC to tempB
                  tempB = tempB->next;//moving tempB to it's next node
            }
         }

         if(tempA == NULL ){//when tempA gets NULL connect tempB's node by tempC's next
             tempC->next = tempB;
         }
         if(tempB == NULL ){//when tempB gets NULL connect tempA's node by tempC's next
             tempC->next = tempA;
         }
       return c->next;
    }
      void display(ListNode* Head){ //this function is for displaying list
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
  a->next = b;//linking all the nodes
  b->next = c;

  ListNode* d = new ListNode(40);
  ListNode* e = new ListNode(50);
  ListNode* f = new ListNode(60);
  d->next = e;
  e->next = f;

  ListNode* g = new ListNode(70);
  ListNode* h = new ListNode(80);
  ListNode* i = new ListNode(90);
  g->next = h;
  h->next = i;
  ListNode* v[3]= {a,d,g};
  int m = 3;
  vector<ListNode*> arr(v,v+m);//a vector consisting of k no of linked list's head nodes 
       if(arr.size() == 0 ){ //if there is no head node then return NULL
        cout<<NULL;
        return 0;
    }
      
       while(arr.size() > 1){//after sorting and merging all the head nodes only 1 head will be left out

          ListNode*A = arr[0];//taking the first head node of vector
          arr.erase(arr.begin());//it is bacically arr.push_front since we dont have that we are using this
               
          ListNode*B = arr[0];//taking the first head node of vector
          arr.erase(arr.begin());//it is bacically arr.push_front since we dont have that we are using this

          ListNode*c =  merge(A,B);//then merging in sorted from then storing it in new node
           arr.push_back(c);//then  push_back that head in vector
       }
       display(arr[0]);//after sorting all the head nodes only 1 head will be left out
}