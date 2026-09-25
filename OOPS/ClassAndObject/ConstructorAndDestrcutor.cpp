#include<iostream>//Constructors and distructors and parameterized constructor
using namespace std;
class calci{
   public:
   int a;
   int b;
  
  //  calci(){//default constructor
  //     cout<<"Constructor is invoked!";
  //  }
   calci(int a,int b){
         this->a = a;
         this->b = b;
         cout<<a<<" + "<<b<<" = "<<(a+b);
   }
   ~calci(){//tilde symbol
      cout<<"Destructor is invoked!";//destruct is called when the object goes out of the scope
   }

};

int main(){

  calci sum(19,29);

}