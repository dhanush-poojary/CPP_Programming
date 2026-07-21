#include<iostream>//Basic implementation of a pair
using namespace std;
int main(){
 pair<string,int> p;//a pair can have 2 different kind of data types in it
 p.first = "dhanush";//pairs first part
 p.second = 6;//pairs second part

 cout<<p.first<<" "<<p.second;//prints values of p

 cout<<endl;

 pair<int,int> p1;//a pair of int int type
 p1.first = 100;//2 integers can be stored
 p1.second = 12;
 cout<<p1.first<<" "<<p1.second;//prints values of p1

}