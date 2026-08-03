#include<iostream>//Program for printing Star plus pattern
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;//n should always be odd then only it is possible for printing

// Star plus
//   *
//   *
// *****
//   *
//   *

    for(int i=1;i<=n;i++){//this loop is for number of lines
        cout<<endl;//newline
        for(int j=1;j<=n;j++){//this loop is for printing both spaces and the stars

//From the observation we can say that the stars are printing in the middle only which is 
//if i = 3 and j = 3 only when n is 5 so 
//we are taking the middle of n value by dividng n/2+1 if n is 5/2+1 will be 3

  if((i==(n/2)+1) || (j==(n/2)+1) ){//only in middle we are printing stars in x and y axis
           cout<<"*";
        }
   else{//except middle it will print blank spaces 
                cout<<" ";
            }
        }
    }

}