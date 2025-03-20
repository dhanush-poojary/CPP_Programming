#include<iostream>//program for finding second largest element in the array
#include<climits>//provided INT_MIN AND INT_MAX builtin functions
using namespace std;
int main(){
   int arr[] = {1,2,3,5,8,7,4,2};
   int n = 8; 
   
   int max = INT_MIN;
   int sec_max = INT_MIN;

//first method
//    for(int i=0;i<n;i++){//for maximum element
//        if(max<arr[i]){//this will find maximum element from the array
//           max = arr[i];
//        }
//     }
//     for(int i=0;i<n;i++){//for second largest element
//         if(sec_max<arr[i] && max!= arr[i]){//this will work same as the maximum code
    //but when the max element comes this 2nd condition will be false so it will not be stored

//            sec_max = arr[i];
//         }
//      }

//second method
  for(int i=0;i<n;i++){
//here we are doing the above thing in single loop itself
    if(max<arr[i]){
        sec_max = max;
       max = arr[i];
       
    }
   if(sec_max<arr[i] && max!= arr[i]){
        sec_max = arr[i];
     }
   }

    cout<<"The second largest element is = "<<sec_max;//prints second largest element
}