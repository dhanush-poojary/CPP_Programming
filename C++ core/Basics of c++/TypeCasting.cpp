#include<iostream>//usage of type casting
using namespace std;
int main(){
//code for getting exact half of an integer
  // int x;
  // cout<<"Enter the number:";
  // cin>>x;
  // //x = x - (float)x;//these are two types of casting into int to float
  // cout<<x/2.0;
 
//code for getting only the fractional part from float variable(i.e 7.8= 0.8)
  float x;
  cout<<"Enter the number:";
  cin>>x;
  int y = (int)x;//getting out it's integer part
  if(x<0) y-=1;//this is for i the number is negetive
  x = x - (float)y;//this will minus integer with the old value to get fractional value
  cout<<x;
}