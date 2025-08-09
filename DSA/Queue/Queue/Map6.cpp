#include<iostream>//Reorder queue using only a stack 
#include<queue>//even length of queue //here we need to inter leave the 1st and 2nd half of the queue
#include<stack>
using namespace std;
void display(queue<int> &q){
 int n = q.size();//size of the queue
   for(int i=0;i<n;i++){
       cout<<q.front()<<endl;//print
       int x = q.front();//take the front element
       q.pop();//pop the front element
       q.push(x);//push it again at the end
   }
}
void reverse(queue<int> &q){
  stack<int> st;//we can reverse the queue using stack
   while(q.size()>0){
    int x = q.front();//take the front element
     q.pop();//and pop it
     st.push(x);//push that element in a stack it will be in correct order naturally
    }
    while(st.size()>0){//then insert those back into the stack
      int x = st.top();//take the top element it will be inserted in reverse order
      st.pop();//pop that element 
      q.push(x);//then insert it back into the queue
    }
}
int main(){
  queue<int> q;

  q.push(1);//inserting the elements into the queue
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  stack<int> st;
   int n = q.size();
  for(int i=0;i<n/2;i++){//emptying the first half elements of queue into stack
       st.push(q.front());
       q.pop();
  }
   while(st.size() > 0 ){//then reinserting them back to the queue
        q.push(st.top());
        st.pop();
   }
  for(int i=n/2;i<n;i++){//then again emptying the queue into stack
       st.push(q.front());
       q.pop();

  }
   while(st.size() > 0 ){//after that  inserting the elements from stack to queue again
     q.push(st.top());
     st.pop();
     q.push(q.front());//and then insert the front element of queue to the rear end of queue
     q.pop();//and pop front element
   }
  reverse(q);//this is for reversing the queue
  display(q);//it is for displaying
}