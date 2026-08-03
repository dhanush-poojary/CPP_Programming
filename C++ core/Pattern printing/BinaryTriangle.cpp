#include<iostream>//Program for printing Binary triangle
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//user input of number of lines

//Binary triangle
// 1
// 01
// 101
// 0101

 int  nst;//using this variable where are printing 0 and 1
  for(int i=1;i<=n;i++){//prints lines
    cout<<endl;//newline

//from the observation we can tell that in odd number of line we are starting with 1 and
// in even number of line we are starting with 0
    if(i%2!=0) nst = 1;//for odd line
    else nst = 0;//for even line

    for(int j=1;j<=i;j++){//this loop prints 0 and 1 corresponding to the line number 
        cout<<nst;
//after printing nst were are flipping if it is 0 then 1 , if it is 1 then 0 and so on
        if(nst == 0 ) nst = 1;
        else nst = 0;
    }
  }

 //method 2
//  for(int i=1;i<=n;i++){//prints lines
//     cout<<endl;//newline

//     for(int j=1;j<=i;j++){//this loop prints 0 and 1 corresponding to the line number
//         //if i and j are both odd 
//         //else if i and j are both even then if we add them it will be even only
//         //2+2 = 4 is even and 3+3 = 6 is even

//         if((i+j)%2==0)  cout<<1;
//         //that's why instead of that we combined 2 conditions into 1
//         else cout<<0;//in even + odd  = odd condition we are printing 0 
//     }
//  }

}