#include<iostream>//basic implementation of queue
#include<queue>
using namespace std;
int main(){
   queue<int> q;//declaration of a queue
   q.push(10);//insertion
   q.push(20);
   q.push(30);
   q.push(40);

   cout<<q.front()<<endl;//10 will be printed 
   cout<<q.back()<<endl;//40 will be printed 

   cout<<q.size()<<endl;
   q.pop();//10 will be poped
   
   cout<<q.front()<<endl;//20 will be printed
   cout<<q.size()<<endl;
}