#include<iostream>//Program for printing Number left angle triangle pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//this is for printing number of lines

//Number left angle triangle
// 1
// 12
// 123
// 1234

  for(int i=1;i<=n;i++){//this loop prints the lines
    cout<<endl;
    for(int j=1;j<=i;j++){//this loop prints numbers corresponding to the line number
        cout<<j;//digits
    }
  }

}