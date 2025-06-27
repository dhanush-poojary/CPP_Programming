#include<iostream>//Leetcode 41              First Missing Positive
#include<vector>
//here we need to return  the first missing positive number from the given array
using namespace std;
int main(){
   int arr[] = {3,4,-1,1};//an array
   int n = sizeof(arr)/4;

   vector<int> nums(arr,arr+n); //making a copy of array

       int i=0;
       while(i<n){
          if(nums[i]<=0) i++;//dont even do anything if it is negetive
//if the element is greater then n or it is present at it's correct index (i+1) or if the element
//already if present at it's correct index then skip
          else if(nums[i]>n  || nums[i] == i+1 || nums[ nums[i]-1] == nums[i]) i++;
          else (swap( nums[nums[i]-1],nums[i]));//swap it with it's correct index
       }
          for(int i=0;i<n;i++){
              if(nums[i] != i+1){//if any element dose not matchs it's correct index(i+1) then it is missing positive number
                cout<<i+1;
                exit(0);
              }
          }
      cout<< n+1;//if there is not missing positive number, it's next element is missing

}