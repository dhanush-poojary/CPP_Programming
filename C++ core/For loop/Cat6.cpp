#include<iostream>//To print the given ap upto n terms without using maths
//in ap we have to add the difference
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  //To print this ap(Arithematic progression)
  // 1 3 5 7 9... upto n
  int ap = 1;//here we are not using maths so we are making use of extra variable
  for(int i=1;i<=n;i++){//n times
    cout<<ap<<" ";//prints series
    ap = ap + 2;//this is a difference
  }
}