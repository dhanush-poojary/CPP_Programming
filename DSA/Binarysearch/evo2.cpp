#include <iostream>//Leetcode 2187            Minimum Time to Complete Trips
#include<climits>
using namespace std; 
bool check(int time,int arr[],int n,int trips){//this is for finding the minimum time to complete bus trips 
    int count = 1;
    for(int i=0;i<n;i++){
      count+= time/arr[i];//by diving we get the destination point where the busess are at this time of mid
    }                    //be cause the travel time of each bus is different
    if(count>= trips) return true;//if any value can utilize the notrips more or equal then the actual value
    else return false;
}
int main()
{  int arr[]= {1,2,3}, trips = 5;//array
   int n = sizeof(arr)/4;

   int mx = INT_MIN;
   for(int i=0;i<n;i++){
      mx = max(mx,arr[i]);//finding the maximum element
   }
   int ans = -1;
   int low = 1;//1 is the minimum time
   int hi = mx*trips;//this the maximum time 
   while(low<=hi){
       int mid = (low+hi)/2;
       if(check(mid,arr,n,trips)){//checking whether the current mid can be minimum time or not
           ans = mid;
           hi = mid-1;//find lower time then current time
       }
       else{
          low = mid+1;//find higher time then current time
       }
    }
    cout<<ans;
   
}