#include<iostream>//Using operator overloading with friend function
using namespace std;
class complexnumber{
  public:
   int imaginary;
   int real;
   //this is just a declration here we gonna write it's definition outside the class
  friend  complexnumber operator + (complexnumber &c1,complexnumber &c2);
};
complexnumber operator + (complexnumber &c1,complexnumber &c2){//here overloading + operator
           complexnumber c3;
       c3.imaginary = c1.imaginary + c2.imaginary; //in this function we can not use this operator as it is out of scope of class
       c3.real = c1.real + c2.real;
       return c3;
     }

int main(){
    complexnumber c1;//1st object
    c1.imaginary = 5;
    c1.real = 3;

    complexnumber c2;//2nd object
    c2.imaginary = 10;
    c2.real = 2;

    
    complexnumber c3 = c1 + c2; //overloading + operator
    cout<<c3.imaginary<<" "<<c3.real<<endl;

}