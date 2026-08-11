#include<iostream>//Leetcode 1155   Number of Dice Rolls With Target Sum
#include<vector>
using namespace std;
vector<vector<int> >dp;
    int func(int n,int k,int t){
       if(n == 0 && t == 0) return 1;//n means dice are over and t means target is 0
       if(n == 0) return 0;//all dice utilized but did not sum to target
       int sum = 0;
       if(dp[n][t] != -1) return dp[n][t];//return memomized answer

       for(int i=1;i<=k;i++){//run it for each face which is k
           if(t-i < 0) continue;//if target gets smaller then the i then dont call recursion
           sum = ((sum%1000000007) + (func(n-1,k,t-i)%1000000007))%1000000007;
           //add the sum of f(n-1,k,t-i) up to n=0 && t == 0 or n == 0
       }
       return dp[n][t]  = sum%1000000007;//10 to power 7 and return sum
    }
int main(){
  int n = 1, k = 6, target = 3;
        dp.clear();
        dp.resize(35,vector<int>(1005,-1));

        cout<<func(n,k,target);//it will return number of dice roles
    
  }