#include<iostream>//Leetcode     40                 Combination Sum II
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int> > v;
    void combi(vector<int>ans,vector<int> &arr,int target,int idx){
        if(target == 0){//when the target reaches 0 tgeb we got the combination
             v.push_back(ans);
             return;
        }
        if(idx == arr.size()) return;//when idx reaches end then return
    
       if(arr[idx] <= target){ //only make a call if element is lesser then target/dont pick it
          
          ans.push_back(arr[idx]);//insert that element into ans array

            combi(ans,arr,target-arr[idx],idx+1);//subtract that element from target
          
            ans.pop_back();//also remove that element from ans after the call
       }
       int j = idx+1;//do this to avoid  reapition
       while(j<arr.size() && arr[j] == arr[j-1])j++;//this is for skipping the repeated elemnts
       combi(ans,arr,target,j);//make a call of dont pick element and pass j to move to next element
    }

  int main() {
   vector<int> candidates = {10,1,2,7,6,1,5};
   int target = 8;

        v.clear();
       vector<int>ans;
  sort(candidates.begin(),candidates.end());//for this solution we have to sort array

 combi(ans,candidates,target,0);

       for(int i=0;i<v.size();i++){//printing the different combitions to reach the sum
        for(int j=0;j<v[i].size();j++){
          cout<<v[i][j]<<" ";
        }
        cout<<endl;
       }
        
    }