#include<iostream>//Leetcode    509               Fibonacci Number
#include<vector>
using namespace std;
   int fibo(int n,vector<int>&dp){//T.C O(N) and S.C O(N)
          if(n == 0 || n == 1) return n;//base case

          if(dp[n] != -1) return dp[n];//we are memorizing the answer for n to avoid overlaping
                                     //if we found the answer dont make a call
          dp[n] = fibo(n-1,dp) + fibo(n-2,dp);//storing the n'th answer to memorize
           return dp[n];//return the ans of n'th level
    }
int main(){
     int n = 4;   //dp recursion + memomization(top down dp)
        vector<int> dp(n+1,-1);
       cout<<fibo(n,dp);    

       //  vector<int> dp(n+1,-1);     //dp tabulation method(iterative dp or bottom up dp)
        // if(n == 0 ||n == 1) return n; //base case
        // dp[0] = 0;//we need to insert value for base case
        // dp[1] = 1;
        // for(int i=2;i<=n;i++){//we are starting from 2 
        //      dp[i] = dp[i-1] + dp[i-2];//add previous value to form the series
        // }
        // return dp[n];//last n'th value is answer
    
}

