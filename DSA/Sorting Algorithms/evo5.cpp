#include<iostream>//move all zero to the end using bubble sort
using namespace std;
int main(){
    int arr[] = {5,0,3,0,1,4,0,2,0};//an array cosisting zero's
    int n = sizeof(arr)/4;

    bool flag;
    for(int i=0;i<n-1;i++){
        flag = false;//if this reamins same untill end then it means zero are placed it correct position
        for(int j=0;j<n-1-i;j++){
            if(arr[j] == 0){//instead of greater just swap while cheking whether the element is zero or not
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
               flag = true;
            }
        }
        if(flag == false) break;//zero are moved so break
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];//printing
    }
}