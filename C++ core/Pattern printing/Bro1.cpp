#include<iostream>//Program for printing Odd Number triangle pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//this is for printing number of lines

//Odd Number triangle
// 1
// 13
// 135
// 1357

  for(int i=1;i<=n;i++){//this loop prints the lines
    cout<<endl;
    int nst = 1;//this will initialized in each iteration of i'th loop
    for(int j=1;j<=i;j++){//this loop prints Odd numbers corresponding to the line number
        cout<<nst ;//we are printing odd numbers
        nst+=2;//odd numbers are 1 3 5 difference is 2 
    }
  }


}