#include<iostream>//Leetcode 881  Boats to Save People
#include<vector>
#include<algorithm>  
using namespace std;
int main(){   
 vector<int> people =  {3,2,2,1};
   int limit = 3;//boat's capacity
//here we have infinite no of boats

     int i = 0;//keep i at 0
     int j = people.size()-1;//j at last 

        sort(people.begin(),people.end());//sort the people array to bring smaller elements to front

        int count = 0;
       while(i<=j){
         if(people[j] == limit){//(maximum elements)weight is equal to boats limit
             j--;//then j--
             count++;//add 1 boat
         }
         else{//if that is smaller or larger
             if(people[i]+people[j] <= limit){//if sum(smallest+largest)ele is <= limit
                 i++;//then move to next ele
                 j--;
                 count++;//add 1 boat
             }
             else{//if only larget is smaller then 
                 j--;//move to next
                 count++;//add 1 boat
             }
         }
       }
      cout <<count;//no of boats to save those people 
    }