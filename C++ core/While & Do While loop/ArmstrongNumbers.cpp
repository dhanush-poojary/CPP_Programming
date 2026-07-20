#include<iostream>//To print all the armstrong numbers from 1 to 500
using namespace std;
int main(){
  int n = 500;//range

  for(int i=1;i<=n;i++){//this loop executes 500 times
      int x = i;//copy is neccasry else the value will be lost
      int sum = 0; 
       while(x!=0){//executes untill  x gets 0
          int ld = x%10; //for taking last digit
          sum+= (ld*ld*ld); //for taking the sum of cube of each digit
          x/=10;//this is for chopping
       }
       if(sum == i) cout<<i<<endl;//prints the armstrong numbers if sum of cube of each digit is eqaul to the number itself
    }


}