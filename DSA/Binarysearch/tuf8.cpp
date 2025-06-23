#include<iostream>//Leetcode 33   search in roatated sorted array
using namespace std;
int main(){
    int arr[] = {6,8,20,28,33,1,3,4,5};//search space
    int n = sizeof(arr)/4;
    int target = 8;//we need to find this element in a unsorted or roated array by any k times
    int low = 0,hi = n-1;                                   //k is not given
    int pivot = -1;

    if(n == 2){//if there are only 2 elements just check those dont do much
        if(arr[0] == target){
            cout<<"The element "<<target<<" is present";
            return 0;
        }
        else if(arr[1] == target){
            cout<<"The element "<<target<<" is present";
            return 0;
        }
        else{
            cout<<"The elememt "<<target<<" is not present";
            return 0;
        }
    }
 //finding pivot element as it is the first element of the original array   
    while(low<=hi){
         int mid = (low+hi)/2;

         if(mid == 0) low = mid+1;//as the 0'th element will never be pivot
         else if(mid == n-1) hi = mid-1;//and also the last element can not be pivot
        
         else if(arr[mid]< arr[mid+1] && arr[mid]<arr[mid-1]){
            pivot = mid; //smallest element will be pivot as the array is sorted
            break;
         }
         else if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
               pivot = mid;//largest element will be last element of original array not roatated array
               break;//it's next element will be pivot
         }
         else if(arr[mid]>arr[hi]) low = mid+1;//it means arr is roatated and reduce search space from front
                        //because till can never be in front side
         else hi = mid-1;//if arr[mid]<arr[hi] then reduce from back
         //because there can never be our pivot element
    }

    if(pivot == -1){//this means array is not roatated but sorted 
        low = 0;//so apply BSearch in full array
        hi = n-1;
    }
//there will be 2 parts after finding pivot 1 is sorted and another one is roated
    else if(target>= arr[0] && target<=arr[pivot-1]){//it is for finding target in roatated part
        low = 0;
        hi = pivot;
    }
    else{//target>= arr[pivot] && target<=arr[hi]
        low = pivot;//it is for finding target in sorted part
        hi = n-1;
    }
    while(low<=hi){//Basic binarysearch for finding element
        int mid = (low+hi)/2;
        if(arr[mid] == target){
            cout<<"The element "<<target<<" is present";
            return 0;
        }
        else if(arr[mid] > target) hi = mid-1;
        else low = mid+1;
    }
    cout<<"The elememt "<<target<<" is not present";
}