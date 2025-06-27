#include<iostream>//leetcode 268                 Missing Number
#include<vector>//here we need to find a missing number within range 0 to n in an array
using namespace std;
int main(){
      int arr[] = {3,0,4,1};//array
      int n = 4;

      vector<int> nums(arr,arr+n);//making copy of array into vector

    //  method -1 //using cycle sort  O(n) T.C but it modifies the array

        int i=0;
        while(i<n){
            int idx = nums[i];//correct index
            if(nums[i] == n || idx == i) i++;//if it is at correct index or the element greater then n skip
            else{
                swap(nums[i],nums[idx]);//otherwise swap them
            }
        }
        //after that we get an array of 0,1,3,4
        for(int i=0;i<n;i++){
            if(nums[i] != i) cout<<i;//where the index of 3 does matches it's element it is the missing number
        }
     

      //method -2//T.C O(n) best method
      // int sum1 = (n*(n+1))/2;//sum range upto n
      // int sum2 = 0;
      // for(int i=0;i<n;i++){
      //    sum2+=arr[i];//sum of array
      // }
      // cout<<(sum1-sum2);//missing element

      //method -3  T.c is O(n2) but S.C is also O(n) bcz it usesa an extra array
    //   vector<bool> v(4,false);
    //   for(int i=0;i<n;i++){
    //       int ele = arr[i];
    //       v[ele] = true;//putting true in the index of element as a check mark
    //   }
    //   for(int i=0;i<n;i++){
    //     if(v[i] == false)//if any element gets false then it's index is missing element
    //     { cout<<i;
    //        break;
    //     }
    //   }

}