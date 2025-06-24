#include<iostream>//quick sort
using namespace std;//taking middle element as a pivot or randomized method
//here the time complexity will be O(N log N) in worst case S.C remain same
int partition(int arr[],int i,int j){
  int pivot = arr[(i+j)/2];//here we took middle element as a pivot element
  int count = 0;

  for(int k=i;k<=j;k++){//here we are finding the count of the elements lesser then our pivot element
      if(k == (i+j)/2) continue;//skip that pivot index to avoid bluder
      if(pivot >= arr[k]) count++;
  }
  int idx = count+i ;//this is actual index of that pivot element in the array
  swap(arr[idx],arr[(i+j)/2]);//swap that
   int si = i;
  int ei = j;
  while(si < idx && ei > idx){//here we are sorting all values smaller then pivot to left
   //and all values greater then pivot to the right
     if(arr[si] <= pivot) si++;//this is same algorithm as moving all zero to the end
     if(arr[ei] > pivot) ei--;
     else if(arr[si] > arr[idx] && arr[ei] <= arr[idx]){
        swap(arr[si],arr[ei]);//swapping the unmatched elements
         si++;
         ei--;
     }
  }
  return idx;//returning the pivot index for the quicksort function
}
void quicksort(int arr[],int i,int j){//this function only contains dividing the array based on pivot index
     if(i>=j) return;
      int pivot = partition(arr,i,j);//this will provide the pivot index in each recursion's  array part
      //apply recursion to those 2 sub array
      quicksort(arr,i,pivot-1);//left element should be smaller
      quicksort(arr,pivot+1,j);//right element should be greater
}
int main(){
   int arr[] = {5,1,8,2,7,6,3,4};//array
   int n = sizeof(arr)/4;

   for(int i=0;i<n;i++){//printing
    cout<<arr[i]<<"\t";
   }
   quicksort(arr,0,n-1);
   cout<<endl;
   for(int i=0;i<n;i++){//printing
    cout<<arr[i]<<"\t";
   }

}