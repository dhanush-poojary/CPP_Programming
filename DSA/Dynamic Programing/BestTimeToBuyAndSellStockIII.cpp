#include<iostream>//Leetcode   123   Best Time to Buy and Sell Stock III
#include<vector>
#include<cstring>//in this question only difference is k = 2 for each test case and other then that rest is same
#include<climits>
using namespace std;
int dp[100005][105][2];
int pro(vector<int>& arr,int i,int k,bool on){
      if(i == arr.size()) return 0;//when i reach end of arr return 0

      if(dp[i][k][on] != -1) return dp[i][k][on];//applying dp

      int ans  = INT_MAX;

      ans = pro(arr,i+1,k,on);//it will skip a day dont buy or sell 

      if(on == true){//if there is no ongoing transaction then only
        ans = max(ans,arr[i] + pro(arr,i+1,k-1,false)); //buying
      }
      else{//if there is an ongoing transaction
        if(k>0)//only if there are transaction avaliable ,then only we can sell it
          ans = max(ans,pro(arr,i+1,k,true)-arr[i]);//selling
          //if arr[i] is small then it will go in minus to avoid that write afterwards
      }
      return dp[i][k][on] = ans;
}
  int main() {
   vector<int>prices = {2,4,1};
    int k = 2;//only 2 transactions 
   
        memset(dp,-1,sizeof dp);//to intinialize a 2D or 3D vector with 1 value
        cout<< pro(prices,0,k,false);//false means no ongoing transaction
}