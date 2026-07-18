#include<iostream>//Program to find whether entered character is an alphabet or not
using namespace std;
int main(){
   char ch;
   cout<<"Enter an character:";
   cin>>ch;//user input of a character

   if((ch>='A' && ch<='Z' )|| (ch>='a'&&ch<='z')){//this will check for both if the entered number is a uppercase as well as lowercase 
    cout<<"The Entered character is an alphabet"<<endl;
   }
   else{//if it is not then this will be executed
    cout<<"The enterd character is not an alphabet";
   }
}