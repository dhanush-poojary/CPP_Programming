#include<iostream>//Finding that an array can be partitioned or not
using namespace std;
int main(){
   int arr[] = {1,2,3,4,5,5,10};
   int n = sizeof(arr)/4;

   for(int i=1;i<n;i++){ //{1,3,6,10,15,20,30}
      arr[i] = arr[i] + arr[i-1];//taking prefix sum with itself
   }
   for(int i=1;i<n-1;i++){//2*15 == 30
       if(2*arr[i] == arr[n-1]){//if half of the array's sum can be equals to the array's end sum then it can
           cout<<"Yes ! The Array can be partition after"<<i<<"th index";
           return 0;
       }
   } 
   cout<<"Can not be partitioned!";//if not partitioned

}