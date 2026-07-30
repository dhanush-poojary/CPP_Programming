#include<iostream>//Leetcode 852    Peak Index in a Mountain Array
using namespace std;
int main(){
//in here we need to find a peak element because it is a mountain array and guranteed there will peak
//1st and last index can not be peak element because a peak element must be greater then it's left and right element
    int arr[]= {1,3,5,4,3,2,0};//an mountain array
    int n = sizeof(arr)/4;//length
        int low = 1,hi = n-2;//we need not to check for 1st and last index
        while(low<=hi){
            int mid = (low+hi)/2;
            if(arr[mid] >arr[mid-1] && arr[mid]>arr[mid+1]){
    //if mid is greater then it's left and right element then mid is peak element
                cout<<mid;
                break; //end the loop
            }
//if mid element is greater then mid+1 then reduce search space from back as it is the highest point 
            else if(arr[mid] > arr[mid+1]) hi = mid-1;
            else low = mid+1;//if not then reduce from front as it peak will be present at other side
        }
       
}