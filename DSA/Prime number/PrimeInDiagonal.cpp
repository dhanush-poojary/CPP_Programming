#include<iostream>//Leetcode 2614             Prime In Diagonal
#include<vector>
#include<cmath>
using namespace std;
     bool isprime(int n){//A function which checks whether the number is prime or not
    if(n == 1) return false;
    for(int i=2;i<=sqrt(n);i++){
         if(n%i== 0) return false;
    }
    return true;
  }
int main(){
  int nums[][3] = {{1,2,3},{5,17,7},{9,11,10}};//an 2 dimensional array
//here we need to search only in the digonal for maximum prime number among them
  int n = 3;

   int largest = 0;
       for(int i=0;i<n;i++){
          if((isprime(nums[i][i])) == true) largest = max(nums[i][i],largest);//it will check the primary diagonal
          if((isprime(nums[i][n-i-1])) == true)  largest = max(nums[i][n-i-1],largest);//it will check the secondary digonal 

        }
   cout<<largest;//the maximum prime number
 } 
