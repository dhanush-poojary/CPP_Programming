#include <iostream>//To find the sum of n using recursion
using namespace std; 
// void sum(int i,int n){//2 parameter method
//     if(n == 0) {
//         cout<<i;//we are printing the sum here beacuse the function type is void
//         return;
//     }
//     sum(i+n,n-1);//we are adding n's value to i and while going forward from n to 0
// }
int sum(int n){//1 parameter method
    int s = 0;
    if(n == 1) {//this is our base case
         return 1;//it will return 1 beacuse we are adding while coming back
    }
   s = n + sum(n-1);//here also we are it when coming back from 0 from recursive relation
   return s;//returns s to main
}
int main()
{  int n = 10;
//   sum(0,n);
   cout<< sum(n);//function called with n
   
}