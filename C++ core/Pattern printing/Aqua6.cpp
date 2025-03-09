#include<iostream>//Program for printing Star bridges pattern
using namespace std;
int main(){
   int n;
   cout<<"Enter the number of lines: ";
   cin>>n;//user input of n number of lines

// star Bridge
// *******
// *** ***
// **   **
// *     *
   int nsp = 1;//1 space in 2nd line
   int nst = n-1;//instead of this we can use n-i in the loop itself
   for(int i=1;i<=2*n-1;i++){//this loop is for printing first line stars only which is 2*n-1
       cout<<"*";
   }
   
   for(int i=1;i<=n-1;i++){//this loop executes for n-1 lines only as we have already printed 1st line
      cout<<endl;//newline
       for(int j=1;j<=nst;j++){//this loop prints n-i numbers
              cout<<"*";
       }
       
       for(int k=1;k<=nsp;k++){//this loop prints number of spaces
        cout<<" ";
        
       }
       
       for(int j=1;j<=nst;j++){//this is for printing another half of the bridge
        cout<<"*";//prints star
       }
       nst--;//number of stars are decreamented by 1 after each line
       nsp+=2;//spaces are being increamented by 2 after each line
       

   }
}