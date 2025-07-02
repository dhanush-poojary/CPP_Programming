#include<iostream>//To count the number of set bits to be flipped to creat an new number
using namespace std;
int main(){
   int x = 23;
   int y = 31;
   
   cout<<__builtin_popcount(x^y);//it will return set bits after taking xor of x and y
           
   return 0;
}