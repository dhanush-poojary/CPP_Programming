#include<iostream>//Program for take product of 2 numbers using pointers
using namespace std;
int main(){
   int a = 2,b = 5;//2 numbers

   int* x = &a;//x is pointing the address of a
   int* y = &b;//y is pointing the address of b

   int product = *x * *y;//here we are multiplying the values which are present in the addres
   //and storing it in another variable

   cout<<a<<" * "<<b<<" is = "<<product;//product will have the product of a and b

}