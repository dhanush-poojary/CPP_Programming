#include<iostream>//Program to swap 2 numbers with functions without using pointers
using namespace std;
void swap(int &x,int &y){//but here receiving address of those variables 
    int temp = x;//it acts similar to pointers and hance the value is passed as refference
    x = y;
    y = temp;
    return;
}
int main(){
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;//user input of 2 numbers

  swap(a,b);//here we are passing 2 variables to a function normally
  cout<<"After swapping a = "<<a<<" and b = "<<b;//prints

}