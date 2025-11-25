#include<iostream>//Leetcode 72   Edit Distance
#include<cstring>
using namespace std;

   int dp[505][505];
    int dis(string &s1,string &s2,int i,int j){ //memomization method
        if(i == s1.size()) return s2.size() - j;//str1is finished so there we need str2.length no insertion operation
        if(j == s2.size()) return s1.size() - i;//str2 is finished so we need no str1.length no deletion operation
//there is no guanrantee that i or j will be at 0'th index so minus the current index by the size of each while returning    
       
if(s1[i] == s2[j]) return  dp[i][j] = dis(s1,s2,i+1,j+1);//if both string character is same then dont do anyting
    
if(dp[i][j] != -1) return dp[i][j];//apply dp

  return  dp[i][j] = min(min(1+ dis(s1,s2,i+1,j+1), 1 + dis(s1,s2,i+1,j)),1 + dis(s1,s2,i,j+1));
//here we have 3 choices replace , delete,and insert and +1 is for cost for each of any
    }
// int dp[505][505];
int mian(){ 
    string word1 = "horse";//test case
    string word2 = "ors";
    
//         memset(dp,0,sizeof dp);   //tabulation method
//          for(int j =0;j<word2.size();j++){//filling the base case values
//              int i = word1.size();   //last row and j'th column
//              dp[i][j] = word2.size()-j;//all posible values of j
//          }
//           for(int i =0;i<word1.size();i++){//filling the base case values
//              int j = word2.size(); //last clomun and i'th row
//              dp[i][j] = word1.size()-i;//all posible values of i
//          }

//        for(int i=word1.size()-1;i>=0;i--){
//           for(int j=word2.size()-1;j>=0;j--){

//               if(word1[i] == word2[j]) dp[i][j] = dp[i+1][j+1];//both same character then add i+1,j+1'th rows
                          
//              else  dp[i][j] = min(min(1+ dp[i+1][j+1], 1 + dp[i+1][j]), 1 + dp[i][j+1]); 
////here we have 3 choices replace , delete,and insert and +1 is for cost for each of any
//          }
//          }
//          cout<< dp[0][0];//it will return the answer


            memset(dp,-1,sizeof dp);//initialize the 2D array
        cout<< dis(word1,word2,0,0);
     
    }
