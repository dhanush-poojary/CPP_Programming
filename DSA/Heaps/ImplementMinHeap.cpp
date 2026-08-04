#include<iostream>//Basic implementation of Min Heap
#include<queue>
using namespace std;
int main(){
   priority_queue<int ,vector<int>,greater<int> > pq;//declaration of a min heap
   
//at each insertion and deletion it takes log n time to rearrange the current minimum element at the top of heap
   pq.push(40);//top is 40
   pq.push(10);//top is 10
   pq.push(-30);//top is -30
   pq.push(20);//top is -30
   
   cout<<pq.top()<<endl;//-30
   pq.pop();//-30 will be deleted
   cout<<pq.top();//10 will be at top

}