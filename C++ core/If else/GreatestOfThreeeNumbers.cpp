#include<iostream>//Greatest of 3 numbers using if else statement
using namespace std;
int main(){
  int a = 10,b = 15,c = 30;//delcaration and initialization of 3 numbers
  
  if(a>b &a>c){//if A is greater then B and C then it is greatest
    cout<<"A is greatest!";
  }
  else if(b>a && b>c){//if B is greater then A and C then it is greatest
    cout<<"B is greatest!";
  }
  else{//if A and B are not greater then C then C will be greatest
    cout<<"C is greatest!";
  }

}