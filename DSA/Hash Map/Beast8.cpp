#include<iostream>//Leetcode    1207       Unique Number of Occurrences
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main(){ 
 int  arr[] = {1,2,2,1,1,3};//an array consisting of duplicate elements with multiple frequencies
 int n = 6;
 unordered_map<int,int> mp;//this is for storing the element and it's frequency

        for(int i=0;i<n;i++){
             mp[arr[i]]++;//if the element exisit in map then increament the frequency otherwise insert the element
        }
        unordered_set<int>s;//we gonna need set for seperating the duplicates
        for(auto x: mp){//for traveling in the map
            int idx = x.second;//take each element's frequency
           s.insert(idx);//and insert it in the set so that duplicate's are removed
        }
        if(mp.size() == s.size()) cout<<"true";//if there is no duplicate then both's size will be same
        else cout<<"false";
}