#include<iostream>//Leetcode   1137              N-th Tribonacci Number
#include<vector>
using namespace std;
int tribo(int n,vector<int>& dp){
    if(n == 0 || n == 1) return n;// base case 1
    if(n == 2) return 1;//base case 2
    if(dp[n] != -1) return dp[n]; //if we already have the answer then return it

    return dp[n] = tribo(n-1,dp) + tribo(n-2,dp) + tribo(n-3,dp); //otherwise make a call and store ans in dp
}         //  make 3 calls as it is a tribonnaci number
int main(){
      int n = 4;
       vector<int>dp(n+1,-1);//Memomization
       cout<<tribo(n,dp);
   
    //  if(n == 0 || n == 1) return n;    //Tabulation
    //     if(n == 2) return 1;//base case 
    //     vector<int> dp(n+1);
    //     dp[0] = 0;//base case 
    //     dp[1] = 1;
    //     dp[2] = 1;
    //     for(int i=3;i<=n;i++){
    //          dp[i] = dp[i-1] + dp[i-2] + dp[i-3];//just add all 3 together to get series
    //     }
    //     cout<<dp[n];   

    }

