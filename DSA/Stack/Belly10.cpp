#include<iostream>//Prefix to postfix expression
#include<stack>
#include<string>
using namespace std;
string eval(string val1,string val2,char op){//this is for evaluation of expression
    return (val1+val2+op);
}
int main(){
    string s = "-+2/*6483";//prefix expression
    stack<string> val;//here we need only 1 stack which should be in string
   
    for(int i=s.length()-1;i>=0 ;i--){//traverse the string in reverse order
        if(isdigit(s[i])){//if it is a number then push it
            val.push(to_string(s[i]-48));//covert the digit to string then push
        }
        else{     //if not then evaluate the expression 
                  string ans = "";
                  string val1 = val.top();//take the 1st number first
                  char p = s[i];//take the operator
                  val.pop();
                  string val2 = val.top();//take the 2nd number next
                  val.pop();
                 ans = eval(val1,val2,p);//then evalute the expresion 
                 val.push(ans);//and push that ans to stack
                }
           }
    cout<<"Postfix expression :"<<val.top();//at the end stack will be left out with expression   
}