//Leetcode 709 To Lower Case

class Solution {
public:
    string toLowerCase(string s) {
        string str;
        for(char ele : s){
             if(ele >= 'A' && ele <= 'Z'){
                 ele+=32;
             }
           str.push_back(ele);
        }
        return str;
    }
};