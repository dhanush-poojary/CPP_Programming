#include<iostream>//Single level inheritance
//Single inheritance means only one base class and one derived class
using namespace std;
class vehicle{//it is base class or parent class
   public:   //can be inherited and accessed from outside
    int hp;
   vehicle(){
        cout<<"Vehicle constructor called"<<endl;
   }

   protected://can be inherited but can not accessed from outside
    int cc;
    private://can not be inherited or can not be accesed from outside
      int bhp;
};
class bmw : private vehicle{//bmw inheritates the properties of vehicle , it is a derived class or child class
   
  //bcz the security can not be down graded it can be upgraded from either low to mid or high or even mid to hi
  public:                               
   int passangers;

   bmw(){
        cout<<"bmw constructor called"<<endl;
   }

   void setCC(){//this can be accessed outside bcz it is public but cc can not
    cc = 1000;//protected can be accesed from inherited class but not from outside
    cout<<cc;
   }
   void Sethp(){
      hp = 440;
   }

};
int main(){
    vehicle car;//it will invoke the constructor
    car.hp = 100;
    cout<<car.hp<<endl;
   
    
    bmw b;//it will invoke first parent class's constructor and child class's constructor
    b.passangers = 4;
    cout<<b.passangers<<endl;
}