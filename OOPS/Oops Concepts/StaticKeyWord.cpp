#include<iostream>//Using static keyword
using namespace std;
class time{
   public: 
   int hour;
   int minutes;
   static string DayNight;//This variable belongs to the class rather then the object
   //here the static variable does not depend on objects 

   time(int hour,int minutes){//an constructor
      this->hour = hour;
      this->minutes = minutes;
   }
   static int seconds(){ //this is a static function which will reamain same for all objects of this class
      static int x = 100;//this is declared only once and when an object is called this will not be updated it continues where it left
      return x++;

   }
};
string time :: DayNight = "AM";//here we are initializing the daynight variable ,it will do it only once
//this will be same for each object created 

// int sum(){//use of static variable
//  static int x = 1;//this will be declared or created only once
//   x++;//it can be updated many times
//   return x; //here x will remain the same for all function calls
// }
int main(){
  //  cout<<sum()<<endl;//prints the static variables values
  //  cout<<sum();

   time t1(12,30);//object created
   cout<<t1.hour<<endl;
   cout<<t1.minutes<<endl;
   cout<<t1.DayNight<<endl;//it will print "AM"
   cout<<t1.seconds()<<endl;//it will print the static variables value
   
   time t2(1,30);//object creation
   cout<<t2.DayNight;//it will print "AM"
   cout<<endl<<t2.seconds()<<endl;//it will print the static variables value

}