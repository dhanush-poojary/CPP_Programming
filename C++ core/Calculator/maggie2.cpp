#include<iostream>//semi automatic calculator
using namespace std;
int main(){
  int a,b;
  cout<<"Enter the first number: ";
  cin>>a;//interger variable input
  cout<<"Enter the second number: ";
  cin>>b;

  //here we used type cast as we need to qutient after division so we type casted int into float value
  float p = static_cast<float>(a);
  float q = static_cast<float>(b);
  
  char op;
  cout<<"Enter the operator :";
  cin>>op;//character input for operator
  
  switch (op)
  {  case '+':
    cout<<"The Sum of "<<a<<" and "<<b<<" = "<<a+b<<endl;//prints result
     break;
    case '-':
    cout<<"The Difference of "<<a<<" and "<<b<<" = "<<a-b<<endl;//prints result
     break;
    case '*':
    cout<<"The product of "<<a<<" and "<<b<<" = "<<a*b<<endl;//prints result
     break;
    case '/':
    if(a<b){//we can not divide smaller number by larger so we terminated this code
      cout<<"\nDivision is not possible!";
      exit(0);//this will stop the entire code
    }
    
    
     cout<<"The Quotient of "<<p<<" and "<<q<<" = "<<p/q<<endl;//prints result
     break;
    default://if any of the above cases are not satisfied then this will execute
       cout<<"Invalid operator!";//error message
     break;
  }
  return 0;
}