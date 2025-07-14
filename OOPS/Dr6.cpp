#include<iostream>//Object creation statically and dynamically
using namespace std;
class human{//class declaration
  public:
  int age;
  int height;
};
int main(){
   //characters luffy;//Object creatation , statically
   //characters zoro;//at compile time , or static allocation

   human *obito = new human;//Object creatation, dynamically
                            //at run time , or dynamic allocation
                        
  //  (*obito).age = 40;       here (*obito) and obito-> works the same
  //  (*obito).height = 160;
  //  cout<<(*obito).age<<endl;
  //  cout<<(*obito).height<<endl;
  
     obito->age = 30;
     obito->height = 170;
     cout<<obito->age<<endl;
     cout<<obito->height<<endl;
 //obito is a pointer of a new object it is not a object we need to use another object like below
     human newobito =*obito;//creating another object to store the contents of that *obito pointer
     cout<<endl<<newobito.age<<" "<<newobito.height; //printing the attributes of pointer object which is dynamically created
}