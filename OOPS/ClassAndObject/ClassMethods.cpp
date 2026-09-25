#include<iostream>//using methods inside class
using namespace std;
class student{//cladd declaration
   public://all data members can be accessed easily
    string name;//data members
    int age;
    int marks;

    void print(){//member functions
       cout<<"Name: "<<name<<endl;//inside the class private public will does not matter
       cout<<"Age: "<<age<<endl;
       cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    student dhanush;//object creation
    dhanush.name = "gamer";
    dhanush.age = 18;
    dhanush.marks = 500;
    
    dhanush.print();//calling print function inside the class using object 
}