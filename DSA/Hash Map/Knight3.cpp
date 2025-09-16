#include<iostream>//Leetcode 2094          Finding 3-Digit Even Numbers
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
   int digits[] = {2,1,3,0};
    int n = 4;
        vector<int>ans;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
             mp[digits[i]]++;//insert all numbers of digits in to the map with their frequencies
        }
        for(int i=100;i<=999;i+=2){//we are gonna need all even numbers from 100 to 999 inorder to reduce time we jummped i by 2
            int digit = i;//we gonna take each number

             int f = digit%10;//retriving it's first digit
             digit/=10;//remove it from digit
             int s = digit%10;//retriving it's second digit
             digit/=10;//remove it from digit
             int t = digit;//retriving it's third digit

          if(mp.find(f) != mp.end()){//check for first digit exist in mp
               mp[f]--;//if exist then - it's freuquency
               if(mp[f] == 0) mp.erase(f);//if there is no freuquency left then delete first digit
             
               if(mp.find(s) != mp.end()){//check for second digit exist in mp
                  mp[s]--;//if exist then - it's freuquency
                  if(mp[s] == 0) mp.erase(s);//if there is no freuquency left then delete second digit
                 
                  if(mp.find(t) != mp.end()) ans.push_back(i); //if third digit also found then it is a valid number so push it back
               
                  mp[s]++;// after that insert back or increament the frequcncy of second digit in map
               }
           mp[f]++;// after that insert back or increament the frequcncy of second digit in map
           }
        }
  for(int ele: ans) cout<<ele<<" ";//prints elements
}