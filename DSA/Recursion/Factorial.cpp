#include<iostream>//Program to print factorial of a number using recursion
using namespace std; 
int fact(int n){//we are calculating factorial while coming back 
    //means all things work after function call
    int f = 1; 
    if(n == 0 || n==1) return(1);//this is our base case and factorial of 0 and 1 is 1
   //we can obtain factorial by n * (n-1)!
   
    f = n*fact(n-1);//it will multiplay n with fact(n-1) while coming back from 0!
    return f;//it will return back to  main function
  
}
int main()
{  int n;
    cin>> n;//user input that number which we want the factorial
    
    cout<<fact(n);//function called with an arguement n

   return 0;
}