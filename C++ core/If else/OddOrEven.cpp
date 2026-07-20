#include<iostream> //To know if the entered number is a odd or even
using namespace std;
int main(){
  int x;
  cout<<"Enter the number:";
  cin>>x;//user input of any natural number

  if(x%2==0){//if any number % 2 == 0 which is remainder then it is a even number
    cout<<x<<" is a Even number";
  }
  else{//if it is not a even number this it has to be odd number
    cout<<x<<" is a odd number";
  }

}