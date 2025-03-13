#include<iostream>//Program for printing pascal triangle using functions
using namespace std;
//Pascal triangle
//      1 
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1 
// 1 5 10 10 5 1

int fact(int n){//this is 3rd function which is only for taking factorial of any number 
    int f = 1;//1 and 0 's factorial is 1
    for(int i = 1;i<=n;i++){
        f*=i;//factorial calculation
    }
    return(f);//function ended with returning factorial to ncr function
}
int ncr(int i,int j){//this is 2nd function which is just the formula of nCr
  return fact(i)/(fact(j)*fact(i-j));//we replaced nCr with iCj
  //function call of fact which is 3rd function
}
void pascal(int n){//1st function which prints the pascal triangle pattern
    for(int i=0;i<=n;i++){//this loop is for number of line n+1 so we start from 0
        for(int k=1;k<=n-i;k++){//this loop is for printing spaces
            cout<<" ";
        }
        for(int j=0;j<=i;j++){//this loop prints the ncr number pattern
           cout<<ncr(i,j)<<" ";//inside cout we are calling ncr function 2nd function
//here we are taking ncr of i and j which will give us the numbers required 
//form the observation we can see that addition of previous number we can get current value

        }
        cout<<endl;//newline
    }
   
}
int main(){//main function
   int n;
   cout<<"Enter the number of rows: ";
   cin>>n;//user input of n number of lines
   pascal(n);//function call for 1st function

}