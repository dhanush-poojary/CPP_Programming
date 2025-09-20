#include<iostream>//Leetcode 215 Kth Largest Element in an Array
#include<queue>
using namespace std;
int main(){
   int arr[] = {10,20,-4,6,18,2,105,118};  //Time complexity will be O(n log k )
   int n = sizeof(arr)/4;
//we use max heap to find k'th largest element
   int k = 3;
    priority_queue<int ,vector<int>,greater<int> > pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();//top will be k'th larget element
}