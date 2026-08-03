#include<iostream>//Program for printing star Pyramid pattern
using namespace std;
int main(){
   int n;
   cout<<"Enter the number of lines: ";
   cin>>n;//user input of n number of lines

   int nst = 1;//1 star in 1st line
   int nsp = n-1;//it is basically n-i only

// star pyramid   
//    *
//   ***
//  *****
// *******

   for(int i=1;i<=n;i++){//this loop prints lines
    cout<<endl;//newline
    for(int j=1;j<=nsp;j++){//this loop prints spaces as usual
               //j<=n-i is also correct
        cout<<" ";
    }
    nsp--;//spaces are decreamented by 1 after each line

    for(int k=1;k<=nst;k++){//this loop prints stars as usual 
                // k<=i*2-1  is also correct
        cout<<"*";
    }
    nst+=2;//stars are increamented by 2 in each line
   }

} 