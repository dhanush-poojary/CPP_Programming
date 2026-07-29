#include<iostream>//Leetcode 452    Minimum Number of Arrows to Burst Balloons
#include<vector>
#include<algorithm>
using namespace std;   
   bool cmp(vector<int> a, vector<int> b){//sorting the array accoring to ending point
       return a[1]<b[1];
   }
int main(){
  vector<vector<int>> arr = {{10,16},{2,8},{1,6},{7,12}};
          sort(arr.begin(),arr.end(),cmp);//sorting according to the second element of each interval

        vector<vector<int>> result;
        result.push_back(arr[0]);//insert the first pair of element in prev

        int count = 0;
        for(int i=1;i<arr.size();i++){
//here we are sorted accoring to end point it is in question so but we are doing it left to right
        vector<int> currentint = arr[i];

        if(currentint[0] <= result[result.size()-1][1] ){

     result[result.size()-1][0]=   min(currentint[0],result[result.size()-1][0]);//choose minimum values for prev
     result[result.size()-1][1]=   min(currentint[1],result[result.size()-1][1]);
            count++;//1 arrow
            
        }
        else{
            result.push_back(arr[i]);//insert it in prev if it is not overlapping
        }
        
      }
        cout<< arr.size()-count;//lastly we have to minus all no of pair with count of arrows
        //there are 4 pair and 2 arrows so answer will be 2 arrows
  }
      