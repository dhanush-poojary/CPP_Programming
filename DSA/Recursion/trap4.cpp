#include <iostream>//printing 1 to n and n to n using recursion
using namespace std; 
// void num(int n){//single paramter method

//     if(n == 0) return;//we are neither multiplaying or adding anything so returning nothing
   
//     // cout<<n<<", ";//prints in decreasing order
//     return num(n-1);
//     num(n-1); //this is for printing increasing order
//     cout<<n<<", ";//it will print in increasing order while coming back from 0
//     return;
  
// }
void num(int n,int i){//2 parameter method for printing 1 to n

    if(n == 0) return;//we are neither multiplaying or adding anything so returning nothing
   
    cout<<i-n<<",";//if n is 5 then i will be 6 it will be done like 6-5 = 1 and 6-4 = 2 and so on

    return  num(n-1,i);//we are going n to 0 as normally
}
int main()
{  int n;
    cin>> n;//user input of n's value
   num(n,n+1);//function call with 2 parameters

   return 0;
}