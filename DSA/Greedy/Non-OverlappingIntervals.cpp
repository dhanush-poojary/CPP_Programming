#include<iostream>//Leetcode  435   Non-overlapping Intervals
#include<vector>
#include<algorithm>
using namespace std; 
      bool cmp(vector<int> a, vector<int> b){//sorting the array according to 2nd element of pair
         return a[1]<b[1];
     }
int main(){
  vector<vector<int>> arr = {{1,2},{2,3},{3,4},{1,3}};
          sort(arr.begin(),arr.end(),cmp);//sorting according to the second element of each interval

        vector<vector<int>> result;
        result.push_back(arr[0]);//insert the first element in to result which acts as previous
        int count = 0;

        for(int i=1;i<arr.size();i++){//here we are doing it by sorting starting point so travel left to right
          
        vector<int> currentint = arr[i];//this represents current pair which will be compared with prev

        if(currentint[0] < result[result.size()-1][1] ){//here difference is = will be not considered unlike previous question

     result[result.size()-1][0]=   min(currentint[0],result[result.size()-1][0]);//choosing the smallar points for starting
      result[result.size()-1][1]=   min(currentint[1],result[result.size()-1][1]);//as well as for ending point too
            count++;//increament the count

        }
        else{//if not overlappinng then
            result.push_back(arr[i]);//just insert that pair
        }
        
        }

        cout<<count;//print the count of overlapped interval
}