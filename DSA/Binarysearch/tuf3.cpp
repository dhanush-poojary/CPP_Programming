#include <iostream>//Leetcode 34 Find First and Last Position of Element in Sorted Array
#include<vector>
//this code is similar to lower and upper bound finding code
using namespace std; 
int main()
{  int nums[] = {5,7,7,8,8,10};//search space
   int n = sizeof(nums)/4;//length
   int target = 8;//this is our targrt can we need to return it's first and last index in this array
  vector<int>v;
  
     int low = 0,hi = n-1;
     bool flag = false;

     while(low<=hi){
       int mid = (low+hi)/2; //finding middle 

       if(nums[mid] == target){//if mid is equal to target then we  need to check 2 conditions
//also one bool statement as to see we already got the first index or not         
         if(flag == false)
          { //this block is for finding first index
            if(nums[mid-1] == target) hi = mid-1;
//if nums[mid-1] is equal to target  then reduce from back as we need to store first index first
            else { v.push_back(mid);//if is not equal to mid-1 to target then store it's index
                 flag = true;
                 hi = n-1;//send mid to n-1 to restart for last index
            } 
        }
        else//this block is for finding last index
        {  if(nums[mid+1] == target) low = mid+1; 
//if nums[mid+1] is equal to target then reduce from front as we can get last index from that
           else{ v.push_back(mid);
               break;
            }
        }
     }
//if it is greater do as usual and less do the usual thing
     else if(nums[mid] > target) hi = mid-1;
     else low = mid+1;
   }

   if(flag == false){//if we didnt find first index itself then flag will be false by default
      v.push_back(-1);//return this 2 things
      v.push_back(-1);
   }

     for(int i=0;i<v.size();i++){//print the resultant array
        cout<<v[i]<<" ";
     }
}