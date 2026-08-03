#include<iostream>//Program for printing Star left angle triangle pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//this is for printing number of lines

// star left angle triangle
//   *
//   **
//   ***
//   ****
//   *****

  for(int i=1;i<=n;i++){//this loop prints the lines
    cout<<endl;
    for(int j=1;j<=i;j++){//this loop prints stars corresponding to the line number
        cout<<"*";
    }
  }

}