#include<iostream>//Leetcode 96            Unique Binary Search Trees
#include<vector>
using namespace std;
vector<int>dp;
int BST(int n){   //memomization method
      if(n == 0 || n == 1) return 1;//base case
  if(n == 2) return 2;//we have 2 bst for n = 2
  int sum = 0;
  if(dp[n] != -1) return dp[n];//applying dp
  for(int i = 1;i<=n;i++){//make each node as root
      sum+= BST(i-1) * BST(n-i);//k-1 to k + 1 multipy each values and add it in sum
  }
  return dp[n] = sum;
}
int main(){
       int n = 3; //test case 
      dp.clear();
     dp.resize(20,0);

     dp[0] = dp[1] = 1;//base case
     dp[2] = 2;     //tabulation method

     for(int i=3;i<=n;i++){ //make each node root
           for(int k = 1;k<=i;k++){//a root's left and right
          dp[i]+= dp[k-1] * dp[i-k];//k-1 to k + 1 multipy each values and add it in sum
      }
    }
    cout<<dp[n];//return dp[n] which will consist the no unique bst
  


}