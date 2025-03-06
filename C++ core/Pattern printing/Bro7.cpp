#include<iostream>//program for printing Floyd's triangle pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//user input of number of lines

//Floyd's triangle
//   1
//   23
//   456
//   78910

  int nst = 1;//we are making use of variable out side the loop for contineous printing 
  for(int i=1;i<=n;i++){//prints lines
    cout<<endl;//newline
    for(int j=1;j<=i;j++){//this will print numbers corresponding to the i'th loop
        cout<<nst;//prints number contineous in order
        nst++;
    }
  }

}