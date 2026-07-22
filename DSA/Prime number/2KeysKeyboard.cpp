#include<iostream>//Leetcode 650               2 Keys Keyboard
#include<climits>
#include<cmath>
using namespace std;
int hif(int n){//this function is for taking highest factor of a number which is not prime
        for(int i = 2;i<=sqrt(n);i++){//dont start from 1 bcz 1 will give n itself bcz 1 is a factor for all
            if(n%i == 0) return(n/i);
        }
        return 1;
}
bool isprime(int n){//for checking prime numbers within O(sqrt(n)) T.C
        if(n == 1) return 0;
        for(int i=2;i<=sqrt(n);i++){
              if(n%i == 0) return false;
        }
        return true;
}
int main(){
      int n = 3; //3
      int count = 0;
      while(n>1){//T.C O(log n)
          if(isprime(n)){//this is improve time complexity by reducing certain operation T.C of this is O(sqrt(n))
             count+= n;
             break;
          }
          int factor = hif(n);//T.C of this is O(sqrt(n)) //both these both can not be run at once
          count += ( n/factor);//then by dividing n with factor we get number operations
          n = factor;//reducing the n 
      }  
      cout<<count;
}
