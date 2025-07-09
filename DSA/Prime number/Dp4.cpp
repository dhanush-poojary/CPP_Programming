#include<iostream>//Leetcode 2507 Smallest Value After Replacing With Sum of Prime Factors
#include<cmath>
using namespace std;
bool isprime(int n){//this function is for checking the prime numbers
    if(n == 1) return false;
    for(int i=2;i<=sqrt(n);i++){
         if(n%i== 0) return false;
    }
    return true;
  }
int smallestValue(int n) {
     if(isprime(n)) return n;//when it becomes the prime number then directly return it
     int sum = 0;
      for(int i=1;i<sqrt(n);i++){//we are reducing the prime factors only if prime number
       if(n%i == 0 && isprime(i)) 
       {  int m = n;
          while(m%i == 0){//taking the sum of those gitis can
               sum += i;
               m /=  i;
          }
       }
}
     for(int i=sqrt(n);i>=1;i--){//we are reducing the prime factors only if prime number
       if(n%i == 0 && isprime(n/i)){
         int m = n;
          while(m%(n/i) == 0){//taking the sum of those gitis can
               sum+= (n/i);
               m/= (n/i);
          }
       }
       }
      if(sum == n) return n;
      return smallestValue(sum);//calling it again for 
   }
int main(){
   int n;
   n = 15; //5
   cout<<smallestValue(n);//this question usages recursion so we did is to make a function

}