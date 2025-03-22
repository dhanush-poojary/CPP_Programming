#include<iostream>//program for finding second largest element in the array
#include<climits>//provided INT_MIN AND INT_MAX builtin functions
using namespace std;
int main(){
   int arr[] = {1,2,3,5,8,7,4,2};
   int n = 8; 
   
   int max = INT_MIN;//set to smallest integer value
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
//assume arr{1,2,3,4,5}
//here we are doing the above thing in single loop itself
    if(max<arr[i]){ //-1<1 true ,1<2 true and 2<3 true and so on untill last element

        sec_max = max; //it will store max's previous value if max is 5 then it will store 4
       max = arr[i];//maximum will be stored
       
    }
   if(sec_max<arr[i] && max!= arr[i]){//when max become 5 then max will be equal to arr[0]
    //that's why this condition will be false and thi statement will not be executed
        
        sec_max = arr[i];//sec_max will store 4 as per max's previous value in above
     }
   }

    cout<<"The second largest element is = "<<sec_max;//prints second largest element
}