#include<iostream>//Program to count the number of elements which are greater the the x's value
using namespace std;
int main(){
   int arr[] = { 1,2,3,4,5,6,7,8,9,10};//array initialization
   int x ;
   cout<<"Enter the number: ";
   cin>>x;//user input of x's value

    int count = 0;

   for(int i=0;i<10;i++){
//here we are check if the array elements value whether it is greater then the value of
// x or not if it is greater the increament the count by 1
       if(arr[i]>x){//each element of the array will checked
            ++count;
       }
   }
   cout<<"There are "<<count<<" number of elemenets which are greater then "<<x;//prints count
}