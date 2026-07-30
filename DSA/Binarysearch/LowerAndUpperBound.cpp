#include<iostream>//Finding Upper and lower bound using Binary search
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,16,17,18,21,24};//array
    int n = (sizeof(arr)/sizeof(arr[0]));//array length
   int low = 0,hi = n-1;
    int LB_UB = 20;//this is our target element
    while(low<=hi){
       int mid = (low+hi)/2;
       if(arr[mid] == LB_UB){//if the element is present then
        cout<<"Lower bound is = "<<arr[mid-1];//1 before 
        cout<<"Upper bound is = "<<arr[mid+1];//and 1 after element will be LB and UB
         return 0;
        }
       else if(arr[mid] < LB_UB) low = mid+1;//reduce from front as usual
       else hi = mid-1;//reduce from back 
    }
    //if the element is not present in the array then after 
    //hi will hold lower bound and low will hol upper bound because low>=hi is breaking condition
      cout<<"Lower bound is = "<<arr[hi]<<endl;
      cout<<"Upper bound is = "<<arr[low];
}