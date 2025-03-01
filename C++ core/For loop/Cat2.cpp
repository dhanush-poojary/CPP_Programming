#include<iostream>//To print the given n'th table
using namespace std;
int main(){
  int x;
  cout<<"Enter the value of the table: ";
  cin>>x;//user input of any table for printing

  for (int i = 1; i <=10; i++)//the loop will run 10 times
  {
     cout<<x<<" X "<< i<<" = "<< x*i<<endl;//this line prints
  }
}