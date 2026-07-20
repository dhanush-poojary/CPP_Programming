#include<iostream>//To find first and last digit of a number using function and without returning any value
using namespace std;//no returning means we are changing the actual aguements and not the formal one
void digits(int n,int* x,int* y){
    *y = n%10;//this will update last digit of n in _2nd_digit variable through pointer
    while(n>9){//this condition is for not making the last number as 0 
//we need first digit if we n!=0 then n will be 0 after then loop ends

        n = n/10;//this will chop the last digit in each iteration
    }
    *x = n;//this will update first digit of n in _1st_digit varible through pointer
}
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;//user input of n numbers of digits

  int _1st_digit,_2nd_digit;//these 2 for storing 1st and last digits of number n

  int* ptr1 = &_1st_digit;//ptr1 is pointing to 1st digit
  int* ptr2 = &_2nd_digit;//ptr2 is pointing to last digit

  digits(n,ptr1,ptr2);//function call and passing 2 pointers with address of variables

  //we making changes here in actual arguement using pointers 
  cout<<"The first digit is = "<<_1st_digit<<" and the second digit is = "<<_2nd_digit;

}