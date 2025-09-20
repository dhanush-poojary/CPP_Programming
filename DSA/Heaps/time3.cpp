#include<iostream>//To find the k'Th smallest element in the array
#include<queue>
using namespace std;
int main(){
   int arr[] = {10,20,-4,6,18,2,105,118};
   int n = sizeof(arr)/4;
//we use max heap to find k'th smallest element
   int k = 3;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();//heaps top will be k'th smallest element
}