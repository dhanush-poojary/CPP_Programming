#include<iostream>//Program to find a number which is divided by 5 and 3 but not by 15 using nested if 
using namespace std;
int main(){
  int num;
  cout<<"Enter the number:";
  cin>>num;//user input of natural number

  if((num%5==0 || num%3==0)){//if this condition gets true then only the 15's codition will be checked
    if( num%15!=0){//if this also gets true then this block will be executed
    cout<<"The Entered number fullfiles the condition";
    }
    else{//if not then this will be executed
      cout<<"not matching conition";
    }
  }
  else{//if the number does not divies 5 and 3 then this block will be executed
     cout<<"not matching conition";
  }

}