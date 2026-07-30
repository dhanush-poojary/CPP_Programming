#include<vector>//Leetcode       90            Subsets II
#include<iostream>
#include<algorithm>
using namespace std;  
  void helper(vector<int>& nums, vector<int>ans,vector<vector<int>>&res,int idx){
        if(idx == nums.size()){//when idx reaches end of array then return 
            res.push_back(ans);
            return;
        }
        ans.push_back(nums[idx]);//pick the element 
        helper(nums,ans,res,idx+1);//move to next element
        ans.pop_back();//revert the changes of ans array

        int j = idx+1;//this is to avoid the reapeated elements
        while(j<nums.size() && nums[j] == nums[j-1]) j++;//this is for skipping the repeated elemnts
        helper(nums,ans,res,j);//move to next element and pass j

   }
int main() {
  vector<int>  nums = {1,2,2};

     sort(nums.begin(),nums.end());//for this solution we have to sort the array
     vector<int>ans;
       vector<vector<int> > res;
        helper(nums,ans,res,0);  

       for(int i=0;i<res.size();i++){//printing the all sub sets of nums with no duplicates
        for(int j=0;j<res[i].size();j++){
          cout<<res[i][j]<<" ";
        }
        cout<<endl;
       }
    }