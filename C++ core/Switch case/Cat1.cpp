#include<iostream>//program that tells a month which has 31 days 30 days and 28 days upon inputing x
using namespace std;
int main(){
   int x;
   cout<<"Enter the month number :" ;
   cin>>x;//user input of any month

  //1 3 5 7 8 10 12 -> 31 days
  //4 6 9 11 -> 30 days
  //2 -> 28 days
  //we can also add expressions and condition also the usual operand
   switch((x<=7 && x%2!=0) || (x>=8 && x%2==0)){//these are for months with 31 days
       case 1://this is not cheked it will be directly executed
           cout<<"31 Days";
           break;
   }
   switch(x==4 ||x==6 || x==9 || x==11){//these are for months with 30 days
    case 1://this is not cheked it will be directly executed
         cout<<"30 Days";
         break;
   }
   switch(x == 2){//these are for months with 28 days
      case 1://this is not cheked it will be directly executed
         cout<<"28 Days";
         break;
   }

}
