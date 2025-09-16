#include<iostream>//Leetcode      1814 Count Nice Pairs in an Array
#include<unordered_map>
using namespace std;
int reverse(int x){//this function will reverse the digits of a number
        int rev = 0;
        while(x>0){
             int rem = x%10;
             rev = (rev*10) + rem;
             x/=10;
        }
        return rev;
    }
int main(){
    int nums[] = {42,11,1,97};//here we need to find arr[i]-rev[arr[i]] == arr[j]-rev[arr[j]]
        int count = 0;
        int n = 4;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
           int rev = reverse(nums[i]);//reverse the digits
           int x = nums[i]-rev;//then minus nums[i] with it's reverse

           if(mp.find(x) != mp.end()){//check whether it exisit in the map or not
           count%=1000000007;//it is given in the question itself to add %10 to the power 9 + 7
            count+=mp[x];//it exisit then add it's frequency to count
            }
           mp[x]++;//add each element of array in map
        }
        //it is given in the question itself to add %10 to the power 9 + 7
        cout<<count%1000000007;//Return the number of nice pairs of indices. Since that number can be too large, return it modulo 109 + 7.

 
    }