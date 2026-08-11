#include<iostream>//Leetcode   188 Best Time to Buy and Sell Stock IV
#include<vector>
#include<cstring>
#include<climits>
using namespace std;
int dp[1005][105][2];
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
   vector<int>prices = {2,4,1};//input
    int k = 2;//no of transaction
   
        memset(dp,-1,sizeof dp);//to intinialize a 2D or 3D vector with 1 value
        cout<< pro(prices,0,k,false);//false means no transaction
}