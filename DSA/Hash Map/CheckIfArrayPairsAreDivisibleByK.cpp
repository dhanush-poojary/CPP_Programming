#include<iostream>//Leetcode   1497 Check If Array Pairs Are Divisible by k
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
 int arr[] = {1,2,3,4,5,10,6,7,8,9}, k = 5;

unordered_map<int,int>mp;
     //first we need to insert the each element of arr  by ((ele % k) + k) % k in the map
        for(int ele: arr){  //hint
           ele = ((ele % k) + k) % k;//Keep an array of the frequencies of ((x % k) + k) % k for each x in arr.
            mp[ele]++;
        }

        for(auto x: mp){//traverse in the map
             if(x.first == 0){
                if(!(x.second%2 == 0)) {//check it's frequency if it 2 or even then ok otherwise return false
                  cout<<"False";
                  return 0;
                }
             }
             else{//if it is not zero then

                int rem = k-x.first;//take the remainder 
                if(mp.find(rem) == mp.end()){//if rem does not exist in map then return false becuase a pair can not be formed
                  cout<<"False";
                  return 0;
                }
                int freq = mp[rem]; //take the frequency
                if(x.second != freq){//check the frequency of rem and x.second
                  cout<<"False";//if not equal then return
                  return 0;
                }
             }
        }

        cout<<"True";//if it is divisible then true
}