#include<iostream>//usage of switch case statements
using namespace std;
int main(){
   int dayno;
   cout<<"Enter the day no :" ;
   cin>>dayno;//user input of any weekly day number 
   switch (dayno)//this is a conditional variable which is checked with in every case
   {
   case 1://if the dayno 's value matches with any below cases then that block will be executed
         cout<<"Monday"<<endl;
    break;//this is very import after every case block to stop the flow of execution
   case 2:
        cout<<"Tuesday"<<endl;
        break;
   case 3:
        cout<<"Wednesday"<<endl;
        break;
   case 4:
        cout<<"Thursday"<<endl;
        break;
   case 5:
        cout<<"friday"<<endl;
        break;
   case 6:
        cout<<"Saturday"<<endl;
        break;
   case 7:
        cout<<"Sunday"<<endl;
        break;
   default://if the above conditions are not met then only the default block will be executed
         cout<<"Invalid Day number of the week!"<<endl;
  }

}