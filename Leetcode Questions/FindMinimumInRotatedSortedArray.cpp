//Leetcode 153. Find Minimum in Rotated Sorted Array

//Logical Solution
//  sort(nums.begin(),nums.end());     
//         return nums[0];

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();

        if(n == 1 || n == 2){
            return min(nums[0],nums[nums.size()-1]);
        }

        int low = 0,hi = n-1;
        //finding pivot element / index
        int pivot = -1; //first element of array before roatation
        while(low<=hi){
            int mid =  (low+hi)/2;
            //as the first index cannot be pivot we need to apply these 2 cases
            if(mid == 0) low = mid+1;
            else if(mid == n-1) hi = mid-1;
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                pivot  = mid;
                break;
            }
            else if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                pivot  = mid+1;
                break;
            }
            else if(nums[mid]>nums[hi]) low = mid+1;
            else hi = mid-1;
        }
        //searching the element 
        if(pivot == -1){//array is already sorted in original form, or not roatated
           return nums[0];
        }
        else{
            return nums[pivot];
        }

        return -1;//this will never execute

    }
};