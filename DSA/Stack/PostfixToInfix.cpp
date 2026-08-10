#include<iostream>//Postfix to infix expression
#include<stack>
#include<string>
using namespace std;
string eval(string val1,string val2,char op){//this is for evaluation of expression
    return (val1+op+val2);
}
int main(){
    string s = "264*8/+3-";//posfix expression
    stack<string> val;//here we need only 1 stack which should be in string
   
    for(int i=0;i<s.length();i++){//traverse the string
        if(isdigit(s[i])){//if it is a number then  push
            val.push(to_string(s[i]-48));//covert the digit to string then push
        }
        else{
             //if not then evaluate the expression 
                  string ans = "";
                  char p = s[i];//take the operator
                  string val2 = val.top();//take 2nd number
                  val.pop();
                  string val1 = val.top();//take 1st number
                  val.pop();
                 ans = eval(val1,val2,p);//then evaluate that expression
                 val.push(ans);//and push ans to the stack
                }
           }
    cout<<"infix expression :"<<val.top();//at last stack will be left out with expression
}