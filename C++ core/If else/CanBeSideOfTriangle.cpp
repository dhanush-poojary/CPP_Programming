#include<iostream>//Program to find entered numbers can be the sides of a triangle
using namespace std;
int main(){
   int a,b,c;
   cout<<"Enter the 3 numbers: ";
   cin>>a>>b>>c;//user input of 3 sides of triangle

//////////////////////////Refference////////////////////////////////////////
//if the 3 sides are greater then each then they can be the sides of triangle which is a+b>c and b+c>a and a+c>b
   if(a+b>c){//if this is true
      if(b+c>a){//and also if this true
          if(a+c>b){//if also this is true
            //then this 3 numbers can be the sides of a triangle
            cout<<"These 3 numbers can be a sides of triangle";
          }
          else{//otherwise they can't
            cout<<"They cannot be the sides!";
          }
      } 
    }
   else{//if first condition itself is false then this will execute
    cout<<"They cannot be the sides!";
   }
  
}