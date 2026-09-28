//Leetcode 154. Find Minimum in Rotated Sorted Array II

class Solution {
public:
    int findMin(vector<int>& nums) {
         int n = nums.size();

        if(n == 1 || n == 2){
            return min(nums[0],nums[nums.size()-1]);
        }

        int low = 0,hi = n-1,mid = -1;
        while(low<=hi){
            mid =  (low+hi)/2;
            if (nums[mid] > nums[hi])
                low = mid + 1;
            else if (nums[mid] < nums[hi])
                 hi = mid;
            else
                 hi--;
        }

      return nums[mid];

    }
};