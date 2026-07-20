#include<iostream>//Program for finding GCD of 2 numbers using function
using namespace std;//gcd and hcf is the same(Greatest common devisor)

int gcd(int x,int y){//a function is of type int
    int gcd;
    for(int i = min(x,y);i>=1;i--){//this is more efficient method rather then running the
//loop normally form 1 to min as it saves many iteration 
        if(x%i==0 && y%i==0){//if this 2 are ture then it means i is the gcd
            gcd = i;
            break;//exit from the loop /break out of the loop
        }
    }
    return (gcd);//end of the function
}
int main(){
  int x,y;

  cout<<"Enter two number: ";
  cin>>x>>y;//user input of x and y values
  int hcf = gcd(x,y);//function call and stores the returned value in hcf
  cout<<"The gcd of "<<x<<" and "<<y<<" = "<<hcf;//prints gcd
  
}