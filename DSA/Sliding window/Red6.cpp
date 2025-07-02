#include<iostream>//Leetcode 1493   Longest Subarray of 1's After Deleting One Element
#include<vector>
#include<climits>
using namespace std;
int main()
{    int arr[] = {0,1,1,1,0,1,1,0,1};//an arrays
     int n = 9; 
     vector<int> nums(arr,arr+n);

        int k =1; //compulsory to delete atleast 1 element but we are not deleting instead we are imagining as we deleted
        int flips = 0,i=0,j=0; 
        int maxlen = INT_MIN,len= INT_MIN;
        while(j<n){
            if(nums[j] == 1) j++;
            else { //nums[j] == 0
               if(flips<k){
                 flips++;//we are not technically flipping but we are imagining as we are flipping
                  j++;
               }
               else{
                    len = j-i;
                    maxlen = max(maxlen,len);
                    //take i to the first 0's next index no matter if it is 0 or not
                    while(nums[i]==1) i++;
                    i++;//if it is 0 then we had already fliped it so i++    
                    j++;

               }

            }
        }
        //checking if any maximum length can be found after finishing the loop
           len = j-i;
           maxlen = max(maxlen,len);
        cout<< maxlen-1;//-1 is for 1 deleted zero but in above code it is considered as flipped
      }