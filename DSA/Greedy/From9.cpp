#include<iostream>//Leetcode   56           Merge Intervals
#include<vector>
#include<algorithm>
using namespace std; 
 bool cmp(vector<int> a, vector<int> b){//sorting according to array's first index in ascending
       return a[0]<b[0];
   }
int main(){
    vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};

       sort(arr.begin(),arr.end(),cmp);//sorting according to the first element of each interval

        vector<vector<int>> result;

        result.push_back(arr[0]);//add the first pair 
        for(int i=1;i<arr.size();i++){
//here we are doing it by sorting starting point so travel left to right
        vector<int> currentint = arr[i];//it will be i'th pair

        if(currentint[0] <= result[result.size()-1][1] ){//if currnt pair[0]'th ele <= prev pair[1]'th ele then there are overlapping

     result[result.size()-1][0]=   min(currentint[0],result[result.size()-1][0]);//change the starting point
     result[result.size()-1][1]=   max(currentint[1],result[result.size()-1][1]);//and also ending point   update it inside previous only

        }
        else{//if there are not overlapping then just insert 
            result.push_back(arr[i]);//those pair into resultant
        }
        }
        
    for(int i=0;i<result.size();i++){//printing the resultant pair's for this
      for(int j=0;j<result[0].size();j++){
          cout<<result[i][j]<<" ";
      }
     cout<<endl;
    }
      }