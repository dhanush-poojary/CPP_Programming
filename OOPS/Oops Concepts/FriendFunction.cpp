#include<iostream>//Using a friend function 
using namespace std;
//a friend function allows to use a private data member of a class out side that class
class vehicle{
    private:  
   const int hello = 100;//we can not change a constant value
   public:
    friend void show(vehicle &v);//it is just a skeliton of the friend function
    
};
void show(vehicle &v){//here the function does not belongs to the class because it is declared outside
  cout<<v.hello<<endl;//v is the object using which we can access the private members
}

int main(){
   vehicle a;
   show(a);//calling that function by passing a object
   
}