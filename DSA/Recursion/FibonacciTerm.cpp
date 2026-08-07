#include <iostream>//To find the fibonacci term of entered number using recursion
using namespace std; //2 function call method has worst tc and sc
//even though 2 function call are happening in 1 line but only 1 is done at a time
int fibo(int n){
   if(n==1 || n==2) return (1);//1 and 2nd term's value is 1 itself so return 1 
   //because we are calculating while coming back

   return  fibo(n-1) + fibo(n-2);//first n-1's function call is executed after it is completed
   //n-2's function call is executed and compute the term value
  
}
int main()
{  int n ;
    cin>>n;//user input of n 
    cout<<fibo(n);//function call
   return 0;
}