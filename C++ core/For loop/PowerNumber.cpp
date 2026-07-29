#include<iostream>//Program for printing power number of given base and exponent
using namespace std;//treatment of negative exponent / power
int main(){
  float power = 1;//later we are multiplying this so it is neccsary to initialize with 1
  int a,b;
  cout<<"Enter the base and power: ";
  cin>>a>>b;//base and exponent/power
//we have special treatment if the power is negative
  bool flag = true;//this means the number is positive at the end

  if(b<0){//cheks if the value of b is negetive or not

    flag  = false;//this means the number is negative

    b = -b;//we are just multiplying the - sign with negetive number then it will be 
  //  positive number
  }
  for(int i=1;i<=b;i++){
//in power we are multiplying base(a) b times so we are executingthe loop that many times
    power*=a;//1 * 2 = 2 , 2*2 = 4 ,4*2 = 8 ......so on
  }
  if(flag == false){//if the  number is negetive then divide the power with 1
    power = 1/power;//special formula for negetive exponents
    b = -b;//again we are making it to negetive as we want to print it as negetive only
  }
  if(a==0 && b==0) cout<<"Not defined!"<<endl;//this is for if the input is 0 and 0
  else  cout<<a<<" Raised to the power "<<b<<" is = "<<power<<endl;//this for printing all
  // other then  0 0 input even though negetive value
}