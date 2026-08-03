#include<iostream>//Program for printing the  solid rectangle pattern
using namespace std;
int main(){
  int n,m;
  cout<<"Enter the no line:";
  cin>>n;//this is for printing no of lines
  cout<<"Enter the no stars:";
  cin>>m;//this is for printing no of stars

  //Solid rectangle
  //  * * * * *
  //  * * * * *
  //  * * * * *
  
  for(int i=1;i<=n;i++){//this is for no of lines
     cout<<endl;//newline
     for(int j=1;j<=m;j++){//this is for printing no of stars
        cout<<"* ";
     }
  }

}