#include<iostream>//Prefix to infix expression
#include<stack>
#include<string>
using namespace std;
string eval(string val1,string val2,char op){//this is for evaluation of expression
    return (val1+op+val2);
}
int main(){
    string s = "*+3-54/62";//prefix expression
    stack<string> val;
   
    for(int i=s.length()-1;i>=0 ;i--){//traverse string in reverse order
        if(isdigit(s[i])){//if it is a number then push 
            val.push(to_string(s[i]-48));//covert the digit to string then push
        }
        else{ //if not then evaluate the expression 
                  string ans = "";
                  string val1 = val.top();//take 1st number first
                  char p = s[i];
                  val.pop();
                  string val2 = val.top();//take 2nd number next
                  val.pop();
                 ans = eval(val1,val2,p);//evaluate the expression
                 val.push(ans);//then push that expression into the stack
                }
           }
    cout<<"infix expression :"<<val.top();  //stack will be left out with the expression    
}