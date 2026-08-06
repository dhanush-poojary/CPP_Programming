#include <iostream>//selection sort 
#include<climits>//time complexity is  O(n2)
using namespace std; 
int main()
{  int arr[] = {5,4,3,2,1};//an array
   int n = sizeof(arr)/4;

   for(int ele : arr){//printing
    cout<<ele;
   }
   for(int i=0;i<n-1;i++){//for making no of passes
    int mindex = -1;
    int min = INT_MAX;//in this algorithm we are traversing the array and swapping the smallest elemnet with the 
    //first element of the unsorted array or i's value
       for(int j=i;j<n;j++){
         if(min>arr[j]){//finding smallest in the array
            mindex = j;
            min = arr[j];
         }
       }
       int temp =  arr[i];//swapping mindex and i
       arr[i] = arr[mindex];
       arr[mindex] = temp;
   }
   cout<<endl;
   for(int ele : arr){
    cout<<ele;//printing
   }
   
}