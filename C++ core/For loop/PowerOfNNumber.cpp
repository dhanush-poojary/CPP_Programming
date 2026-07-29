#include<iostream>//program to print the power of n terms one by one
using namespace std;
int main(){
  int a;
  int power = 1;//later we are multiplying this so it is neccsary to initialize with 1
  int n;
 cout<<"Enter the base: ";
 cin>>a;//here we are giving only the base value 
 cout<<"Enter the number of terms: ";
 cin>>n;//this many times our loop will execute

 for(int i=1;i<=n;i++){
   power*=a;////1 * 2= 2 , 2*2 = 4 ,4*2 = 8 ......upto n terms
   cout<<a<<" Raised to the power "<<i<<" is = "<<power<<endl;

 }

}