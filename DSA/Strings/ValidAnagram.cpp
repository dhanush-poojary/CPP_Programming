#include<iostream>//Leetcode 242         Valid anagram
#include<algorithm>
//it is basically whether the 2 strings have same number of characters or not
//it also mean in both strings same character needs to be present or it is a another version of s string
using namespace std; 
int main()
{  string s = "God mode";//string 1
   string t = "mode God";//string 2
   //first sort the 2 strings to get the same string as return
   sort(s.begin(),s.end());//sort string 1
   sort(t.begin(),t.end());//sort string 2

   //we are cheking that the string 1 and string 2 are both same or not if not then it is not a anagram
   if(s == t) cout<<"The strings are anagram";
   else cout<<"The strings are not anagram!";

   return 0;
}