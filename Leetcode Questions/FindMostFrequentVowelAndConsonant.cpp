//Leetcode Question: 2262. Total Appeal of A String

class Solution {
public:
    int maxFreqSum(string s) {
        //Method - 1 Using Hash table T.C O(N) & S.C (N)
        // unordered_map<char,int> mp;
        // for(int i=0;i<s.length();i++){
        //      mp[s[i]]++;
        // }
        // int max_vowel = INT_MIN;
        // int max_cons = INT_MIN;
        // for(auto p : mp){
        //     if(p.first == 'a' || p.first == 'e' || p.first == 'i' || p.first == 'o' || p.first == 'u'){
        //         max_vowel = max(max_vowel,p.second);
        //     }
        //     else{//for consonents
        //         max_cons = max(max_cons,p.second);
        //     }
        // }
        // if(max_vowel == INT_MIN) max_vowel = 0;
        // else if(max_cons == INT_MIN) max_cons = 0;
        //return max_vowel+max_cons;


         //Method - 2 Using Frequency Counting
         vector<int> v(26,0);
         for(int i=0;i<s.length();i++){
             v[s[i] - 'a']++;
         }
        int max_vowel = 0;
         int max_cons = 0;
         for(int i = 0;i<s.length();i++){
              int idx = s[i] - 'a'; //index of current character in array
              if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                
                max_vowel = max(max_vowel,v[idx]);
            }
            else{//for consonents
                max_cons = max(max_cons,v[idx]);
            }
         }

        return max_vowel+max_cons;
    }
};