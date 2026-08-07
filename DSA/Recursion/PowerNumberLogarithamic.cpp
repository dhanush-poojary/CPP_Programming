#include<iostream>//To find the power of a number using recursion
using namespace std;                       //method - 2 logarithamic
int power(int a,int b){//a is base and b is power
//in this method we are dividing the power in each relation to reduce operation
    if(b == 1)return (a);//it will retun base value when 1 is called because anything to base 1 is base it self
    int ans;  
    if(b%2 == 0) {//if b is 6 it will execute
       ans  = power(a,b/2);//3 it will call
       return ans * ans;
    }
     else {//3 is odd so this will execute
      ans  = power(a,b/2);//1 it will call
      return ans * ans * 2 ;//it is neccsary to the multiplay with 2 beasue while
      //dividing 3/2 == 1 in int type which is wrong for this method
     } 
}
int main()
{  int a,b;
    cin>>a>>b;//user input of base and power
    cout<< power(a,b);//function call and printing the returned value
   
}