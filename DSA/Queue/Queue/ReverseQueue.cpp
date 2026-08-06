#include<iostream>//reverse the elements of queue
#include<queue>
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
   q.push(10);//inserting the element
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);

   reverse(q);//it will reverse the elements of the queue
   display(q);//it will display the queue
   

  }