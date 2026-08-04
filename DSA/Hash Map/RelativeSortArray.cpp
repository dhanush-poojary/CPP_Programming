#include<iostream>//Leetcode 1122          Relative Sort Array
#include<map>
#include<vector>
using namespace std;
int main(){    
  int  arr1[]  = {2,3,1,3,2,4,6,7,9,2,19}, arr2[] = {2,1,4,3,9,6};
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<11;i++){
            mp[arr1[i]]++;//firstly insert all numbers in map with thier frequencies
        }
        for(int i=0;i<6;i++){//push_back the element which exisit in arr2 in ans vector
            int x = arr2[i];//as we need it in order so take each number of arr2
            while(mp[x] !=0){//push back in ans it's all frequencies
               ans.push_back(x);
               mp[x]--;//fremove it's frequncy
            }
            mp.erase(x);//after inserting all the elements remove it from the map
        }
        for(auto key : mp){//for push backing the elements which does not exisit in arr2  in acsending order
            int x = key.first;//as we used ordered map the elements will be in sorted order
             while(mp[x] !=0){//push back in ans it's all frequencies
               ans.push_back(x);
               mp[x]--;//fremove it's frequncy
            }
            mp.erase(x);//after inserting all the elements remove it from the map
        }
    
      for(int ele : ans) cout<<ele<<" ";//prints the new sorted array
     
}