#include<iostream>//Leetcode      2744     Find Maximum Number of String Pairs
#include<unordered_set>
#include<algorithm>
#include<vector>
using namespace std;
int main(){ 
 string v[] = {"cd","ac","dc","ca","zz"};//an array consisting pairs
 int n = 5;
 vector<string> words(v,v+n);
 int count = 0;
        unordered_set<string>s;
         for(int i=0;i<words.size();i++){
           string s1 = words[i];//here we gonna take each pair's
           reverse(s1.begin(),s1.end());//then reverse it 
            if(s.find(s1) != s.end()) count++;//after that search it in a set if it exisit then increament the count
            else s.insert(words[i]);//otherwise insert it to the set for next round
         }
       cout<<count;//print the maximum number of string pair
}