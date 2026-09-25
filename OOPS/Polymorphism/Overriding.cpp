#include<iostream>//Function overriding using virtual function and run time binding
//virtual will create a vptr and vtable at compile time to bind it at run time
using namespace std;//vptr:- virtual pointer and virtual table
class vehicle{//base class
   public:  
    int hello;
    virtual void show(){//if we make one function virtual all the function with same name will become virtual 
      cout<<"vehicle's function "<<endl;
//here vptr and vtable is created but at run time compiler will check with which object it is called for
//then it will provide that function it will check it from vtable

   }
};
class bmw : public vehicle{//derived class
  public:                               
   int bye;

   void show(){//it will also become virtual
      cout<<"bmw's function "<<endl;
   }
};
int main(){
//if we declare a virtal keyword for a function vptr and vtable are declared for all the class's having that function
//also it will increase the object's size because ptr takes about 8 bytes of memory

//when virtual function is declared it will be bind that function at run time
// and then it will check which function's address is assinged to the object pointer so it will call that function
   vehicle *v;
   vehicle ev;
   v = &ev;//this will be checked by the pointer at run time binding of virtual function
   v->show();//if we print it directly then it will call the function inside the base class

   bmw b;
   v = &b;//this will be checked by the pointer at run time binding of virtual function
   v->show();
}