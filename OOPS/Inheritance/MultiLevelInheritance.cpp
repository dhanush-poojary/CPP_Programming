#include<iostream>//Multi Level inheritance
//Multi level inheritance means  one base class and multiple derived class
using namespace std;
class vehicle{//it is base class or parent class
   public:   //can be inherited and accessed from outside
    int hp;
   protected://can be inherited but can not accessed from outside
    int cc;
    private://can not be inherited or can not be accesed from outside
      int bhp;
};
class bmw : public vehicle{//bmw inheritates the properties of vehicle , it is a derived class or child class
   
  //bcz the security can not be down graded it can be upgraded from either low to mid or high or even mid to hi
  public:                               
   int passangers;

   void setCC(){//this can be accessed outside bcz it is public but cc can not
    cc = 1000;//protected can be accesed from inherited class but not from outside
    cout<<cc;
   }
   void Sethp(){
      hp = 440;
   }
};
class electric : public bmw{//electric inheritates the properties of bmw , it is a derived class or child class
   //the data members recieced from bmw are are public in electric only if it satisfied security
   public:
     int range;
   
     void setCC(){//this can be accessed outside bcz it is public but cc can not
        cc = 120;//protected can be accesed from inherited class but not from outside
     }
     void sethp(){
       hp = 10;
     }
};
int main(){
    vehicle car;//object created
    car.hp = 100;//only the public members of vehicle can be accessed
    cout<<car.hp<<endl;
   
    
    bmw b;//object created
    b.passangers = 4;//only the public members of vehicle and bmw can be accessed
    cout<<b.passangers<<endl;

    electric ev;//object created
    ev.range = 100;//only the public members of vehicle and bmw and electric can be accessed
    ev.hp = 10;
    ev.passangers = 4;
    

}