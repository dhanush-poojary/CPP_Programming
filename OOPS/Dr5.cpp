#include<iostream>//Passing a object to a function and returning a object
using namespace std;
class characters{
   private:
    int attack;//data members are declared as private
    int defence;
   
    public : 
    void setattack(int attack){//this keyword refferes to attack variable in this class
        this->attack = attack;
    }
    void setdefence(int defence){//this keybaord refferes to defence in this class
       this->defence = defence;
    }
    int getattack(){
      return  attack;
    }
    int getdefence(){
      return defence;
    }

};
int combind(characters a,characters b){//it will return the addition of both objects attack
      return a.getattack() + b.getattack();
}
characters ability(characters a,characters b){//it will return the object which having more defence
       if(a.getdefence() > b.getdefence()) 
         return a;//returning a object
       else 
        return b;//returning b object
}
int main(){
   characters luffy;
   
   luffy.setattack(100);
   luffy.setdefence(40);
   
   characters zoro;
   zoro.setattack(120);
   zoro.setdefence(70);

   cout<<combind(luffy,zoro)<<endl;//function called  which is outside the class
   characters uchiha = ability(luffy,zoro);//here we are assining that return object into a new object
   //after this uchiha object can have all the properies of returned object
    
   cout<<uchiha.getdefence();
}