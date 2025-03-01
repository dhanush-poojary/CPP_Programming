#include<iostream>//Program to print the n'th fibonacci series
using namespace std;
int main(){
  int n,f1 = 1,f2 = 0,f3;//1 and 0 is the starting of the fibonacci series
  cout<<"Enter the number of terms: ";
  cin>>n;//user input of terms 

  for(int i=1;i<=n;i++){
    
    f3 = f1 + f2; //0 1 1 .. upto n terms it will calculate
    f1 = f2;
    f2 = f3;

  }
  cout<<f3;//the last term will be printed which is decided by n's value
}