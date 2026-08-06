#include<iostream>//To reverse the first k  elements of the queue
#include<stack>
#include<queue>
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
int main(){
   int k = 3;
   queue<int> q;
   q.push(1);//inserting the elements
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   
   stack<int> st;
   for(int i=1;i<=k;i++){//firstly empty the k elements of the queue into the stack
        st.push(q.front());
        q.pop();
   }
   while(st.size() > 0){//then  retrive those elements back to queue then it will be in reverse
      q.push(st.top());
      st.pop();
   }
   int n = q.size();
   for(int i=1;i<=n-k;i++){//after that insert at the back the remaining n-k elements 
       q.push(q.front());
       q.pop();
   }
   
    display(q);//and display the queue

}