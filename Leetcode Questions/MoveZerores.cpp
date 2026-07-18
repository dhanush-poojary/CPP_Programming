//Leetcode 283 Move Zeroes

//Method 1:
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int idx = 0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]!=0){
//                 nums[idx++] = nums[i];
//             }
//         }
//         while(idx<nums.size()){
//             nums[idx++] = 0;
//         }
//     }
// };

//Method 2:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      bool flag = true;
        for(int i=0;i<nums.size();i++){
             if(flag = false)break;
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j] == 0){
                    swap(nums[j],nums[j+1]);
                    flag = false;
                }
            }
        }
    }
};

//method 3:
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-i-1;j++){
                if(nums[j] == 0){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
};