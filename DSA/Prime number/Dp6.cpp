#include<iostream>//Leetcode 507          Perfect Number
#include<cmath>
using namespace std;
//A perfect number is a number whose factor's sum is equal to the number itself
int main(){
  int num  = 28;
        int sum = 0;

   for(int i=1;i<sqrt(num);i++){//taking the sum of factors before sqrt(28)
       if(num%i == 0) sum+=i;
   }
     for(int i=sqrt(num);i>1;i--){//taking the sum of factors after sqrt(28)
       if(num%i == 0) sum+=(num/i);
    }
    cout<< (sum == num); //if is equal then 1 else 0 will be printed
           

}