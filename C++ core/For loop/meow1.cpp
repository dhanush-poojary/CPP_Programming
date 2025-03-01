#include<iostream>//To print the n'th numbers factorial
using namespace std;
int main(){
   int fact = 1;//it is important to initialize this to 1 if we put 0 then result will
   //come in 0 itself
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;//user input
   //factorial can also be as 5*1,5*2,5*3,5*4,5*5 = 120
   for(int i=1;i<=n;i++){//this loop executes 5 times
    fact*=i;// this is fact = fact * i;

//instead of printing we print inside the loop to get every term from 1 to n with it's fact
    cout<<"The factorial of "<<i<<" is = "<<fact<<endl;

   }
}