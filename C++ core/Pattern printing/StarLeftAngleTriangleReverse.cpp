#include<iostream>//Program for printing Star left angle triangle reverse pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//this is for printing number of lines

// star left angle triangle reverse
// *****
// ****
// ***
// **
// *

//method 1
for(int i=1;i<=n;i++){//this loop prints the lines
    cout<<endl;
    for(int j=1;j<=n-i+1;j++){//this loop prints stars corresponding to the line number
//but in reverse if i is 1 then n is 4 the 4-1+1 will be 5 stars in first line then so on
      cout<<"*";
    }
  }

//method 2
//   for(int i=1;i<=n;i++){ //this loop prints the lines
//     cout<<endl;
//     for(int j=n;j>=i;j--){//we are executing the loop in reverse as though we need to print
//         cout<<"*";
//     }
//   }

}