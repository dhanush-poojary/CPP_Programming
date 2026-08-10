#include<iostream>//Evalutation of postfix expression
#include<stack>
using namespace std;//this is for evaluation of expression
int eval(int val1,int val2,char op){
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
int main(){
   string s = "264*8/+3-";//postfix expression
   stack<int> val;//here we need only 1 stack

   for(int i=0;i<s.length();i++){//traverse the string
       if(isdigit(s[i])) val.push(s[i]-48);//if it is a number then push
       else{
          //if not then evaluate the expression 
              int val2 = val.top();//take 2nd number
              val.pop();
              int  val1 = val.top();//take 1st number
              val.pop();
              char op = s[i];//take the operator
              int ans = eval(val1,val2,op);//then evaluate that 
              val.push(ans);//then push that ans to stack
           
       }
      }
    cout<<"Evaluated postfix expression : "<<val.top()<<endl;//stack will be left out with the expression
}