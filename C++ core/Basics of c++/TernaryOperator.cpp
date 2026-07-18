#include<iostream>//usage of ternary operator
using namespace std;
int main(){
  int x;
  int marks = 34;
  //ternary operator is not mostly used but it works similar to if else statement
//condition is true then this will execute else this will
  marks>=35 ? cout<<"Pass" : cout<<"Fail";

  x = 1!=2<5 ? 10 : 20;//expressions result will be stored in x 
//if condition is true then 10 else 20
  cout<<endl<<x;//x will be printed

}