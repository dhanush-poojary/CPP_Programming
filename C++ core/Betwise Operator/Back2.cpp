#include<iostream>//Program to count the set bits in an binary bits of integer
using namespace std;
int main(){
  int n = 19;
  cout<<__builtin_popcount(n)<<endl;//builtin function
   
  int count = 0;
  while(n>0){//Brian Kernighan's  algorithm
      count++;
      n = n & (n-1);
  }
  cout<<count;

}