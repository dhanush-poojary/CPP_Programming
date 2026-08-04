#include<iostream>//Leetcode  387 First Unique Character in a String
#include<unordered_map>
using namespace std;
int main(){ 
    string s = "leetcode";//an string consisting duplicates

 unordered_map<char,int> mp;//we can not store single character in a string so use char
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;//first insert all character of string with it's occurrence
        }
        for(int i=0;i<s.length();i++){
            if(mp[s[i]] == 1){//check the first character's occurrence which is 1 then print it
              cout<<"first occurence is "<<i;
            return 0;
            }
        }

}