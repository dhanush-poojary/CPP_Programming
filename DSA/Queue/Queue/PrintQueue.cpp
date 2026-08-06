#include<iostream>//printing of queue
#include<queue>
using namespace std;
int main(){
   queue<int> q;//declation
   q.push(10);//insertion
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   
   int n = q.size();//size of the queue
   for(int i=0;i<n;i++){
       cout<<q.front()<<endl;//print
       int x = q.front();//take the front element
       q.pop();//pop the front element
       q.push(x);//push it again at the end
   }
   cout<<endl;
}