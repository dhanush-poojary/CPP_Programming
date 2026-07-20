#include<iostream>//Double pointers
using namespace std;
int main(){
  int x = 6;//integer initialization
  int* ptr = &x;//*ptr is initialized with the x's address
  int** p = &ptr;//**ptr is basically used to store a pointer itsels address
  
  int*** pt = &p;//this is a triple pointer whiich is pointing towards the address of
  //*p pointer if we print ***p then we can print x's value
 
//   cout<<&x<<endl;//prints x's address
  cout<<*ptr<<endl;//prints x's value which is present in that address
  cout<<**p<<endl;//prints x's value
  cout<<***pt<<endl;//prints x's value
 
}