#include<iostream>//Program for printing Rhombus pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//user input of number of lines
  
//Rhombus  
//    ****
//   ****
//  ****
// ****

  int nsp = n-1;//we are using extra variable for printing spaces without it also it is done
  for(int i=1;i<=n;i++){//this loop is for printing lines
     cout<<endl;

    //  for(int k=1;k<=n-i;k++){//this is also a good method 4-1 = 3 space in first line and so on
    //     cout<<" ";
    //  }
     for(int k=1;k<=nsp;k++){//this loop is for printing spaces
        cout<<" ";
     }
     for(int j=1;j<=n;j++){//this loop is for printing stars
            cout<<"*";  
      }
      nsp--;//after each line spaces are reduces 
    }
}