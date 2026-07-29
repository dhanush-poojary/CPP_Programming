#include<iostream>//To print even and odd number side by side using for loop
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of times: ";
  cin>>n;//user input
  cout<<"Odd | even"<<endl;
  for(int i=1;i<=n;i++){//n times
     if(i%2==0) cout<<i<<endl;//this is for printing even numbers
     else cout<<i<<"\t";//it will print odd numbers and also tab space by /t
    }

}