#include<iostream>//Program to swap to numbers with functions using pointers
using namespace std;//here it is deep copy method
void swap(int *x,int *y){//these 2 pointer variables are different and will receive address of actual arguement
    int temp = *x;//this will swap a's and b's actual value
    *x = *y;         //it is not a shallow copy
    *y = temp;
    return;
}
int main(){
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;//user input of 2 numbers

  int *x = &a;//pointer variable x is pointing towards a's address
  int *y = &b;//pointer variable y is pointing towards b's address
  
  swap(x,y);//here we are passing address throuh pointer variable

//   swap(&a,&b);//this method is without using extra pointer variable
  cout<<"After swapping a = "<<a<<" and b = "<<b;//prints 

}