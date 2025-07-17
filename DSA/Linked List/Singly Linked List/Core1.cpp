#include<iostream>//Leetcode    2326          Spiral Matrix IV
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
void display(vector<vector<int> >&v){//this is for displaying the 2D vector
   for(int i=0;i<v.size();i++){
       for(int j=0;j<v[i].size();j++){
            cout<<"\t"<<v[i][j];
       }
       cout<<endl;
   }
}
int main(){
   int m = 3, n = 5; //row and column size
  int minr = 0,maxr = m-1;
  int minc = 0,maxc = n-1;
  vector<vector<int> > v(m,vector<int>(n,-1)); //storing -1 by default bcz we need to store -1 when the linked list gets empty
 
  ListNode* a = new ListNode(3);//creating the new node
  ListNode* b = new ListNode(0);
  ListNode* c = new ListNode(2);
  ListNode* d = new ListNode(6);
  ListNode* e = new ListNode(8);
  ListNode* f = new ListNode(1);
  ListNode* g = new ListNode(7);
  ListNode* h = new ListNode(9);
  ListNode* i = new ListNode(4);
  ListNode* j = new ListNode(2);
  ListNode* k = new ListNode(5);
  ListNode* l = new ListNode(5);
  ListNode* o = new ListNode(0);
  a->next = b;//linking all the nodes
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = f;
  f->next = g;
  g->next = h;
  h->next = i;
  i->next = j;
  j->next = k;
  k->next = l;
  l->next = o;

  ListNode* head =a;
          int count = 1;//this is to maintain the m*n elements count 
  ListNode* temp = head;
        while(minr<=maxr && minc<=maxc){//if both of these gets out of bound we need to break the loop 

            for(int i=minc;i<=maxc && count<=m*n ;i++){//this is for moving right
            if(temp == NULL) {
               display(v);//for dispalying the vector
            return 0;
            }
             v[minr][i] = temp->val; //storing the value of node in vector
             temp = temp->next;//moving to the next node
             count++;   
            }
            minr++;//reducing the minr a row will be reduced
       
            for(int j=minr;j<=maxr && count<=m*n ;j++){//this is for moving down
            if(temp == NULL) {
               display(v);//for dispalying the vector
            return 0;
            }
              v[j][maxc] = temp->val;//storing the value of node in vector
             temp = temp->next;//moving to the next node
             count++;
            }            
            maxc--;//reducing the minc a column will be reduced

            for(int k=maxc;k>=minc && count<=m*n ;k--){//this is for movind left  
               if(temp == NULL) {
               display(v);//for dispalying the vector
            return 0;
            }
              v[maxr][k] = temp->val;//storing the value of node in vector
               temp = temp->next;//moving to the next node
               count++;
             
            }
            maxr--;//reducing the maxr a row will be reduced

            for(int l=maxr;l>=minr && count<=m*n ;l--){//this is for moving up
               if(temp == NULL) {
               display(v);//for dispalying the vector
                 return 0;
               }
               v[l][minc] = temp->val;//storing the value of node in vector
               temp = temp->next;//moving to the next node
               count++;
            
            }
            minc++;//reducing the minc a column will be reduced
            
        }    
        display(v);//for dispalying the vector
}