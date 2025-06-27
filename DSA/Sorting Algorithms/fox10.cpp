#include<iostream>//Leetcode 448              Find All Numbers Disappeared in an Array
#include<vector>
//here we need to return the disappeared numbers from the array which has 1 to n elements
//where the elemenets can be duplicated
using namespace std;
int main(){
  int a[] = {4,3,2,7,8,2,3,1};//array with duplicates
  int n = sizeof(a)/4;
  vector<int>nums(a,a+n);//copy of the array

        int i=0;
        while(i<n){
             int idx = nums[i]-1;//correct index of the element in the array
             if(nums[idx] == nums[i] || idx == i ) i++;//if the element is already present or if it is present in it's correct index then skip
             else{
                   swap(nums[i],nums[idx]);//otherwise swap them
             }
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i] != i+1) v.push_back(i+1);//if any element does not matches it's correct inde (i+1) then i+1 is the missing element
                                                //because the array has 1 to n elements
        }
     
    for(int ele : v){//printing
      cout<<ele<<" ";
    }
}