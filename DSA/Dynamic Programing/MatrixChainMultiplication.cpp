#include<iostream>//Matrix Chain Multiplication
#include<vector>
#include<climits>
using namespace std;
vector<vector<int> > dp(100,vector<int>(100,-1));//as state of the dp is 2  we use 2D dp
int f(int i,int j,vector<int> arr){
     if(i == j || i+1 == j) return 0;//if there is 1 size then cost will become 0
     if(dp[i][j] != -1) return dp[i][j];//apply memomization
     int ans = INT_MAX;
     for(int k=i+1;k<j;k++){//1 to k<j which is n
//here we  are  adding(i,k and k,j) 'th matrix  i*k*j dimensions
         ans = min(ans,f(i,k,arr) + f(k,j,arr) +arr[i]*arr[k]*arr[j]);
     }
     return dp[i][j] = ans;//return ans
}
int main(){
    vector<int> v = {40,20,30,10,30};//in this array there are 4 dimensions 
    //(40,30) and (30,10) and (10,20)  and (20,30)    i.e arr[i]*arr[i-1]  dimension calculation

   cout<<f(0,v.size()-1,v); //0'th index to n-1 
}