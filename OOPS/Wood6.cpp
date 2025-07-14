#include<iostream>//Multiple inheritance
//Multiple inheritance means  multiple base class and one derived class
using namespace std;
class vehicle{//it is base class or parent class , it is and independent class
   public:   //can be inherited and accessed from outside
    int hp;
   protected://can be inherited but can not accessed from outside
    int cc;
    private://can not be inherited or can not be accesed from outside
      int bhp;
};
class bmw {//it is base class or parent class  , it is and independent class
 
  public:                               
   int passangers;
   int fuel;
  
};
class electric : public bmw , public vehicle{//here electric inherits the properties from both bmw and vehicle as a derived class
  //the data members recieced from bmw are are public in electric only if it satisfied security
   public:
     int range;
     void setCC(){
        cc = 120;//here protected remains protected but it can be accessed within inherited class
     }
     void sethp(){
       hp = 10;
     }
};
int main(){
    vehicle car;//only public members can be accessed 1 class
    car.hp = 100;
    cout<<car.hp<<endl;
   
    
    bmw b;//only public members can be accessed 1 class
    b.passangers = 4;
    cout<<b.passangers<<endl;

    electric ev;//only public members can be accessed from 3 classes
    ev.range = 100;
    ev.hp = 10;
    ev.passangers = 4;
    

}