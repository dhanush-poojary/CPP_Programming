#include<iostream>//Program for printing the  Alphabet square pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//sides of square are eqaul so n should be enough for nXn

// Alphabet square
// ABCDE
// ABCDE
// ABCDE
// ABCDE
  for(int i=1;i<=n;i++){//this is for no of lines
    int alpha = 65;//this will be initialized in each iteration of i'th loop
    for(int j=1;j<=n;j++){//this is for no of alphabets
        cout<<(char)alpha;//type casting int into char for printing alphabets
        alpha++;//increamenting 65 for getting next character

        // cout<<(char)(j+64);//this method is also efficient
    }
    cout<<endl;//newline
  }

}