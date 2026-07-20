#include<iostream>//sample code
using namespace std;
int main(){
  int a = 6;//variable initialization
  int *ptr = &a;//pointer initialization
  
//   (*ptr)++; always use ()brackets while increamenting of operator variables to avoid warning

  ptr = ptr + 1;//this will increament the address by 4 bytes not 1 but somethings 1 bytes
  cout<<*ptr;//using derefference operator we can print actual value which is present in a's address

}