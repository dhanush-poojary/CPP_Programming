#include<iostream>//Leetcode 2389                Longest Subsequence With Limited Sum
#include<vector>
#include<algorithm>
//here we need to return the longest subsequence whose sum equal to the quries array
using namespace std;
int main(){
  int arr[] = {4,5,2,1}, queries[] = {3,10,21}; // answer{2,3,4}
  int n =  4;
  vector<int> nums(arr,arr+n);
        int m = 3;

         vector<int> subs(m);//it's size should stricly equals to queries size

         sort(nums.begin(),nums.end()); //sorting the array
         for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];  //taking prefix sum within the array itself
         }

        //  for(int i=0;i<m;i++){//this code's T.C is more so use binary search to search the subsequence whose sum is lesser or equal to queries[i]
        //     int len = 0;
        //     for(int j=0;j<n;j++){
        //        if(nums[j]>queries[i])break;
               
        //         len++;
        //     }
        //     subs[i] = len;
        //  }

          for(int i=0;i<m;i++){//T.C O(M)
            int len = 0;
           int low = 0,hi = n-1;

//we are randomly search the values lesser then queries[i] instead of traveling each index untill gets greater then queries[i] like above
           while(low<=hi){//T.C O(log N)
              int mid = (low+hi)/2;
              if(nums[mid] > queries[i]) hi = mid-1;//we need equal sum not more or less
              else{
                    len = mid+1;//index + 1 will be out length
                    low = mid+1;//this is if any more long subsequence can be found or not
              }
           }
            subs[i] = len;//storing the subsequence's length's
         }
    for(int ele : subs){
      cout<<ele<<" ";//printing
    }
 }