#include<iostream>//Leetcode       198                   House Robber
#include<vector>
using namespace std;
vector<int>dp;
    // int f(vector<int> arr,int i){//top to down dp
    //       if(i == arr.size()-1) return arr[i];//base case when last 1 house is left
    //       if(i == arr.size()-2) return max(arr[i],arr[i+1]);//base case when last 2 house is left then choose the maxmimum one
    //       if(dp[i]!= -1) return dp[i];
    //here we have 2 choices 1 is to rob and another 1 is not to rob
    //       return dp[i] = max((arr[i]+f(arr,i+2)),(0+f(arr,i+1)));
                          //add max of arr[i]+(i+2) and (i+1)
    // }
     int f(vector<int> arr){//bottom to up dp
         int n = arr.size();
         if(n == 1) return arr[0];
          dp[n-1] = arr[arr.size()-1]; //base case when last 1 house is left
          dp[n-2] = max(arr[n-1],arr[n-2]);//base case when last 2 house is left then choose the maxmimum one
          for(int i=n-3;i>=0;i--){
             //here we have 2 choices 1 is to rob and another 1 is not to rob
             dp[i]  = max(dp[i+1],(dp[i+2]+arr[i]));//add max arr[i]+(i+2) and (i+1) to get i
          }
          cout<< dp[0];//0 will have the answer
     }
  int main(){
   int arr[] = {1,2,3,1};//test case
  int n = 4;
  vector<int> nums(arr,arr+n);
  //cout<< f(nums,0);//it will return the answer

        dp.clear();
        dp.resize(nums.size(),-1);
        f(nums);//it will return the answer
    }