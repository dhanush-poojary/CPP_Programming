#include<iostream>//Using operator overloading
using namespace std;
//operator overloading is used as a replacement of function name we can use both unary and binary operatr
//we can not use . , :: , sizeof operators  for overloading
class complexnumber{
  public:
   int imaginary;
   int real;

  //  complexnumber add(complexnumber &c){//we can replace this by below function
  //      complexnumber c3;
  //      c3.imaginary = c.imaginary + this->imaginary;
  //      c3.real = c.real + this->real;
  //      return c3;
  //  }
     complexnumber operator + (complexnumber &c){//overloading + operator
           complexnumber c3;
       c3.imaginary = c.imaginary + this->imaginary;//this is c2's object
       c3.real = c.real + this->real;//this is c2's object
       return c3;
     }

     complexnumber operator - (complexnumber &c){//overloading - operator
      complexnumber c3;
      c3.imaginary = c.imaginary - this->imaginary;//this is c2's object
      c3.real = c.real - this->real;//this is c2's object
      return c3;
     }

};
int main(){
//operator overloading makes it readable syntax wise simplier syntax
    complexnumber c1;//1st object
    c1.imaginary = 5;
    c1.real = 3;

    complexnumber c2;//2nd object
    c2.imaginary = 10;
    c2.real = 2;

    //complexnumber c3 = c1.add(c2); //we can shorten this function by operator overloading
    complexnumber c3 = c1 + c2;
    cout<<c3.imaginary<<" "<<c3.real<<endl;

    complexnumber c4 =   c1 - c2;
    cout<<c4.imaginary<<" "<<c4.real<<endl;


}