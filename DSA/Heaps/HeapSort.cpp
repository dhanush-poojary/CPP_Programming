#include<iostream>//Heap sort algorithm T.C O(n log(n)) and S.C O(n)
#include<queue>
using namespace std;
int main(){
  int arr[] = {10,1,2,20,5,8};//an array
  int n = sizeof(arr)/sizeof(arr[0]);

  for(int ele : arr){
     cout<<ele<<" ";//printing 
  }
  priority_queue<int, vector<int>, greater<int> > pq;//min heap
  for(int i=0;i<n;i++){
      pq.push(arr[i]);//inserting the elements into min heap
  }
  for(int i=0;i<n;i++){
//we can also make use of max heap  but only change is that we are inserting elements from the back
//of the array arr[n-i-1] = pq.top() 

     arr[i] = pq.top();//each time insert into ith index, the top of  heap as it is i'th min element
     pq.pop();//remove it 
  }
  cout<<endl;
  for(int ele : arr){
     cout<<ele<<" ";//printing 
  }


}