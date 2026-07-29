#include<iostream>//To print hello world n times
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;//user input of n number for printing hello world that many times

  for (int i = 1; i <=n; i++)//this loop runs n times
  {
     cout<<"Hello world"<<endl;
  }
}