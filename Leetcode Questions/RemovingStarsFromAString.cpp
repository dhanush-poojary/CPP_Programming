//leetcode 2390. Removing Stars From a String


class Solution {
public:
    string removeStars(string s) {
        //stack<char> st;
         
        string str;
        int i = 0;
        while(i<s.length()){
            if(s[i] >= 'a' && s[i] <= 'z'){
               //st.push(s[i]);
               str.push_back(s[i]);
            }
            else{ //for star
                 str.pop_back();
                // st.pop();


            }
            i++;
        }
        // while(!st.empty()){
        //     str.push_back(st.top());
        //     st.pop();
        // }
        // reverse(str.begin(),str.end());
        return str;
    }
};