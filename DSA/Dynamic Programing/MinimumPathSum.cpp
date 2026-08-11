#include<iostream>//Leetcode   64               Minimum Path Sum
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> dp;
 int path(int i,int j,int m,int n,vector<vector<int>>& arr){
       if(i == m && j == n) return arr[i][j];//when it reaches last index just return ele

       if(i>m || j>n) return INT_MAX;//if we return 0 while taking minimum 0 will be an issue so make it INT_MAX so that minimum path can be choosen
       
       if(dp[i][j] != -1) return dp[i][j];//return memomized answer
       
       return dp[i][j] =  arr[i][j] + min(path(i+1,j,m,n,arr),path(i,j+1,m,n,arr));
 }                  //arr[i][j] +  min(right path,down path)
int main(){
  vector<vector<int> > grid = { {1,3,1},{1,5,1},{4,2,1}};
        dp.clear();
        dp.resize(200,vector<int>(205,-1));

       cout<< path(0,0,grid.size()-1,grid[0].size()-1,grid);//memomization method
    
        // int m = grid.size(),n = grid[0].size();    //tabulation method
        // vector<vector<int> > dp(m,vector<int>(n,-1));

        // dp[m-1][n-1] = grid[m-1][n-1];//base case

        // for(int i=m-2;i>=0;i--){//for filling n'th column 
        //      dp[i][n-1] = grid[i][n-1] + dp[i+1][n-1];
        // }
        // for(int i=n-2;i>=0;i--){//for filling n'th row
        //      dp[m-1][i] =  grid[m-1][i] +  dp[m-1][i+1];
        // }
        // for(int i=m-2;i>=0;i--){
        //     for(int j=n-2;j>=0;j--){ //for filling the remaining rows by adding grid's i,j and min(right,down) ele
        //          dp[i][j] = grid[i][j] + min(dp[i+1][j],dp[i][j+1]);
        //     }
        // }
        // cout<<dp[0][0];
}