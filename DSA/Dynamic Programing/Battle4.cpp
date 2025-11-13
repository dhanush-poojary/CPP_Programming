#include<iostream>//Leetcode    70                Climbing Stairs
#include<vector>
using namespace std;
  int helper(int n,vector<int>& dp){
      if(n == 1 || n == 2) return n;//when only 1 or 2 steps left then return n bcz it takes n steps
       if(dp[n] != -1) return dp[n];
       return dp[n] = helper(n-1,dp) + helper(n-2,dp);//make 2 calls for n-1,step 1 jump and other for n-2,step 2 jump 
    }
    int main(){
      int n = 3;
      vector<int> dp(n+1,-1);//Memomization
    cout<<helper(n,dp);

  // if(n == 1 || n == 2) return n; base case //tabulation
  //     vector<int> dp(n+1);
  //     dp[1] = 1;//1 will take 1 step
  //     dp[2] = 2; //2 will take 2 step

  //     for(int i=3;i<=n;i++){
  //         dp[i] = dp[i-1] + dp[i-2];//similar to fibonacci add i-1 and i-2'th elements 
  //     }
  //     cout<<dp[n];

}