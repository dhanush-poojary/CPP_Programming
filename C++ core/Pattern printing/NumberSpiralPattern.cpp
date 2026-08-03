#include<iostream>//Program for printing Number spiral pattern
using namespace std;
int main(){
   int n;
   
   cout<<"Enter the number of lines: ";
   cin>>n;//user input of n number of lines

//Number spiral
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

   int a,b;
   int min;

//as we need 7 line if the n value is 4 then set loop condition to 2*n-1
for(int i=1;i<=2*n-1;i++){//this loop prints number of lines
   
//as we need 7 numbers to print if the n value is 4 then set loop condition to 2*n-1  
      for(int j=1;j<=2*n-1;j++){//this loop prints number of digits
          a = i;//a is a pseudo variable
          b = j;//b is a pseudo variable

if(a>n) a = 2*n - i;//we are making 5 6 7  into 3 2 1 if the input is 4 because half of the pattern is symmatric
if(b>n) b = 2*n - j;//we are making 5 6 7  into 3 2 1 if the input is 4 because half of the pattern is symmatric
          
//instead of these to line of calculating minimum of 2 number c++ has a builtin function
//which provides minimum of 2 number -> min(a,b);          
          if(a<b) min = a; //we are printing the minimum of row and column numbers which is i and j 
          else min = b;

          cout<<n-min+1;//n-min+1 is for 4-1+1 is 4 printing the pattern in reverse order
         //  1111111
         //  1222221
         //  1233321
         //  1234321
         //  1233321
         //  1222221
         //  1111111 
    }
      cout<<endl;//newline
   }
}