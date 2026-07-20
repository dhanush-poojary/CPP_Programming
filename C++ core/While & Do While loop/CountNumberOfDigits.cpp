#include<iostream>//Program to count the number of digtits entered by the user
using namespace std;
int main(){
  int num,rem,rev = 0,ld,sum = 0;//ld means last digit
//rev must be strictly initialized with 0 to avoid miss calculations afterwards

  cout<<"Enter the number: ";
  cin>>num;//user input of some digits of number
  int count  =0 ;
  int zero = num;//this is for if the user inputs 0 

  while(num!=0){//the loop execute till the num becomes 0
    ld  = num % 10;//this is for taking last digit

    sum += ld;//here instead of storing the ld in rev we are adding ld into the sum var
    //it will add directly like  5 + 4,9 + 3,12+2, 14+ 1 = 15 is the value of sum

    num = num / 10;//this is for chopping out the last digit
   
    count++; //we are increamenting count in each numbers manipulation
  }
  if(zero==0)  cout<<1;//if the user inputs 0 then 1 will be prints which is it's count
  else cout<<count;//otherise the count will be printed 
 
}