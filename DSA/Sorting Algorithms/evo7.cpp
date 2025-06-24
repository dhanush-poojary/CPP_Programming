#include <iostream>//insertion sort
using namespace std;//Time complexity is O(n2) in worst case
int main()
{  int arr[] = {5,3,1,4,2};//an array
   int n = sizeof(arr)/4;
   
   for(int ele : arr){
      cout<<ele;//printing
   }
   cout<<endl;
   for(int i=1;i<n;i++){//this loop is for no of passe
   //we are assuming 1 index as it is already sorted
    int j = i;//this is a pivot or a flow creating index
    while(j>=1 && arr[j]<arr[j-1]){//j should be >=1 to avoid index out of bound
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;//decreament as we are inserting element from back in sorted array
    }
   }
   for(int ele : arr){
      cout<<ele;//printing
   }

}