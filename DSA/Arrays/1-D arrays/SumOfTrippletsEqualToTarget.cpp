#include<iostream>//Program for finding tripplets sum which is equals to target(3 sum)
using namespace std;
int main(){
   int arr[] = {3,4,1,2,5,9,3,7,6}; //array
   int n = sizeof(arr)/4;//array size
   int x;//target
   cin>>x;//input of target

   for(int i=0;i<n-2;i++){//here we are noting going till end as it gives index issues
      for(int j=i+1;j<n-1;j++){ //similarly here also not going till the end
        for(int k=j+1;k<n;k++){//this loop will traverse till the end
            if(arr[i]+arr[j]+arr[k] == x){//comparing each elements to sums up with x
                cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                return 0;//exit out of programs
            }
        }
      }
   }
}