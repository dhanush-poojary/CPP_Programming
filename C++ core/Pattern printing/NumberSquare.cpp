#include<iostream>//Program for printing the  Number square pattern
using namespace std;
int main(){
  int n,m;
  cout<<"Enter the no line and stars:";
  cin>>n;//sides of square are eqaul so n should be enough for nXn

// Number square
// 1234
// 1234
// 1234
// 1234
  
  for(int i=1;i<=n;i++){//this is for no of lines
     cout<<endl;//newline
     for(int j=1;j<=n;j++){//this is for printing no of digits
        cout<<j ;
     }
  }

}