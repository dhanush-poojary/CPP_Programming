#include<iostream>//Leetcode      746  Min Cost Climbing Stairs
#include<vector>
using namespace std;
int help(int cost[],int i,vector<int>& dp){//recursion + memomization
//we are following top to bttom approach
      if(i== 0 || i == 1) return cost[i];//base case

      if(dp[i] != -1) return dp[i];//if we already have the answer for current step then dont make call
      return dp[i] =  cost[i] + min(help(cost,i-1,dp),help(cost,i-2,dp)); //for each step add min(i-1,i-2)'th step's answer
      //store it in dp to memomize it
}
int main(){
   int cost[] = {1,100,1,1,1,100,1,1,100,1};//dp recursion + memomization(top down dp)
       int n = 10;
        vector<int> dp(n,-1);
        cout<<min(help(cost,n-1,dp),help(cost,n-2,dp));
    
       //start from 2 bcz we can start from either 0 or 1'th step
        //  for(int i=2;i<n;i++){         //dp tabulation method(iterative dp or bottom up dp)
        //       cost[i]+= ( min(cost[i-1],cost[i-2]));  //add current step and min(previous 2 steps)
        //  }
        //  cout<<min(cost[n-1],cost[n-2]);//we can reach top in 2 ways either by 1 step or 2 so return min(n-1,n-2)'th step's answer
}