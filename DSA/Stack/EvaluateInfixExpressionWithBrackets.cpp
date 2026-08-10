#include<iostream>//Evaluation of infix expression with brackets
#include<stack>
using namespace std;
int precedence(char op){//this is for heirarchy of operators
  if(op == '*' || op == '/' ) return 2;
  else if(op == '+' || op == '-') return 1; 
  return -1;
}
int eval(int val1,int val2,char op){//this is for evaluation of expression
  switch(op){
    case '+':
          return (val1 + val2);
    case '-':
          return(val1 - val2);
    case '*':
          return(val1 * val2);
    case '/':
          return(val1 / val2);
  }
}
//we need to evaluate the bracket's first
int main(){
     string s = "2+6*4/8-3";//infix expression
    stack<int> val;//we need 2 stacks val for storing operands
    stack<char> op;//this for operator
   
   for(int i=0;i<s.length();i++){//traverse in the s string
        if(isdigit(s[i])){ //if it is a number then push to stack
            val.push(s[i]-48);
        }
        else{//we dont need to check the precedence of '(' and ')' so do it first
           if(op.size() == 0 ) op.push(s[i]);//if it is a normal or any operator then push it
           else if(s[i] == '(' || op.top() == '(')  op.push(s[i]);//stack top or s[i] is '(' then push that
           else if(s[i] == ')'){   //if it is a ')' then evalute the expression
               while(op.top() != '('){
                  int ans = 0;
                  char p = op.top(); //take operator
                  op.pop();
                  int val2 = val.top();//take a operand 2 first
                  val.pop();
                  int val1 = val.top();//take a operand 1 next
                  val.pop();
                 ans =  eval(val1,val2,p); //then evaluate those 
                 val.push(ans);//and push the answer into val again to evaluate with others
                }
                op.pop();//pop the '(' bracket from stack
           }
           else if(precedence(s[i]) > precedence(op.top()))//if s[i]'s precende is > then stack's top's precedence then only push s[i]
                op.push(s[i]);
           else{//precedence(s[i]) <= precedence(op.top()
             while(op.size()>0 && precedence(s[i]) <= precedence(op.top())){ //do it untill any operator of same or samller precedence is found
                  int ans = 0; 
                  char p = op.top(); //take operator
                  op.pop();
                  int val2 = val.top();//take a operand 2 first
                  val.pop();
                  int val1 = val.top();//take a operand 1 next
                  val.pop();
                 ans =  eval(val1,val2,p); //then evaluate those 
                 val.push(ans);//and push the answer into val again to evaluate with others
                }
                op.push(s[i]);//also push that operator after the process
           }
           
        }
    }
    //stack op can still have some value so eval those
     while(op.size()>0 ){
                  int ans = 0;
                   char p = op.top(); //take operator
                  op.pop();
                  int val2 = val.top();//take a operand 2 first
                  val.pop();
                  int val1 = val.top();//take a operand 1 next
                  val.pop();
                 ans =  eval(val1,val2,p); //then evaluate those 
                 val.push(ans);//and push the answer into val again to evaluate with others
                }
    cout<<"Evaluated infix expression: "<<val.top();//stack will be left out with expression                
}