#include<iostream>//Program to reverse a entered number
using namespace std;
int main(){
  int num,rem,rev = 0,ld;//ld means last digit
  //rev must be strictly initialized with 0 to avoid miss calculations afterwards

  cout<<"Enter the number: ";
  cin>>num;//user input of some digits of number
  int n = num;//maiking a copy of a entered number
  while(num!=0){//the loop execute till the num becomes 0
    ld  = num % 10;//this is for taking last digit
    rev = (rev * 10) + ld;//after taking ld we have to add it to rev varible
  //it will add like 5 * 10 = 50 then + ld 4 = 54 so on
  //rev = 0 is must we dont need to multiply the first number which is 5 our here
    num = num / 10;//this is for chopping out the last digit
  }
  cout<<endl<<"The Enter number = "<<n<<"\nThe Reversed number = "<<rev;//prints the  result

}