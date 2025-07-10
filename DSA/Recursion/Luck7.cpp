#include <iostream>//Leetcode 22            Generate paranthesis
using namespace std; 
void paranthesis(string str,int open,int close,int n){
    if(close == n){//when the no of closing bracket is equal to n then
         cout<<str<<endl;//print the generated paranthesis
         return;
    }
//we are adding opening paranthesis untill 3 anytime no matter of closing
    if(open < n) paranthesis(str+'(',open+1,close,n);
//but we are adding closing bracket when the closing bracket is less then opening 
    if(close<open) paranthesis(str+')',open,close+1,n);
}
int main()
{    
   int n = 3;//we need to print these number of permutations of paranthesis
//n = 3  ((())),()()(),()(()),(())(),(()());
   paranthesis("",0,0,n);
   //here we are passing 0,0 is for count of opening and closing bracket
}