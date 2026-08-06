#include<iostream>//Leetcode 442                   Find All Duplicates in an Array
#include<vector>
//here we need to return all the duplicate elements in the array in correct order
using namespace std;
int main(){
  int a[] = {4,3,2,7,8,2,3,1};//array
  int n = sizeof(a)/4;
  vector<int> nums(a,a+n);

        vector<int> v;
        int i=0;
        while(i<n){
             int idx = nums[i]-1;//the elements correct index
             if(idx == i || nums[idx]== nums[i]) i++;//if element is present at it's correct index and if element already present in it's correct index is same then skip
            else swap(nums[i],nums[idx]);//otherwise swap
             }    

        for(int i=0;i<n;i++){
            if(nums[i] != i+1) v.push_back(nums[i]);//if any element does not matches it's correct index (i+1) then that element is duplicate
        }
        
    for(int ele : v){//printing
      cout<<ele<<" ";
    }
}