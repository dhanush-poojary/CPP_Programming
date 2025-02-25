#include<iostream>//To print the absolute value of an integer
using namespace std;
int main(){
  int x;
  cout<<"Enter the number:";
  cin>>x;//user input of any number(positive and negetive)

  if(x>0){//if it is positive then abs will be the number it self
    cout<<"The Absolute value of "<<x<<" is = "<<x;
  }
  else{//if it is not then convert the number to it's positive term by using multiplication of signs or formula
  //(i.e cout<<-x); alse x*(-1)formula  
    cout<<"The Absolute value of "<<x<<" is = "<<x*(-1);
    //prints positive term of negetive number
  }

}