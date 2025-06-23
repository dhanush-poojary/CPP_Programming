#include <iostream>//Leetcode 1011    Capacity To Ship Packages Within D Days
#include<climits>
using namespace std; 
bool check(int max,int arr[],int n,int days){//this is for calculating the minimum capacity
    int count = 1;//minimum days should be atleast 1
    int m  = max;//max will change after wards
    for(int i=0;i<n;i++){
        if(m>= arr[i]){//loading stock in to the ship
            m-= arr[i];
        }
        else{
            count++;//increase days or going to next day after stock is full
            m = max;//resetting the capacity or stock
            m-= arr[i];//loading again
        }
    }
    if(count>days) return false;//we need to compulsorily utilize those days 
    else return true;//so only value less or equal then days are valid
}
int main()
{  int arr[]= {3,2,2,4,1,4};//array
   int n = sizeof(arr)/4;

   int  days = 3;//days to be completed within
   int mx = INT_MIN;
   int sum = 0;
   for(int i=0;i<n;i++){
      mx = max(mx,arr[i]);//finding maximum element 
      sum+= arr[i];//and sum of all elements
   }
   int ans = -1;
   int low = mx;//mx is important to be low as the any value below can not carry that stock 
   int hi = sum;//this is maximum capacity
   while(low<=hi){
       int mid = (low+hi)/2;
       if(check(mid,arr,n,days)){//we are calling that function wheter this mid can be a capacity or not
           ans = mid;//this can be a capacity
           hi = mid-1;//this is for finding more lesser capacity then current
       }
       else{
          low = mid+1;//if mid can not be capacity then increase the low 
       }
    }
    cout<<ans;
   
}