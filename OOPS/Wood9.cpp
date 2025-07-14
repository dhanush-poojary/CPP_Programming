#include<iostream>//Using a abstract class and  pure virtual function
using namespace std;
//a class is called abstract when it consist of pure virtual functions
class vehicle{//this is just a declaration so we can not use the object of this class
   public:  
    int hello;
    virtual void getdata() = 0;//only function is declared here and definition in child class
    virtual void showdata() = 0;//only function is declared here and definition in child class
};
class bmw : public vehicle{
  public:                               
   int bye;

   void getdata(){//it is an virtual function it is mandatory to declare
      cout<<"getdata function executed"<<endl;
   }
   void showdata(){//it is an virtual function it is mandatory to declare
       cout<<"showdata function executed"<<endl;
   }
   
};
int main(){
  //when we create 1 function as virtual of same name all function of all class with same name becomne virtual
  //it will bind at run time
   //vehicle v;//we can not create a object of an abstract class
   
   bmw b;
   b.getdata();
   b.showdata();
}