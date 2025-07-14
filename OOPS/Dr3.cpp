#include<iostream>//Using setter and getter to initialize data member
using namespace std;
class player{
  private : //data members are declared as private
     int attack;
     int defence;

  public ://inside the class private public will does not matter
    void setattack(int a){//setter    it is just a function to initialize private data member          
       attack = a;
    }
    void setdefence(int d){//setter
        defence = d;
    }
    int getattack(){//getter       it is just a function to return or print private data members
       return attack;
    }
    int getdefence(){//getter
      return defence;
    }
};
int main(){
   player zoro;//object creation
   zoro.setattack(100);
   zoro.setdefence(50);

   cout<<zoro.getattack()<<endl;//printing the attack and defence
   cout<<zoro.getdefence()<<endl;

}