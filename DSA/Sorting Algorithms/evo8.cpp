#include<iostream>//Checking whether the array is nearly sorted or not
using namespace std;
int main(){
   int arr[] = {5,4,3,2,1};//1,3,2,5,4
   int n = sizeof(arr)/4;
//we can find out by implementing just 1 pass we get to know that array will be sorted if it was nearly sorted
   for(int i=0;i<n-1;i++){//performaing 1 pass
      if(arr[i] > arr[i+1])
      swap(arr[i],arr[i+1]);
   }
   for(int i=0;i<n-1;i++){
      if(arr[i] > arr[i+1]){//checking whether the array elements are sorted or not
      cout<<"NO";
     return 0;   
   }
   }
cout<<"Yes";//if there are sorted after performing 1 pass


}