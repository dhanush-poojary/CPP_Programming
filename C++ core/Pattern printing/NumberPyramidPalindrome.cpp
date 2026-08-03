#include<iostream>//Program for printing Number pyramid palindrome pattern
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of lines: ";
  cin>>n;//user input of n number of lines

 //Number pyramid palindrome
//   1
//  121
// 12321
//1234321

 int nst = 1;//1 number in 1st line
  for(int i=0;i<n;i++){//this loop prints lines
    cout<<endl;
    int a = 1;
    for(int k=1;k<=n-i;k++){//this loop prints spaces as usual
        cout<<" ";
    }
    for(int j=1;j<=nst;j++){//this loop prints numbers as usual 
            cout<<a;
            a++;
    }
//although we need only half as stright and half as palindrome/ reverse 
//in the above loop half is printed

//     if(i>=1){//this does not print for 1st line as we require
//     for(int k=nst-1;k>=1;k--)//this loop prints another half of palindrome number  
//     {  
//        cout<<k;
//     }      
//    }  
 
  for(int k=i;k>=1;k--){//this loop prints another half of palindrome number
    //this loop also does print anything in line 1 as i is 0 
      cout<<k;
  }
   nst++;//number of stars are increamented by 1 after each line
  }


}