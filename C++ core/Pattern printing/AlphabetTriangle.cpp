#include<iostream>//Program for printing Alphabet triangle pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//this is for printing number of lines

// Alphabet triangle
// A
// AB
// ABC
// ABCD

  for(int i=1;i<=n;i++){//this loop prints the lines
    int alpha = 65;//this is initialized in each iteration of i'th loop
    for(int j=1;j<=i;j++){//this loop is for printing alphabet in each line for corresponding to their line number
        cout<<(char)alpha;//prints alphabets
        alpha++;//next alphabet
        
    }
    cout<<endl;//newline
  }

}