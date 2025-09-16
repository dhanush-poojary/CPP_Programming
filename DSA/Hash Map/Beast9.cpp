#include<iostream>//Two Sum using map within O(N) Time complexity
#include<unordered_map>
using namespace std;
int main(){
   int nums[] =  {2,7,11,15} , target = 9 ;  //an array with a target element
   int n = 4; 
   unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int rem = target - nums[i];//minus target with nums[i] to get the value required to make it target found
            if(mp.find(rem) != mp.end()){//if that value exisit in the map then
                cout<<mp[rem]<<" , "<<i;//return  map's element mp[rem] and i' both index's
                 return 0;
            }
            else mp[nums[i]] = i;//if it does not exisit then insert element and it's index in the map
        }
        return 0;
}