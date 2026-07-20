#include<iostream>//program to print the sum of entered number
using namespace std;
int main(){
  int num,rem,rev = 0,ld,sum = 0;//ld means last digit
//rev must be strictly initialized with 0 to avoid miss calculations afterwards

  cout<<"Enter the number: ";
  cin>>num;//user input of some digits of number
  int n = num;//maiking a copy of a entered number
  while(num!=0){//the loop execute till the num becomes 0
    ld  = num % 10;//this is for taking last digit
    sum += ld;//here instead of storing the ld in rev we are adding ld into the sum var
    //it will add directly like  5 + 4,9 + 3,12+2, 14+ 1 = 15 is the value of sum

    num = num / 10;//this is for chopping out the last digit
  }
  cout<<endl<<"The Entered number = "<<n<<"\nThe Sum of Digitis = "<<sum;//prints the sum 
}