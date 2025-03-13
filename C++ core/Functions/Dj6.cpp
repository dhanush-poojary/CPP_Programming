#include<iostream>//Program for swapping 2 numbers using functions 
using namespace std; //incorrect method
void swap(int a,int b){//this will swap the 2 variables but not the actual arguements of
  //main function only the formal arguements so it can only printed inside this function
    int temp = a;
    a = b;
    b = temp;
    cout<<a<<" "<<b;//prints swapped 
}
int main(){
  int a,b;
  cout<<"Enter two numbers: ";
  cin>>a>>b;//user input of 2  numbers
 
 swap(a,b);//function call

}