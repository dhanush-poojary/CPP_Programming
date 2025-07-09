#include<iostream>//Printing the prime numbers within O(sqrt(n)) time complexity
#include<cmath>
using namespace std;
int main(){
    int n = 25;
    bool flag;

    for(int i=2;i<n;i++){//1 is not a prime so start from 2
      flag = false;//if it remains false then the number is prime
      for(int j=2;j<=sqrt(i);j++){//it will not divide with each number upto n but upto sqrt(n)
         if(i%j == 0){//if it gets divided then it is not a prime number
              flag = true;
              break;
              }
    }
    if(flag == false) cout<<i<<endl;//printing the primes
  }     
   return 0;
}