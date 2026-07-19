#include<iostream>//using module incase of multiplying large numbers of integer of range
#include<climits>
using namespace std;
int main(){
   int x = INT_MAX;
   //cout<<(x*2)%5<<endl;//Integer outof range
   cout<<((x%5) * (x%5))%5<<endl;  //formula  for *
   
   //cout<<(x+2)%5<<endl;//Integer outof range
    cout<<((x%5) + (x%5))%5<<endl; //formula  for +

    cout<<(x-4)%5;//the number will be lesser so directly do without formula
   return 0;
}