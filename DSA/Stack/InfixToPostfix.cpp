#include<iostream>//Infix to postfix expression
#include<stack>
#include<string>
using namespace std;
int precedence(char op){//this is for heirarchy of operators
  if(op == '*' || op == '/' ) return 2;
  else if(op == '+' || op == '-') return 1; 
  return -1;
}
string eval(string val1,string val2,char op){//this is for evaluation of expression
    return (val1+val2+op);
}
int main(){
    string s = "2+6*4/8-3";//infix expression
    // "(2+6)*4/8-3" //it works for brackets as well
    stack<string> val;//here we need 2 stack but first one in string
    stack<char> op;
   
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i])){
            val.push(to_string(s[i]-48));//covert the digit to string then push
        }
        else{//we dont need to check the precedence of '(' and ')' so do it first
           if(op.size() == 0 ) op.push(s[i]);//if it is a normal or any operator then push it
           else if(s[i] == '(' || op.top() == '(')  op.push(s[i]);//stack top or s[i] is '(' then push that
           else if(s[i] == ')'){   //if it is a ')' then evalute the expression
                 while(op.top() != '('){
                  string ans = "";//make sure to empty
                 char p = op.top(); //take operator
                  op.pop();
                  string val2 = val.top();//take a operand 2 first
                  val.pop();
                  string val1 = val.top();//take a operand 1 next
                  val.pop();
                 ans =  eval(val1,val2,p); //then evaluate those 
                 val.push(ans);//and push the answer into val again to evaluate with others
                }
                op.pop();//also push that operator after the process
           }
           else if(precedence(s[i]) > precedence(op.top()))//if s[i]'s precende is > then stack's top's precedence then only push s[i]
                op.push(s[i]);
           else{//precedence(s[i]) <= precedence(op.top()
             while(op.size()>0 && precedence(s[i]) <= precedence(op.top())){
                  string ans = "";//make sure to empty
                 char p = op.top(); //take operator
                  op.pop();
                  string val2 = val.top();//take a operand 2 first
                  val.pop();
                  string val1 = val.top();//take a operand 1 next
                  val.pop();
                 ans =  eval(val1,val2,p); //then evaluate those 
                 val.push(ans);//and push the answer into val again to evaluate with others
                }
                op.push(s[i]);//push that operator in stack
           }
           
        }
    }
    //stack op can still have some value so eval those
     while(op.size()>0 ){
                   string ans = "";//make sure to empty
                 char p = op.top(); //take operator
                  op.pop();
                  string val2 = val.top();//take a operand 2 first
                  val.pop();
                  string val1 = val.top();//take a operand 1 next
                  val.pop();
                 ans =  eval(val1,val2,p); //then evaluate those 
                 val.push(ans);//and push the answer into val again to evaluate with others
                }
    cout<<"postfix expression :"<<val.top();   //stack will be left our with expression     
}