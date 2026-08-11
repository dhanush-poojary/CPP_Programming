#include<iostream>//Leetcode    63              Unique Paths II
#include<vector>
using namespace std;
  int path(int sr,int sc,int er,int ec,vector<vector<int> >&dp,vector<vector<int>>& arr){
       if(sr > er || sc > ec) return 0;//when it goes out of bound return 0 bcz no path
       if(arr[sr][sc] == 1) return 0;//where are doing same as unique path I ,but only change is when we
      //came up with obstacle then return 0 bcz it is not a valid path

       if(sr == er && sc == ec ) return 1; //when it reachs last element then return 1 
       if(dp[sr][sc] != -1) return dp[sr][sc];
       //we have to add both paths right and down to get correct path
       return dp[sr][sc] = path(sr+1,sc,er,ec,dp,arr) + path(sr,sc+1,er,ec,dp,arr);
    }
    int main(){
      int arr[3][3] = {{0,0,0},{0,1,0},{0,0,0}};  //tabulation
      int m = 3, n = 3;
    //   int m = arr.size(),n = arr[0].size();  //memomization
    // vector<vector<int> >dp(m,vector<int>(n,-1));
    //  return path(0,0,m-1,n-1,dp,arr);

      if(arr[0][0] == 1 || arr[m-1][n-1] == 1) return 0;//base case //if last or first cell is a obstacle
      vector<vector<int> > dp(m,vector<int>(n,0)); //add 0 to all cell's 
      for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
            if(arr[i][j] == 1) dp[i][j] = 0;//when a obstacle is found insert 0 
            //we gonna add obstacle's value also as it is 0 ,it wont effect our answer
        else//if it is not obstacle then
           { 
            if(i ==0 && j==0) dp[i][j] = 1;//add 1 if it is 0'th row/column 
            else if(i==0 && j!=0) dp[i][j] = dp[i][j-1]; //add only left cell, so that index does not go out of bound
            else if(i!=0 && j==0) dp[i][j] = dp[i-1][j];//add only top cell, so that index does not go out of bound
            else dp[i][j] = dp[i-1][j] + dp[i][j-1];//otherwise add both
            }      
          }
      }
      
      cout<<dp[m-1][n-1];//return last cell bcz it has the answer of distinct path
  

}