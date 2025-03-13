#include<iostream>//Program for printing combination and permutations using functions
#include<cmath>
using namespace std;
int combination(int n){//a function of type int
    int fact = 1;
    for(int i=2;i<=n;i++){//this is for calculating factorial of calling value which is n
        fact*=i;
    }
    return(fact);//returns the factorial to main function
}
int main(){
  int n,r;
  cout<<"Enter the values of n and r: ";
  cin>>n>>r;//user input of n and r value

  if(r>n){//for the formula n should be greater then r 
    cout<<"\nThe n value must be greater!";
    exit(0);//this will terminate entire program
  }
  int ncr = combination(n)/(combination(r)*combination(n-r));//function call several times
  int npr = combination(n)/combination(n-r);//function calles

  cout<<"nCr = "<<ncr<<endl; //prints final result
  cout<<"nPr = "<<npr;
}