#include<iostream>//Leetcode 1480                  Running Sum of 1d Array
#include<vector>
using namespace std;
//Running sum means prefix sum of the array
int main(){
  int arr[] = {1,2,3,4};// [1,3,6,10]
  int n = 4;
  vector<int> nums(arr,arr+n);

         //method -1 T.c O(n) but S.c O(n) which uses extra array
        // vector<int> run(n);//extra array
        // run[0] = nums[0];//putting first element of nums to run
        // for(int i=1;i<n;i++){//start from 1 as the 1st element is already stored
        //     run[i]= run[i-1]+ nums[i];//taking prefix sum of nums array
        // }
        // return run;
        
        //method -2 T.c O(n) but S.c O(1)
        for(int i=1;i<n;i++){//here we are taking the prefix sum of the array nums within itself
            nums[i] = nums[i] + nums[i-1]; //taking prefix sum of array within itself
        }
      for(int ele : nums){
        cout<<ele; //printing
      }

}