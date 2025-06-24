#include<iostream>//Quick Sort
using namespace std;//taking 1st index as a pivot

//this has a O(n2)T.C in worst case so avoid using 1st and last as pivot
//S.C will be O(log n)
int partition(int arr[],int i,int j){//here we finding pivot and sorting the array based on pivot element 
  int pivot = arr[i];//we took first element as pivot
  int count = 0;

  for(int k=i+1;k<=j;k++){//exclude 1st index and go till end to count the elements lesser or equal to pivot element to decide it's position
      if(pivot >= arr[k]) count++;
  }
  int idx = count+i ;//idx is the position of the pivot element in the array
  swap(arr[idx],arr[i]);//insert it there
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