//Leetcode 896 Monotonic Array

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag_inc = true;
      for(int i=0;i<nums.size()-1;i++){
           if(nums[i] > nums[i+1]) flag_inc = false;
        }
          bool flag_dec = true;
      for(int i=0;i<nums.size()-1;i++){
           if(nums[i] < nums[i+1]) flag_dec = false;
        }
        if(flag_inc == true && flag_dec == false) return true;
        if(flag_inc == false && flag_dec == true) return true;
        if(flag_inc == true && flag_dec == true) return true;
        return false;
      }
    
};