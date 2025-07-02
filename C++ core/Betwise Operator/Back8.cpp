#include<iostream>//Print the factorial of 25 numbers and modulo the result by pow(10,9)+7
using namespace std;
int main(){
    int n = 25;
    int mod = 1000000000 + 7;//10 to the power 9
    long long res = 1;
  
    for(int i=1;i<=25;i++){
       cout<<"The factorial of "<<i-1<<" is "<<res<<endl;

       res = (((i % mod) * (res % mod)) % mod);//taking 10 to power 9 + 7 mod with factorial of x number
    }
           
   return 0;
}