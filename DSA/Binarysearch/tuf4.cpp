#include<iostream>//smallest missing Non-negetive element Using Binarysearch
using namespace std;
int main(){
    int arr[] = {0,1,3,4,6,7,9,11};//array
    int n = sizeof(arr)/4;//length
    int ans = -1;//this is storing result
    int low = 0,hi = n-1;
//as the array is sorted in ascending and all elements are distinct
//we can make use of array index as positibe number start from 0 and array index too
    while(low<=hi){
        int mid = (low+hi)/2;
        if(arr[mid] == mid ) low = mid+1;//if our mid index is equal to mid element then before mid 
        //elements are in correct position
        else{
            ans = mid;//store mid in ans it can be our smallest missing element
            if(mid == arr[mid-1]) hi = mid-1;//if mid is equal to arr[mid-1] then it is not a missing element
            //before that index we can find it so hi = mid -1
            else{//it is is not equal then that index is the missing element
                cout<<"Smallest non negetive element is: "<<ans;
                return 0;
            } 
        }
    }
    cout<<"There is not non-negetive element!: "<<ans;//this will only execute if our index is not present
}