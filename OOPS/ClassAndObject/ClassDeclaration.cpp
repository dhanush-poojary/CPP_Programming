#include<iostream>//Basic class usages
using namespace std;
class student{//class declared with name student
   public: //public members and methods can be easily accessed
    string name;//data members
    int age;
    int marks;
};
int main(){
    student dhanush;//object creation by student data type
    dhanush.name = "gamer";//initializing the attributes of student class through object
    dhanush.age = 18;
    dhanush.marks = 500;
    cout<<dhanush.name<<endl;//printing the data members
    cout<<dhanush.age<<endl;
    cout<<dhanush.marks<<endl;
}