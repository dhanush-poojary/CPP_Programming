#include<iostream>//Leetcode 781 Rabbits in Forest
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
  vector<int> arr = {1,1,2};
      int sum = 0;
        unordered_map<int,int>mp;
      for(int i=0;i<arr.size();i++){//we are purforming 1 based frequency so +1 for element  
             if(!mp[arr[i]+1]){//if element is not presnt in map
                sum+= arr[i]+1; 
                if(arr[i] == 0) continue;//if it is a zero then dont put it in map
                mp[arr[i]+1]= 1;
             }
             else{
                mp[arr[i]+1]++;
                 if(mp[arr[i]+1] == arr[i]+1) mp.erase(arr[i]+1);//that ele's group has finished so remove it from map
             }
        }
       
         cout<<sum;//print the minimum number of rabbits in the forest
}