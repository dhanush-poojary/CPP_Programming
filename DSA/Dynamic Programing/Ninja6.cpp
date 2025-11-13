#include<iostream>//Leetcode      688  Knight Probability in Chessboard
#include<cstring>
using namespace std;  
  
//    double dp[30][30][105];
//    double pro(int n,int i,int j,int k){
//       if(i<0 || j<0 ||j>=n || i>=n) return 0;//if knight goes out of bound even if it has k moves there will be zero probablity

//       if(k == 0) return 1;//if knight has finished is k moves and still it is present inside then 1 probability

//       if(dp[i][j][k] > 0) return dp[i][j][k];///answer can not be negetive so we did it 0 as base case

//       double ans = 0.0;
// //there are 8 possible ways that our knight can move in i and j
   ////for adding 8 possible moves for knight
//       ans+= pro(n,i-2,j-1,k-1)*(0.125);//0.125 means 1/8
//       ans+= pro(n,i-2,j+1,k-1)*(0.125);//0.125 means 1/8
//       ans+= pro(n,i-1,j-2,k-1)*(0.125);//0.125 means 1/8
//       ans+= pro(n,i-1,j+2,k-1)*(0.125);//0.125 means 1/8
//       ans+= pro(n,i+2,j-1,k-1)*(0.125);//0.125 means 1/8
//       ans+= pro(n,i+2,j+1,k-1)*(0.125);//0.125 means 1/8
//       ans+= pro(n,i+1,j-2,k-1)*(0.125);//0.125 means 1/8
//       ans+= pro(n,i+1,j+2,k-1)*(0.125);//0.125 means 1/8

//       return dp[i][j][k] = ans;//return answer
//    }

  double dp[30][30][105];   //optimized
   int dx[8] = {-2,-2,-1,-1,2,2,1,1};
   int dy[8] = {-1,1,-2,2,-1,1,-2,2};

   double pro(int n,int i,int j,int k){
      if(i<0 || j<0 ||j>=n || i>=n) return 0;//if knight goes out of bound even if it has k moves there will be zero probablity
      if(k == 0) return 1;//if knight has finished is k moves and still it is present inside then 1 probability
      if(dp[i][j][k] > 0) return dp[i][j][k];//answer can not be negetive so we did it 0 as base case
      double ans = 0.0;
//there are 8 possible ways that our knight can move in i and j

    for(int idx = 0;idx<8;idx++){//for adding 8 possible moves for knight
   //here 0.125 means 1/8
        ans+=  pro(n,i+dx[idx],j+dy[idx],k-1)*(0.125);
                //add i+dx[idx] and j+dy[idx] and k-1 for deducting for each move
    }
      return dp[i][j][k] = ans;//return ans

   }
  int main(){
    int n = 3, k = 2, row = 0, column = 0;
        memset(dp,0,sizeof dp); 
       cout<< pro(n,row,column,k);    //memomization method

    }