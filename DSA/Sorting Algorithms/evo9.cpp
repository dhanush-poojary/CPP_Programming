#include<iostream>//Finding the k'Th smallest element
using namespace std;
int main(){
    int arr[] = {5,3,1,4,2};//array
    int n = sizeof(arr)/4;

    int k = 4;//this element we need to return
    bool flag;
    for(int i=0;i<n-1;i++){//we are sorting the array in ascending order so that we get smallest element in front
        flag = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];//swapping as usual
                arr[j] = arr[j+1];
                arr[j+1] = temp;
               flag = true;
            }
        }
        if(flag == false) break;//optimization of bubble sort
    }
   cout<<"The "<<k<<"th smallest element is: "<<arr[k-1];//from back the k-1'th element will be k'th smallest element
}