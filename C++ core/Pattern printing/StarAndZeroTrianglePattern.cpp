#include<iostream>//Program for printing star and zero triangle pattern
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of lines: ";
    cin >> n;//user input of n number of lines

//       *
//      *0*
//     *000*
//    *00000*
//   *0000000*
//  *000000000*
// *************

    int nst = 1;
    int nsp = n-1;
   for(int i=1;i<=n-1;i++){//this loop prints lines (n-1)is because last line we are printing separately
    cout<<endl;
    for(int k=1;k<=nsp;k++){//this loop prints space before pattern
        cout<<" ";
    }
    for(int j=1;j<=nst;j++){//this is similar loop as pyramid pattern's loop
        if(j==1 || j==nst){//only outside stars will be printed
            cout<<"*";
        }
        else{
            cout<<0;//inside 0 will be printed
        }
    }    
    nst+=2;//stars are increamented by 2
    nsp--;//spaces are decreamented by 1
}
  cout<<endl;//it is mendatory
for(int i=1;i<=2*n-1;i++){//this loop prints last line stars
    cout<<"*";
}
    return 0;
}