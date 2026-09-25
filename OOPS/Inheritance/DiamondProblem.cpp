#include<iostream>//Diamond problem
using namespace std;
//diamond problem means if a class is having a multiple instance through the inherited classes
class A{//base class
   public:  
    int hp;
   A(){
        cout<<"A constructor called"<<endl;
   }
};
class B : virtual public A{//B inherits A
  public:                               
   int passangers;

  B(){
        cout<<"B constructor called"<<endl;
   }
};
class C : virtual public A{//C inhrits A
  public:                               
   int range;

  C(){
        cout<<"C constructor called"<<endl;
   }
};
class D :  public  B ,public C{//here D inherits B and C but here the problem is
   //now D will hold 2 instance of A's data member bcz 1 from A's and 1 from B's
   //to avoid that we use 2 methods list below
  public:                               
   int fuel;

  D(){
        cout<<"D constructor called"<<endl;
   }
   void show(){//C:: and B:: can be written
      cout<<hp<<endl;//calling the hp instance but it is public since it is showing error 
        //this is called diamond problem to avoid it use  score resolution operator(::) or virtual function
   }
};
int main(){
      D danger;//object creation
      danger.hp =10;
      danger.show();
      
}