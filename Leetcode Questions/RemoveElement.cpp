//Leetcode 27 Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {//dont remove element just need to change the position/ move all val to end 
       int idx = 0;
       for(int i=0;i<nums.size();i++){
          if(nums[i] != val){
             nums[idx++] = nums[i];
             
          }
       }
       return idx;
    }
};