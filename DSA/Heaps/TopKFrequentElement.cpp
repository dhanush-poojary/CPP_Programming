#include<iostream>//Leetcode    347             Top K Frequent Elements
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] =  {1,1,1,2,2,3}, k = 2;//an array
    int n = 6;
    vector<int> nums(arr,arr+n);

        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){//insert all elements into the unordered map
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int> > pq;//crated a max heap of pair
        for(auto x : mp){
             pq.push({x.second,x.first});//insert all elements of map into max heap but in opposite order
        }
        int i = 0;
        while(i<k){//run loop k times
         v.push_back((pq.top()).second);//.second is the element insert it into v 
           mp.erase((pq.top()).second);//remove that element from map
           pq.pop();//remove that element from max heap
           i++;
        }
      for(auto ele : v){//printing
          cout<<ele<<" ";
      }
}