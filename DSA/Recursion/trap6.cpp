#include<iostream>//To find the power of a number using recursion
using namespace std;                       //method - 1 normal
int power(int a,int b){ 
   int p = 0;//this will work b times but in this code we are computing when coming back
    if(b == 0) return 1;//this will return when the function call for 2 to the power 0 is hited
    p =  a*power(a,b-1); //it will multiplay when coming back from 0
    return p;//returns to  the a to the power b 's value
}
int main()
{  int a,b;
    cin>>a>>b;//user input of base and power
  cout<< power(a,b);//function call and printing the returned value

}