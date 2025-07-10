#include <iostream>//Gcd calculation using recursive Euclid's Algorithm
using namespace std;     //gcd(a,b) => hcf(b%a,a)
int gcd(int a,int b){//time complexity for this code is O(log (a+b))
    
    if(a == 0) return b;//when the remainder is 0 then the b will hold gcd
    else return gcd(b%a,a);//untill that pass b%a and a as operands
} 
int main()
{  int a = 24,b = 60;//2 numbers for getting gcd/hcf
   cout<<gcd(a,b);//prints gcd
}