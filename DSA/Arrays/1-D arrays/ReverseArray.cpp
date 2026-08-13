#include<iostream>//Program to reverse a array with 2 pointer method
using namespace std;//without using extra array
int main(){
   int arr[] = {1,2,3,4,5,6};//an initialized array
   int n = sizeof(arr)/4;//size of the array

   int i=0 , j = n-1;//2 pointers 1 in starting index and other one is at last index
   while(i<j){//i<=j is also correct
      int temp = arr[i];//here we are wpping last index with 1st and so on
      arr[i] = arr[j];
      arr[j] = temp;
      i++;//moving pointer forward
      j--;//moving pointer backward
   }
   cout<<"The array after reversing: "<<endl;
   for(int i=0;i<n;i++){
      cout<<"\t"<<arr[i];//prints the array
   }
}