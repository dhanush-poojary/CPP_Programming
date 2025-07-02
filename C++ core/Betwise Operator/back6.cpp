#include<climits>//To find the length of maximum sub array
#include<iostream>
using namespace std;
int main(){
   int arr[] = {12,3,1,1,6,6,6,6,4,3,8,13,13,13,8};//an array
   int n  = 15;//size of array

   int ans = 0;//To store final length
   int mx = INT_MIN;
   int count = 0;//TO coubt length

   for(int i=0;i<n;i++){
     if(arr[i]  > mx){//counting length of only maximum numbers
        mx = arr[i];
        count = 1;//reset count
        ans = max(ans,count);//change length to maximum possible
      }
      else if(arr[i] == mx){//if same number is maximum
        count++;//increase count of length
        ans = max(ans,count);//change length to maximum possible
     }
   }
   cout<<ans;//final length
}