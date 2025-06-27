#include<iostream>//quick select
//here we need to quickly search an element in the array therefore finding the k'th smallest element
using namespace std;
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
  while(si < idx && ei > idx){
     if(arr[si] <= pivot) si++;
     if(arr[ei] > pivot) ei--;
     else if(arr[si] > arr[idx] && arr[ei] <= arr[idx]){
        swap(arr[si],arr[ei]);//swapping the unmatched elements
         si++;
         ei--;
     }
  }
  return idx;//returning the pivot index for the quicksort function
}
int quicksort(int arr[],int i,int j,int k){//this function only contains dividing the array based on pivot inde
      int pivot = partition(arr,i,j);//this will provide the pivot index in each recursion's  array part
      //apply recursion to those 2 sub array
      if(pivot+1 == k) return arr[pivot]; //if we font that element then return arr[pivot]
   
      else if(k > pivot+1)  return quicksort(arr,pivot+1,j,k); //if k is greater then pivot element then make only right call
      else return quicksort(arr,i,pivot-1,k);//if k is lesser then pivot then make only right call
}
int main(){
   int arr[] = {5,1,8,2,7,6,3,4};//array
   int n = sizeof(arr)/4;
   int k = 4;
   for(int i=0;i<n;i++){//printing
    cout<<arr[i]<<"\t";
   }
   
   cout<<endl;
  cout<<"The k'th smallest element is "<<quicksort(arr,0,n-1,k);
}