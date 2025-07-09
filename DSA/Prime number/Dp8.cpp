#include<iostream>//Leetcode   2521      Distinct Prime Factors of Product of Array
#include<cmath>
#include<vector>
#include<climits>
using namespace std;
   void fillsieve(vector<bool> &arr){//this function will store 1 if the number is prime if not then zero
         int n = arr.size()-1;
        for(int i=2;i<=sqrt(n);i++){
             for(int j = i*2 ; j<=n ; j += i){
                arr[j] = 0; 
             }
        }
    }
int main(){
     int arr[] = {2,4,3,7,10,6};//array
     int n = 6;
     vector<int> nums(arr+n,arr);

      int mx = INT_MIN;
      for(int i=0;i<n;i++){
        mx = max(mx,nums[i]);//taking the maximum element in the array
      }  
      vector<bool> sieve(mx+1,1);//1 means prime number
      if( mx>0 ) sieve[0] = 0;//these 2 are not prime
      if( mx>1 ) sieve[1] = 0;
      fillsieve(sieve);//here we are actually storing the primes based on index 
      
      vector<int> prime;
      for(int i=2;i<=mx;i++){
          if(sieve[i] == 1) prime.push_back(i);//storing the prime number from index of sieve array
      }

      vector<int> taken(prime.size(),0);
      for(int i=0;i<n;i++){
        int ele = nums[i];
         for(int j=0;j<prime.size();j++){//this will mark the prime numbers that comes before
                                         //max of the array
              if(prime[j]>ele) break;
              if(ele%prime[j] == 0) taken[j] = 1;
         }
      }
       int count = 0;
       for(int i=0;i<taken.size();i++){//then take the count of distant prime numbers
          if(taken[i] == 1) count++;
       }
      cout<< count;   
           
   return 0;
}