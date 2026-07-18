#include<iostream> //usage of modulo operator
using namespace std;
int main(){
  int a = 10,b = 3;
  int q = a/b;//we need this for formula of remainder
  int r = a - (b*q);//this is normal and mannual method
  int rem = a%b;//this is way better and usefull method
  cout<<"The remainder of "<<a<<" and "<<b<<" = "<<rem<<endl;
  cout<<"The remainder of "<<a<<" and "<<b<<" = "<<r;

}
