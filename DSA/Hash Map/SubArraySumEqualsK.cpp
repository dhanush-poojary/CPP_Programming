#include<iostream>//Leetcode    560           Subarray Sum Equals K
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    int nums[] = {1,1,1}, k = 2;//k is the target
    int n = 3;
         vector<int> prefix(n);
         int count = 0;
         prefix[0] = nums[0];
         for(int i=1;i<n;i++){//firstly we gonna take prefix sum of the array nums
              prefix[i] = nums[i] + prefix[i-1];
         }
         unordered_map<int,int>mp;
         for(int i=0;i<prefix.size();i++){//then we gonna travel in that prefix sum array
              if(prefix[i] == k) count++;//if any element equals k then count++
              
                    int rem = prefix[i]-k;//if the elements is greater then k we gonna remaining number
                    //for exam 14-5 = 9 which 5 will be reaminder

                    if(mp.find(rem) != mp.end()) count+=mp[rem];
                   mp[prefix[i]]++;
              
         }
          cout<<count;//prints count
    }