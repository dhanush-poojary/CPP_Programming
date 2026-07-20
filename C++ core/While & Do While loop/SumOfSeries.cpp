#include<iostream>//To print the sum of series 1 + 2 - 3 + 4 - 5 + 6 - 7 + 8 ...upto n
using namespace std;//using maths formula and without using loops
int main(){
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;//user input 
  int sum = 0 ;

//for futher explaination of forumla please refference c++ notes (WOC book)
  if(n%2==0) sum+= -n/2;//this is for the sum of even series 
  else sum+= -n/2+n;//this is for the sum of odd series
  
  cout<<"The sum of the series is = "<<sum;//prints the sum 

}