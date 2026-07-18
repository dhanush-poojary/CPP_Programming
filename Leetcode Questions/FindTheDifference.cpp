//Leetcode 389 Find the Difference

class Solution {
public:
    char findTheDifference(string s, string t) {
         unordered_map<char,int>mp;
         for(char ch : s) mp[ch]++;
         for(char ch : t) {
            mp[ch]--; //freq -1 if present then it will be 0 ,but if ele is not present then 
                                             //add element and freq-1 so it will be -1

            if(mp[ch] < 0){ 
                return ch;
            }
         }
        return '/0'; //it does not return bcz 1 char is guranteed added to t
    }
};