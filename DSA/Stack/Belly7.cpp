#include<iostream>//Postfix to prefix expression
#include<stack>
#include<string>
using namespace std;
string eval(string val1,string val2,char op){//this is for evaluation of expression
     return(op+val1+val2);  
}
int main(){
   string s = "264*8/+3-";//postfix expression
   stack<string> val;//here we need only 1 stack of string type

   for(int i=0;i<s.length();i++){//traverse the string
       if(isdigit(s[i])) //if it is a number then push
       val.push(to_string(s[i]-48));//convert to int to string then push
       else{
           //if not then evaluate the expression 
              string val2 = val.top();//take 2nd number
              val.pop();
              string val1 = val.top();//take 1st number
              val.pop();
              char op = s[i];//take the operator
              string ans = eval(val1,val2,op);//then evaluate that 
              val.push(ans);//then push that ans to stack
           
       }
      }
    cout<<"prefix expression : "<<val.top()<<endl;//stack will be left out with the expression
}