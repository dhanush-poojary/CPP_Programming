#include<iostream>//Program for printing Hallow Star Diamond pattern
using namespace std;
int main(){
   int n;
   cout<<"Enter the number of lines: ";
   cin>>n; //user input of n number of lines
   int nst = 1;//1 star in first line
   int nsp = n-1;//this is similar to n-i

// Hallow star Diamond   
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

   for(int i=1;i<=2*n-1;i++){//this loop prints lines
    cout<<endl;
    for(int j=1;j<=nsp;j++){//this loop prints spaces as usual
        cout<<" ";
    }

    for(int k=1;k<=nst;k++){//this loop prints stars as usual 
                // k<=i*2-1 is also correct
//as we need to print hallow which is empty from inside that's why we have printed stars
//only in 1  and last of the loop an in between we had printed spaces                
         if(k==1 || k==nst)cout<<"*";
         else cout<<" ";   
        }
    if(i<n){//if n is 4 then this block will run till 3rd line only
     nst+=2;//stars are increamented by 2
     nsp--;//and spaces are decreamented by 1
     }
     else{//after i>=4 then this block will be executed
     nst-=2;//stars are decreamented by 2
     nsp++;//and spaces are increamented by 1
     }
   }

}