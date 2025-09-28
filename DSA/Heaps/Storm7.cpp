#include<iostream>//Leetcode    1636              Sort Array by Increasing Frequency
#include<vector>   
#include<unordered_map>
#include<queue>
using namespace std;
typedef pair<int,int> p;
int main(){   

  int nums[] = {1,1,2,2,2,3};
  int n = 6;
    for(int ele : nums){
         cout<<ele<<" ";//printing
      }
      cout<<endl;
        unordered_map<int,int> mp;
        for(int i=0;i<6;i++){//insert all elements into nums with it's frequency
            mp[nums[i]]++;
        }
        priority_queue<p,vector<p>,greater<p> > pq;
        for(auto x : mp){//insert all elements of map into min heap but
//we are coverting positive into negetive values and vice verca so that positive and greater value must come first           
              pq.push({x.second,-x.first});
        }

        vector<int> ans;
        while(pq.size() != 0){//filling the array by thier frequency but in sorted order
    //we are coverting positive into negetive values and vice verca so that positive and greater value must come first     
           int ele = -pq.top().second;//retriving the element
           int freq = pq.top().first;  //it's frequency
           pq.pop();     
           while(freq != 0){//filling all the frequency of elements
               ans.push_back(ele);
               freq--;
           }
        }
      for(int ele : ans){
         cout<<ele<<" ";//printing
      }
}        