#include<iostream>//Valid anagram using map data structure O(n) Time compelxity
#include<unordered_map>
using namespace std;
int main(){
  string s = "anagram", t = "nagaram";//2 strings
//Method: 2 using only 1 map
    if(s.length() != t.length()) return false;//both strings of different length can not be anagram

        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)  mp[s[i]]++;//insert all the element into the map and increament it's frequency too
        
        for(int i=0;i<t.size();i++){
             if(mp.find(t[i]) != mp.end()){//search each element of t string inside the map
                 mp[t[i]]--;//if it is found then decreament it's frequency
                if(mp[t[i]] == 0) mp.erase(t[i]);//if it gets 0 then remove it from map itself
                //bcz all occurerneces of that character's are over
             }
             else {//it the character is not found  in the map then directly return false
              cout<<"false";
              return 0;
             }
        }
//method: 1 using 2 map data structure
    //     unordered_map<char,int> mp1;//for s string
    //     unordered_map<char,int> mp2;//for t string
    //     for(int i=0;i<s.length();i++){
    //          mp1[s[i]]++;//if already present then increace the freaquency otherwise create the key or insert the element in map
    //          mp2[t[i]]++;
    //     }
    //    for(auto key : mp1){//traverse in mp1
    //        char ch = key.first;//take map1's each elements key and frequency
    //        int freqs = key.second;
    //        if(mp2.find(ch) != mp2.end()){//check whether if the s's character exisits in t
    //            int freqt = mp2[ch];//take the frequency from map2
    //            if(freqs != freqt) return false;//compare map1's and map'2 frequency of that character
                  //if it gets equal then no probelm
    //        }
    //        else return false;//s's character doest not exisit in t
    //    }
      cout<<"true";
    
}