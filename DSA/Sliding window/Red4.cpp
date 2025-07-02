#include<iostream>//Leetcode 209                      Minimum Size Subarray Sum
#include<vector>
#include<climits>
using namespace std;
int main(){
   int arr[] = {2,3,1,2,4,3};//an array
   int n = 6; 
   vector<int> nums(arr,arr+n);

   int target = 7;//our target sum
       int minlen  =INT_MAX;

       int i=0,j=0;
       int len;    
       int sum =0;
       while(j<n){
         sum += nums[j]; //taking the sum of each element

         while(sum >= target){//do it untill we find any sum greater then  target sum
            len = j-i+1;//calculating the length
            minlen = min(minlen,len);//finding minimum length bcz we need that
            sum -= nums[i];//minus the first index of this window from sum
            i++;//move the window from begining
         }
        j++;//move the window from ending
       }
       if(minlen == INT_MAX) cout<< 0;//it means no element is equal to the target sum while array's sum is lesser
       cout<< minlen;

}