#include<iostream>//No of steps to reach n to 1
#include<climits>
#include<vector>
//1. you can go n-1
//2. you can make n/2, if it is divisible
//3. you can make n/3, if it is divisible
using namespace std;
vector<int> dp;

// int op(int n){
//   if(n == 1) return 0;// 1 takes 0 steps to reach 1
//   if(n == 2 || n == 3) return 1;//2 takes 1 step to reach 1/ /3 takes 1 step to reach 1
//   if(dp[n] != -1) return dp[n]; 
     
      //add 1(each call) and min(op(n-1),op(n/2):op(n/3)) only if divisible and, n-1 can always be -1
      //   return dp[n] = 1 + min(op(n-1),min((n%2 == 0)? op(n/2): INT_MAX ,(n%3 == 0) ? op(n/3) : INT_MAX));
      // }
      int main(){
  int n = 10;
  dp.clear();
 // dp.resize(100+n,-1);   
 //  cout<<op(n);//top to down dp
 dp.resize(n+1,-1);  //dont want 0'th index
 
 dp[1] = 0;// 1 takes 0 steps to reach 1
 dp[2] = 1;//2 takes 1 step to reach 1
 dp[3] =  1;//3 takes 1 step to reach 1
 int i = 0;
 for(int i=4;i<=n;i++){
   //add 1 (each call)and min(op(n-1),op(n/2):op(n/3)) only if divisible and, n-1 can always be -1
   dp[i] = 1 + min(dp[i-1],min((i%2 == 0)? dp[i/2] : INT_MAX,(i%3 == 0) ? dp[i/3] : INT_MAX));
  }
  cout<<dp[n];//last element will be the min step to reach n to 1
  
}