//Leetcode 844. Backspace String Compare

class Solution {
public:
    bool backspaceCompare(string s, string t) {
          string str1;
          string str2;
        int i = 0;
        while(i<s.length()){
            if(s[i] >= 'a' && s[i] <= 'z'){
               str1.push_back(s[i]);
            }
            else{ //for star character
                if(!str1.empty())
                 str1.pop_back();
            }
            i++;
        }
        i = 0;
          while(i<t.length()){
            if(t[i] >= 'a' && t[i] <= 'z'){
               str2.push_back(t[i]);
            }
            else{ //for star character
                if(!str2.empty())
                 str2.pop_back();
            }
            i++;
        }
        return (str1 == str2);
    }
};