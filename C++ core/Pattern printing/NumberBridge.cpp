#include<iostream>//Program for printing Number bridges pattern
using namespace std;
int main(){
   int n;
   cout<<"Enter the number of lines: ";
   cin>>n;//user input of n number of lines

// Number Bridge
// 1234567
// 123 567
// 12   67
// 1     7

   int nsp = 1;//1 space in 2nd line
   
   for(int i=1;i<=2*n-1;i++){//this loop is for printing first line stars only which is 2*n-1
       cout<<i;
   }
   
   for(int i=1;i<=n-1;i++){//this loop executes for n-1 lines only as we have already printed 1st line
       cout<<endl;//newline

       int nst = 1;//it is being initialized in each iteration of i'th loop
       for(int j=1;j<=n-i;j++){//this loop prints n-i numbers
              cout<<nst;
              nst++;
       }
        for(int k=1;k<=nsp;k++){//this loop prints number of spaces
           cout<<" ";
           nst++;//in the place of space we skipping the value of nst 123 567
           //4 is being skipped over here

            }
            nsp+=2;//spaces are being increamented by 2 after each line
       
       
       for(int j=1;j<=n-i;j++){//this is for printing another half of the bridge
        cout<<nst;//prints numbers
        nst++;
       }
       nst--;//number of stars are decreamented by 1 after each line
      

   }
}