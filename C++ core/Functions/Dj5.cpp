#include<iostream>//Program For printing factorial of first n numbers using functions
using namespace std;
int fact(int n){//function with the type int
    int f =1;
    for(int i =2;i<=n;i++){//this is for getting factorial
        f*=i;
    }
    return(f);//it will return factorial
}
int main(){
  int n;
  cout<<"Enter the value of factorial: ";
  cin>>n;//user input of n numbers
 
  for(int i=1;i<=n;i++){//this loop will call the fact function n times
    
    cout<<fact(i)<<endl;//here the fact function is called with i's value n times and
    // it will be printed the factorial value which is return by the factorial function
  }

}
