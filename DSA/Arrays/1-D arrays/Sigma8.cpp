#include<iostream>//Program for finding the minimum element in the array
#include<climits>//this will provide certain inbuilt functions like INT_MAX &  INT_MIN
using namespace std;
int main(){
   int arr[50];
   int n = 10;//array size

   cout<<"Enter the array elements: ";
   for(int i=1;i<=n;i++){//this loop is for taking user input of array elements
      cin>>arr[i];
   }

   int min = INT_MAX;
//this means we are setting the largest integer value to min which is compared later with array element
//  int min = arr[0];  //this will not work if elements are non-possitive

   for(int i=1;i<=n;i++){
//traverse through each element of the array
//if the min is greater then current value of array ele (eg -> (-1 < 1) and (3 < 4) )
//then set min as that current array element    
      if(min > arr[i]){
        min = arr[i];//then we are storing that element into the min
      }
   }
   cout<<"The minimum number present ina array: "<<min;//prints the minimum element
}