#include <iostream>//Leetcode 875                   Koko Eating Bananas
#include<climits>
using namespace std; 
bool check(int speed,int arr[],int n,int h){
    int count = 0;
    for(int i=0;i<n;i++){
       if(count>h) return false;//this is to avoid integer out of range error in leetcode 

       if(speed>=arr[i]) count++;//this pile can be eaten at once
       else if(arr[i]%speed == 0) count+= arr[i]/speed;//this pile can be eaten arr[i]/speed times
       else count+= arr[i]/speed + 1;//this pile can be eaten arr[i]/speed times
    }
    if(count>h) return false;//we need to completely utilize the h hours 
    else return true;//so consider values only lesser or equal to h
}
int main()
{  int arr[]= {3,6,7,11}, h = 8;//array
   int n = sizeof(arr)/4;

   int mx = INT_MIN;
   for(int i=0;i<n;i++){
      mx = max(mx,arr[i]);//finding maximum element
   }
   int ans = -1;
   int low = 1;//1 is the minimum speed to be eat the bananas
   int hi = mx;//maximum speed to eat bananas
   while(low<=hi){
       int mid = (low+hi)/2;
       if(check(mid,arr,n,h)){//if mid can be a minimum speed then store it in ans
           ans = mid;
           hi = mid-1;//and check for lower value to be minimum speed
       }
       else{
          low = mid+1;//this is for finding larger value s
       }
    }
    cout<<ans;
   
}