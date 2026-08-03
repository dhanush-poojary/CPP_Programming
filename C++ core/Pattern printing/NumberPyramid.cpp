#include<iostream>//Program for printing number pyramid pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//user input of n number of lines

//Number pyramid pattern
//    1
//   123
//  12345
// 1234567

  for(int i=1;i<=n;i++){//this loop prints lines
    cout<<endl;
    for(int k=1;k<=n-i;k++){//this loop prints spaces as usual
                  //k<=nsp is also correct 
  //spaces are decreamented by 1 after each line which is n-i 
      cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){//this loop prints stars as usual 
                // k<=nst  is also correct 
//stars are increamented by 2 in each line which is 2*i-1
      cout<<j;
    }

  }

}