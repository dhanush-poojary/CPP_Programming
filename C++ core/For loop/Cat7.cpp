#include<iostream>//To print given gp without using maths
//in gp we have to multiply the difference
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  //To print the given gp(Geomatric progression)
  // 2 4 8 16 32.... upto n
  int gp = 1;//here we are not using maths so we are making use of extra variable
  for(int i=1;i<=n;i++){//n times
    cout<<gp<<" ";//prints series
    gp = gp * 2;//this is the difference
  }
}