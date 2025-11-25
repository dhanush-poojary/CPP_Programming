#include<iostream>  //Leetcode 741  Cherry Pickup  OR Tourist
#include<climits>
#include<vector>
#include<cstring>
using namespace std;
//here we have to take the tourist from top left -> bottom right
//1 means special path
//0 means simply pass through
//-1 means there is a bloack 

int dp[55][55][55];//here state depends on 4 factor i,j,x,y but we can ignore j bcz j can be computer by using i,x,y's values
                      //x+y-i = j
  int arr[3][3] = {{0,1,-1},{1,0,-1},{1,1,1}};//test case
int m,n;

int f(int i,int j,int x,int y){
   if(i>=m || j>=n || x>=m || y>=n || arr[i][j] == -1 || arr[x][y] == -1) return INT_MIN;//base case
   if(i == m-1 && j == n-1){//when we reached the destination
     return arr[i][j] == 1;//return 1 if 1 is present otherwise 0
   }
   if(dp[i][j][x] != -1) return dp[i][j][x];//apply dp
   
   int res = INT_MIN;//initialize it with smalles value

  //we have 3 choices for our 2 tourists
   res = max(res,f(i+1,j,x+1,y));//we can move both down
   res = max(res,f(i,j+1,x+1,y));//we can move both right
   res = max(res,f(i+1,j,x,y+1));//we can move 1st down and 2nd right
   res = max(res,f(i,j+1,x,y+1));//we can move 1st right and 2nd down
   
   if(res == INT_MIN) return dp[i][j][x] = INT_MIN;//it means we did not get any path

   res+= (arr[i][j] == 1);//add the current tourist's values
   res+= (arr[x][y] == 1);

   if(i == x &&j == y && arr[i][j] == 1) res--;//if both tourist are standing at same position then res--
   return dp[i][j][x] = res; 
}
int main() {
        memset(dp,-1,sizeof dp);
        m = 3;
        n = 3;

        int ans = f(0,0,0,0);//start the both tourist from 0,0 th index
        int a = ans == INT_MIN  ? 0 : ans;//of ans is INT_MIN then there no path so return 0
        cout<<a;   //else return ans
    }



