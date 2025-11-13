#include<iostream>//Leetcode 1326  Minimum Number of Taps to Open to Water a Garden
#include<vector>
using namespace std;
int main(){
 int n = 5;
 vector<int> ranges = {3,4,1,1,0,0};           //tabulation method

        vector<int> dp(n+1,1000);
        dp[0] = 0;//base case

        for(int i=0;i<=n;i++){
          //here index can go <0 and also >n
             int start  = max(0,i - ranges[i]);//our starting index for current ranges[i]
             int end =  min(n,i + ranges[i]);//our ending index for current ranges[i]
             int ans = 1000;//replacement of INT_MAX

             for(int j=start;j<=end;j++){
                  ans = min(ans,dp[j]);//take the min from start to end 
             }
             if(ans != 1000){
          //this is to avoid larger values addition 
                dp[end] =   min(dp[end],ans+1);//add the answer by adding 1 to it
                //add answer of current tap to it's end index
             }

        }
        cout<< (dp[n] == 1000) ? -1 : dp[n];//if last index is not watered then return -1 
                                                       //otherwise return answer
    
}