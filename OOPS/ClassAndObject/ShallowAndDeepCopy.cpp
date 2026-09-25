#include<iostream>//shallow and deep copy through copy constructor
using namespace std;
class time{
   public :
   int hour;
   int minutes;
   time(int a,int b){
      hour = a;
      minutes = b;
   }
   time(time &a){//it is important to use a pass by refference otherwise the object will infinitely call copy constructor
        cout<<"Copy constructor is invoked!"<<endl;
        hour = a.hour;
        minutes = a.minutes;
   }
};
int main(){
   time t1(12,30);
  time t2 = t1;//shallow copy if we dont use copy  constructor
  t1.hour  = 13;
   cout<<t2.hour<<endl;

   // time t2(t1);//deep copy
   // t1.hour = 10;
   // cout<<t2.hour;

}