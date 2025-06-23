#include<iostream>//Leetcode 704                Binarysearch
using namespace std;//Search an element using binarysearch
int main(){
    int arr[] = {1,3,6,8,15,56,57,78,90};//array/ search space
    int n = sizeof(arr)/4;//size of array
    int target = 8;//out target for search
    int low = 0,hi = n-1;//in this technique we are reducing search space by half at once
    //and for that reason the time complexity will be O(log N)
    while(low<=hi){
        int mid = (low+hi)/2; //getting middle element
/////////////////////******important*******/////////////////////
         //low+(hi-low)/2;//this is for if our index is going out of range of integer
         //when we add it may go out of bound 
        if(arr[mid] == target){ //after diving if the middle element is =  to target 
            cout<<"The element is present in "<<mid;
            return 0;//then print it
        }
        else if(arr[mid] > target) hi = mid-1;//if  target is lesser then mid reduce search space from back
        else low = mid+1;//if target is greater then mid reduce search space from front
    }
    cout<<"The element is not present"; //only if not present 
 
}
