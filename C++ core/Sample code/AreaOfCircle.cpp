#include<iostream>  //code for finding area of circle
using namespace std;
int main(){
  int radius;
  float pi = 3.1415;//if exact value of pi gives exact area
  cout<<"Enter the Radius of a circle:";
  cin>>radius;
  float area = pi*radius*radius;
  cout<<"The Area of a circle = "<<area;//prints result
}