#include<iostream>//Code for greatest of 3 numbers using nested if statement
using namespace std;
int main(){
  int a = 9,b = 3,c = 6;//3 different numbers

  if(a>b){//here if it is true then b is smallest 
    if( a>c){//if it is true then a is greatest
    cout<<"A greatest";
    }
    else{//this means c>a
      cout<<"C greatest";
    }
  }
  else{//if this runs then a is smallest
    if(b>c){//this is for B is greatest
     cout<<"B greatest";
    }
    else{//this means c>b
      cout<<"C greatest";
    }
    }

}