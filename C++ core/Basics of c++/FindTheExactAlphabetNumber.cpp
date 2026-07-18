#include<iostream>//Program to find the exact alphabet number
using namespace std;
int main(){
  char ch;
  cout<<"Enter an Alphabet:";
  cin>>ch;//user input of only uppercase alphabet
  int alpha = (int)ch;//typecasting char into int to get ascii value
  alpha = alpha - 65+1;//ascii value of 'A' is 65 thats way we minused it
  cout<<ch<<" is "<<alpha<<"th alphabet!";//prints the exact position of alphabet

}