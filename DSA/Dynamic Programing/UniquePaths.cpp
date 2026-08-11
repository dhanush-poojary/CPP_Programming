#include<iostream>//Leetcode    62                  Unique Paths
#include<vector>
using namespace std;
 int path(int sr,int sc,int er,int ec,vector<vector<int> >&dp){
       if(sr == er && sc == ec ) return 1;//when it reaches the end of the path return 1
       if(sr > er || sc > ec) return 0;//if it goes out of bound return 0 , no path
       if(dp[sr][sc] != -1) return dp[sr][sc];
       return dp[sr][sc] = path(sr+1,sc,er,ec,dp) + path(sr,sc+1,er,ec,dp); //go right and go down
          //add the answer of both and return it
      }

    int main(){
      int m = 3, n = 7;
  vector<vector<int> >dp(m,vector<int>(n,-1)); //memomization method
   cout<<path(0,0,m-1,n-1,dp);
  //  if(m == 1 || n == 1) return 1; base case //tabulation
  //      vector<vector<int> >dp(m,vector<int>(n,1));//add 1 to all cells
  
  //       for(int i=1;i<m;i++){//dont go to o'th cell at all
  //            for(int j=1;j<n;j++){
  //                dp[i][j] = dp[i-1][j] + dp[i][j-1];//add top and left cell to get current (i,j)'th cell
  //            }
  //       }
  //       cout<<dp[m-1][n-1];//last cell will have the answer 
}
