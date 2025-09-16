#include<iostream>//Leetcode 1657      Determine if Two Strings Are Close
#include<unordered_map>
using namespace std;
int main(){
  string s1 = "abc", s2 = "bca";//2 string that we need to tell they are close to each other or not
 if(s1.length() != s2.length()){//it is impossible if both strings are of different length to be close
              cout<<"false";//return false
              return 0;
            }
        unordered_map<char,int> mp1,mp2;//create 2 unordered map to store both string character with their occurence
        for(int i=0;i<s1.length();i++){
            mp1[s1[i]]++;//insert character of 1st string
            mp2[s2[i]]++;//insert character of 2nd string
        }
       for(auto x : mp1){//check for each character of mp1 is present in mp2
          if(mp2.find(x.first) == mp2.end()){//if it is not present then 
              cout<<"false";//return false
              return 0;
            }
       }
        
        unordered_map<int,int> m1,m2;//create to more unordered map to store frequncy's frequncy of both string's characters
        for(auto x: mp1){//storing the frequency's frequency of string 1
            int freq  = x.second;
            m1[freq]++;
        }
        for(auto x: mp2){//storing the frequency's frequency of string 1
            int freq  = x.second;
            m2[freq]++;
        }

//Compare whether both frequencies of characters of s1 are equal to the frequencies of characters of s2
//inorder to be close both string's character's and freuquency should be same   
for(auto x: m1){//traverse in m1
            if(m1.find(x.first) == m1.end()){//if it does not exist then return false
              cout<<"false";//return false
              return 0;
            }
            else{//if it exist then check frequncy's frequency whether both are equal
                  if(m1[x.first] != m2[x.first]){//if not equal then not close
                      cout<<"False";//return false
                      return 0;
                  }
            }
        }
      cout<<"True";//return true
      }