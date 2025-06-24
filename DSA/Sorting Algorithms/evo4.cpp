#include<iostream>//Optimized bubble sort
using namespace std;//O(n) time complexity in worst case after optimizing
int main(){
    int arr[] = {5,3,1,4,2};//an array
    int n = sizeof(arr)/4;

    bool flag;
    for(int i=0;i<n-1;i++){//bubble sort takes n-1 passes
        flag = false;//if this remain same after swap then it means that array is already sorted
        for(int j=0;j<n-1-i;j++){//reducing the search space from back 
            if(arr[j]>arr[j+1]){//if 1st element is greater then 2nd then swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
               flag = true;//array elements are not sorted
            }
        }
        if(flag == false) break;//the array is sorted so break here it self
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];//printing
    }
}