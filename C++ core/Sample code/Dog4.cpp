#include<iostream>//code for finding simple interest
using namespace std;
int main(){
  float p,t,r,si;
  cout<<"Enter principle ammount time and rate: ";
  cin>>r>>t>>p;//user inputs of 3 variables values
  si = (p*t*r)/100;//here bracket is nesscesary as BODMAS
  cout<<"\nSimple interest = "<<si;
}