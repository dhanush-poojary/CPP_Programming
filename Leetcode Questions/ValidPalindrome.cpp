//Leetcode 125 Valid Palindrome

class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.length();i++){
             if(isalnum(s[i])){
                str.push_back(tolower(s[i]));      
             }

        }
        string rev = str;
        reverse(rev.begin(),rev.end());
        return str == rev;

    }
};