//Leetcode 680 Valid Palindrome II
class Solution {
public:
    bool isPalindrome(int i,int j,string s){
         string copy = s;
         while(i<=j){
          swap(s[i],s[j]);
            i++;
            j--;
         }
         cout<<copy<<" "<<s;
         return copy == s;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;;
            }
            else if(s[i]!=s[j]){
                bool Del_i =  isPalindrome(i+1,j,s);
                bool Del_j =  isPalindrome(i,j-1,s);
                if(Del_i || Del_j) return true; //either any of them are true if by deleting i or j it can be palindrome then return  true
                else return false;//by deleting both i or j it is not a palindrome
            }
        }
        return true;
    }
};