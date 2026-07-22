#include<iostream>//Leetcode 204                     Count Primes
#include<vector>
#include<cmath>
using namespace std;
 //T.C is O(n . log(log(n))) which can be read as O(N) bcz log(log(n)) is very small number and S.C is (n)
    void fillsieve(vector<bool> &arr){//sieve of grid for stroing it's index as a prime number
         int n = arr.size()-1;
        for(int i=2;i<sqrt(n);i++){//it will change all the multiples of i upto sqrt(n) to 0 bcz if any number can be multiplied that number it can not be a prime
             for(int j = i*2 ; j<n ; j += i){
                arr[j] = 0; 
             }
        }
    }
  
int main(){
    int n = 10;
      if(n<= 2){//in this range no prime is present
        cout<<0;
        return 0;
      }
       int count = 0;

       vector<bool> sieve(n+1,1);//1 means prime, 0 means composite
       fillsieve(sieve);//filling all the prime numbers into it

       sieve[0] = 0;//these 2 are not prime numbers at all
       sieve[1] = 0;

       for(int i=2;i<n;i++){//here coounting all the prime numbers upto the range n
          if(sieve[i] == 1) count++;//sieve's inedx is maintained as prime
       }
       cout<< count;    
   return 0;
}