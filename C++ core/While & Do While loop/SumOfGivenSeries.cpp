#include<iostream>//To print the sum of the given series 
using namespace std; // 1 + 2 - 3 + 4 - 5 + 6 - 7 + .... upto n 
int main(){
  int n,sum = 0;
  
  cout<<"Enter the number: ";
  cin>>n;//user input
  for(int i=1;i<=n;i++){//this loop execute n upto n values
       if(i%2!=0){//here we are adding the odd numbers to sum variable 
          sum = sum + i;
       }
       else{//here we are substracting the even numbers from the sum variable
        sum = sum - i;
       }

  }
  cout<<"The sum of the series is = "<<sum;//prints
 
}