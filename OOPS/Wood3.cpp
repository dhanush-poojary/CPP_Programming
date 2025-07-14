#include<iostream>//Function overloading and constructor overloading compile time polymorphism
using namespace std;
class vehicle{
  public:
  string car;

  vehicle(string car){//it will invoke when an object is created with a single string
      cout<<"The car is "<<car<<endl;
  }
  vehicle(){//it will invoke when an object is created without any parameters
     cout<<"The vehicle is unknown"<<endl;
  }

};

int sum(){//it will be called when function called with no arguements
  return (5+6);
}
int sum(int a ,int b){//it will be called when function called with 2 arguements
   return (a+b);
}
int sum(int a,double b){//it will be called when function called with 2  arguements of different type
  return (a+(int)b); 
}
int main(){
    // cout<<sum()<<endl;//function calles
    // cout<<sum(3,6)<<endl;
    // cout<<sum(5,2.4)<<endl;
   

   // vehicle bmw;//creation of objects
    vehicle bmw("BMW");
   
}