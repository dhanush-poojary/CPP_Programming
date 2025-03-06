#include<iostream>//Program for printing Star cross pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//n should always be odd then only it is possible for printing
  
//star cross
// *   *
//  * * 
//   *  
//  * * 
// *   *

  for(int i=1;i<=n;i++){//this loop prints number of lines
     cout<<endl;//newline
     for(int j=1;j<=n;j++){//this loop is for printing both the space and the stars

//from the observation we can see that when i==j then a cross line of stars is printed
//1==1,2==2,.....n==n
//and form the sum of i and j if it is equals to n+1 then it prints another cross line of star
//which is i = 1 and j = 5 == N+1 ==6 then print star and so on
        if(i==j || i+j==n+1){//if any 1 condition needs to be true for printing
            cout<<"*";
        }
        else{//otherwise if the conditions are mat print the spaces
            cout<<" ";
        }
     }

  }

}