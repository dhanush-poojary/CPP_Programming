#include<iostream>//Basic implementation of Max Heap
#include<queue>
using namespace std;
int main(){
   priority_queue<int> pq;//declaration of a max heap or priority queue
  
//at each insertion and deletion it takes log n time to rearrange the current maximum element at the top of heap
   pq.push(40);//top will be 40
   pq.push(10);//top will be 40
   pq.push(-30);//top will be 40
   pq.push(20);//top will be 40
   
   cout<<pq.top()<<endl;//40
   pq.pop();//40 will be popped
   cout<<pq.top();//30

}