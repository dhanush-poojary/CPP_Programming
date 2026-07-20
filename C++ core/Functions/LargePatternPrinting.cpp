#include<iostream>//Program to print Large pattern printing using functions
using namespace std;
void pattern(int n){//a function of type void

   for(int i=1;i<=n;i++){//this loop is for printing lines
    for(int j=1;j<=i;j++){//this loop is for printing stars
        cout<<"*";
    }
    cout<<endl;//newline
   }
   return;//it is not nesccesary for void type
}
int main(){
  int a,b,c;
  cout<<"Enter the values of 3 triangles: ";
  cin>>a>>b>>c;//User input of 3 value of 3 triangle lengths

  pattern(a);//function call
  pattern(b);//function call
  pattern(c);//function call
 
  return 0;

}