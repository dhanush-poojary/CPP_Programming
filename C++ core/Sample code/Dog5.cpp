#include<iostream>//2 methods of swapping 2 numbers 
using namespace std;
int main(){
  int x = 2,y = 3;
  cout<<"Before swapping: a = "<<x<<" and b = "<<y<<endl;//prints result
//using a third variable
  // int temp = x;
  // x = y;
  // y = temp;
//without using a third variable
  x = x + y;
  y = x - y;
  x = x - y;
  cout<<"After swapping: a = "<<x<<" and b = "<<y;
  
}