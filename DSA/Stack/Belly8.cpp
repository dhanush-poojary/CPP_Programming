 #include<iostream>//Evalutation of postfix expression
#include<stack>
using namespace std;
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
int main(){
   string s = "-+2/*6483";//prefix expression
   stack<int> val;//here we need only 1 stack of int type

   for(int i=s.length()-1;i>=0;i--){//traverse the string in reverse order
       if(isdigit(s[i])) val.push(s[i]-48);//if it is a number then push
       else{
              //if not then evaluate the expression  
              int val1 = val.top();//take 1st number first
              val.pop();
              int  val2 = val.top();//take 2nd number next
              val.pop();
              char op = s[i];//then take operator
              int ans = eval(val1,val2,op);//evaluate the expression
              val.push(ans);//and push that ans in to stack
           
       }
      }
    cout<<"Evaluated prefix expression : "<<val.top()<<endl;//stack will be left out with the expression
}