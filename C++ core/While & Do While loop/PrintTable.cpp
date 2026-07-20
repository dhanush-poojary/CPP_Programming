#include<iostream>//To print the table of a entered number using while loop
using namespace std;
int main(){
  int x;
  cout<<"Enter the table number:";
  cin>>x;//user input
  
  int i = 1;//iterater
  while(i<=10){//it will execute 10 times
     cout<<x<<" X "<<i<<" = "<<x*i<<endl;
     i++;//increamenter

  }

}