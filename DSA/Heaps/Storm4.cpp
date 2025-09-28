#include<iostream>//Heapify Algorithm
using namespace std;
void heapify(int arr[],int idx,int n){
   while(true){//this block of code is from imp min heap from array's pop()'s rearrangment
         int left = 2*idx;//left child node
         int right = (2*idx)+1;//right child node

         if(left > idx-1) break; //left goes out of bound
         if(right > idx-1){//if right is not present then check or swap with left
              if(arr[idx]>arr[left] ) {
                swap(arr[left],arr[idx]); 
              idx = left;   //also move i to left
        }
         break;
      }
         if( arr[left] < arr[right]){//left>right
              if(arr[idx]>arr[left] ){ //swap with left's element
                swap(arr[left],arr[idx]); 
              idx = left;//also move i to left
            }
              else break;
         }
         else{//left<right
              if(arr[idx]>arr[right] ) {//swap with right's element
                swap(arr[right],arr[idx]); 
              idx = right;
            }
              else break;
         }
      }
}
int main(){
   int arr[] = {-1,10,2,14,11,1,4};//here we are going to use 1 based indexing  so -1 at 0'th index
   int n = 7;

    for(int ele : arr){
       if(ele == -1) continue; //skipping the 0'th indexed element
      cout<<ele<<" ";//printing
   }
   cout<<endl;

//as the property of CBT(complete binary tree) say's n/2 nodes will be the no of leaf node of that tree if odd then n/2+1
//so the leaf nodes are already heaps bcz 1 size is considered as heap so we dont need to check them
for(int i = n/2;i>=1;i--){
        heapify(arr,i,n);//it will insert an element and rearranges
   }

   for(int ele : arr){
       if(ele == -1) continue; //skipping the 0'th indexed element
      cout<<ele<<" ";//printing
   }
}