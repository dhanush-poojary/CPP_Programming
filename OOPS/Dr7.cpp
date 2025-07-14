#include<iostream>//Nested class 
using namespace std;
class haki{//1st class
   public: 
   int power;
   int strength;
};
class human{//2nd class
  public:
  class emparor{//3rd class
    public:
    int hp;
    int ep;
  };
  int age;
  int height;
  emparor emp;//creating a object of class emparor so that any object of human can use it
  haki h;//creating a object of class haki so that any object of human can use it
  void sethaki(haki h){//setter
     this->h = h;
  }
  haki gethaki(){//getter
     return h;
  }
  
};
int main(){
   

   human *obito = new human;//Object creatation, dynamically
                            //at run time , or dynamic allocation
                        
  //  (*obito).age = 40;
  //  (*obito).height = 160;
  //  cout<<(*obito).age<<endl;
  //  cout<<(*obito).height<<endl;
  
     obito->age = 30;
     obito->height = 170;
    // cout<<obito->age<<endl;
     //cout<<obito->height<<endl;

     human newobito =*obito;//creating another object to store the contents of that *obito pointer
    // cout<<endl<<newobito.age<<" "<<newobito.height<<endl;

     haki armmor;//creating the object of haki
     armmor.power = 10;
     armmor.strength = 44;

     obito->sethaki(armmor);//giving that objects attributes to obito object by setter function
    haki hak = obito->gethaki();//storing that armmor object's attributes or values in a new object
   cout<<hak.power<<" "<<hak.strength<<endl;
  
    obito->emp.hp = 10;//we are using  direclty even without creating the object of emparor class bcz it is nested inside human class
    obito->emp.ep = 15;
    cout<<obito->emp.hp<<" "<<obito->emp.ep;//dicreclty accessing without any object 
    
}
   