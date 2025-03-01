#include<iostream>//Program to print fibonacci series upto n terms
using namespace std;
int main(){
  int n,f1 = 1,f2 = 0,f3;//1 and 0 is the starting of the fibonacci series
  cout<<"Enter the number of terms: ";
  cin>>n;//user input of terms 

  for(int i=1;i<=n;i++){
    cout<<f2<<endl;//0 1 1 .. upto n terms it will print
    f3 = f1 + f2; //formula for fibonacci which is the sum of last two series
    f1 = f2;
    f2 = f3;

  }
}