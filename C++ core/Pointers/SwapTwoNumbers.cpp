#include<iostream>//To take Sum of two numbers using pointers 
using namespace std;
int main(){
  int x,y;
  cout<<"Enter two numbers: ";
  cin>>x>>y;//user input of 2 numbers

  int* p1 = &x;//pointer p1 is initialized with the x's address
  int* p2 = &y; //pointer p2 is initialized with the y's address
   
  int sum = *p1 + *p2;//using derefference operator(*) we are adding value which is present
  //in the address of x and y
  cout<<"The sum of 2 pointers= "<<sum;

}