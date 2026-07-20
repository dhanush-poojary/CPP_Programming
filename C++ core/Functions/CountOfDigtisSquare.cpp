#include<iostream>//function for taking count of a digit entered and square of that number
using namespace std;
int countdigits(int n){//this is a function for counting the digits in a entered number
   int count = 0;
   while(n>0){//n!=0 is also correct
      n/=10;
      count++;
   }
   return count;//returning the count back to main function
}
int square(int s){//this function is for taking the square of count of the digits
   return s*s;
}
int main(){
  int num;
  cin>>num;//user input
  int count = countdigits(num);//function call and storing the returnd value in count
  
  cout<<"the Entered no's count = "<<count<<"and square is = "<<square(count);//prints both 
  //count and square of that count
}