#include<iostream>//To print all the uppercase alphabet corresponding to their ascii value
using namespace std;
int main(){
  cout<<"\nAlphabets of english (uppercase)"<<endl;
  for(int i = 65;i<=90;i++){//there are 26 alphabets so this loop executes 26 times

    cout<<(char)i<<"\t"<<i<<endl;//here we typecasting i into char to print alphabet 
    //and for ascii value we are using of i itself

  }
}