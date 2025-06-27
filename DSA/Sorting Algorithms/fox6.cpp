#include<iostream>//Cycle sort
//this is only works for selective cases not for all array only if array contains 0 or 1 to n elements
using namespace std;//Time complexity is O(n) and S.C is O(1)
int main(){
  int arr[] = {4,1,6,2,5,3};//array containing 1 to n elements
  int n = sizeof(arr)/4;

  for(int ele : arr) cout<<ele;//printing

   int i=0;
   while(i<n){
      int idx = arr[i]-1;//idx is it's correct index where it should be
      if(i == idx) i++;//if the current element is present at correct position then skip
      else{
          swap(arr[idx],arr[i]);//otherwisw swap it with it's correct index
      }
   }
   cout<<endl;
  for(int ele : arr) cout<<ele;//printing
}