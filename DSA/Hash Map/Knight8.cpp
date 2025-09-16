#include<iostream>//Leetcode     49     Group Anagrams
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){  
   vector<string> str; //an vector of string
   str.push_back("eat");//inserting the elements
   str.push_back("tea");
   str.push_back("tan");
   str.push_back("tan");
   str.push_back("nat");
   str.push_back("bat");

    vector<vector<string>> v;//we need to insert all the distinct groups of anagrams in each different rows
        unordered_map<string,vector<string>> mp;//we gonna use 1d vector to store string of anagram
        for(int i=0;i<str.size();i++){
            string s  = str[i];//take the string

            sort(s.begin(),s.end());//and then sort it
            if(mp.find(s) != mp.end()){//check if it exist in map
                mp[s].push_back(str[i]);//if it exist then push back it's original string to the vector print in s key
            }
            else{//if not exist in mp then 
                 mp[s].push_back(str[i]);//insert s in map and also push back str[i] original string to the array
            }
        }
        for(auto key : mp){//we can traverse in any order and just push_back all the 
         //1d vectors into the 2nd vector of string 
              v.push_back(mp[key.first]);
        }
        
     for(int i=0;i<v.size();i++){//printing the string anagram groups
        for(int j=0;j<v[i].size();j++){
           cout<<v[i][j]<<" ";
        }
        cout<<endl;
     }   
} 