#include<iostream>//Leetcode  263                Ugly Number
using namespace std;
//ugly number is a number which can be divided by 2 3 and 5 
int main(){
  int n = 6;
       if(n == 0) { //zero can not be divided
        cout<< false;
         return 0;
      }
      while(n%2 == 0) n/=2;//it divide then number if it can divide by 2
      while(n%3 == 0) n/=3;//it divide then number if it can divide by 3
      while(n%5 == 0) n/=5;//it divide then number if it can divide by 5

      if(n == 1) cout<< true;//if it is 1 then it has been through all 3 divisions 2 3 and 5
      else cout<< false;//it is not a ugly  number
    }       
