#include<iostream>//Program for finding maximum element in the array
#include<climits>//this will provide certain inbuilt functions like INT_MAX &  INT_MIN
using namespace std;
int main(){
   int arr[50];
   int n = 10;//10 is the array size

   cout<<"Enter the array elements: ";
   for(int i=1;i<=n;i++){//this loop is for taking array element input
      cin>>arr[i];
   }
   int max = INT_MIN;
//this means we are setting the smallest integer value to max which is compared later with array element

//    int max = arr[0];   //this will not work if elements are non-possitive
   for(int i=1;i<=n;i++){
//traverse through each element of the array
//if the max is less then current value of array eg -> (-1 < 1) and (3 < 4)  
//then set max as that current array element    
      if(max <arr[i]){
        max = arr[i];//then we are storing that element into the max 
      }
   }
   cout<<"The maximum number present ina array: "<<max;//prints maximum element
}