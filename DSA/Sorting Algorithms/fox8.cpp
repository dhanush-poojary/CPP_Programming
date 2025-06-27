#include<iostream>//Leetcode 169                             Majority Element
#include<vector>
#include<algorithm>
//here we just need to return the element which comes n or more then n times in the array
using namespace std;
int main(){
  int arr[] = {3,2,3};
  int n = 3;

  vector<int> nums(arr,arr+n);
        sort(nums.begin(),nums.end());//sort the array then the element comes to middle
        cout<< nums[n/2];//print the middle element which is majority element
}