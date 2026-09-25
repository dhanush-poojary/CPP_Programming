#include<iostream>//Initialization list usage
//initialization list is just a short of normal constructor
using namespace std;
class time{
  private:
  int hour;
  int minutes;

  public:
 time(int h,int m) : hour(h),minutes(m){//this is a initialization list , it is basically just a constructor
  }
   int gethour(){//getter bcz data members are private
    return hour;
   }
   int getminutes(){//getter bcz data members are private
    return minutes;
   }
};
int main(){
  time t1(12,30);//it will call an contructor or initialization list
   cout<<t1.gethour()<<endl;
   cout<<t1.getminutes();
}