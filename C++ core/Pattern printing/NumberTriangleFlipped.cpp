#include<iostream>//Program for printing Number triangle flipped pattern 
using namespace std;
int main(){
   int n;
   cout<<"Enter the number of lines: ";
   cin>>n;//user input of number of lines to be printed

//Number triangle flipped
//    1
//   12
//  123
// 1234

   for(int i=1;i<=n;i++){//prints lines
      cout<<endl;//newline
      for(int j=1;j<=n-i;j++){//prints spaces n-i if 4-1 means 3 spaces and 1 star in first line
        cout<<" ";
      }
      for(int k=1;k<=i;k++){//prints each number corresponding to the line number 
        cout<<k;
      }
   }

}