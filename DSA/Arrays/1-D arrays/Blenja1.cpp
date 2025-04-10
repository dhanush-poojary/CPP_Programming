#include<iostream>//Program for finding the next greatest element present in the array
using namespace std;
int main(){
   int arr[] = {4,5,2,10,8,9,8};//an array
   const int n = sizeof(arr)/4;//array size

   int next[n];//new array for next greatest element
   next[n-1] = -1;//obiously the last index does not have any after that so initialy makeit -1
  int i,j;
   for(i=0;i<n-1;i++){//it will go till last but 1 index as to avoid bound error
     for(j=i+1;j<n;j++){//as soon as it finds an greater element then i then it will be stored array
       if(arr[i]<arr[j]){
       next[i] = arr[j];
          break;//then break out of the loop and go for another element
        }
        else{//if it does find any greater element till the end then set it to -1
            next[i] = -1;
        }
   }
}
  
   for(int i=0;i<n;i++){
      cout<<next[i]<<" ";//printing the next greatest elements
   }
   

}