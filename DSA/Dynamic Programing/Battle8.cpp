#include<iostream>//Minimizing coins
#include<vector>
#include<climits>
using namespace std;
vector<int> coins = {1,5,7};//3 coins 1,5,and 7 we can use it any number of time
vector<int> dp;
int func(int x){
   if(x == 0) return  0;//base case
   if(dp[x] != - 2) return dp[x]; //return memomized answer
    int result = INT_MAX;

   for(int i=0;i<coins.size();i++){
      if(x-coins[i] < 0) continue;//dont call recursion if coin's values is greater then target
       result = min(result,func(x-coins[i]));//otherwise minus x from coin ans find min
   }
   if(result == INT_MAX) return dp[x] = -1; //if we cannot from the answer set -1
   return dp[x] = 1 + result;//+1 for 1 step and result
}

int main(){
  dp.clear();
   dp.resize(100,-2);

   cout<<func(11);//answer will be returned 11 is the target that we have to reach using coins

  
}