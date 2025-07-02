#include<iostream>//Leetcode 1004                        Max Consecutive Ones III
#include<vector>
#include<climits>
using namespace std;
int main(){
  int arr[] = {1,1,1,0,0,0,1,1,1,1,0};//an array
  int n = 11;
  vector<int> nums(arr,arr+n);

  int  k = 2;//here the 2 flips can be performed 
        int flips = 0,i=0,j=0;
        int maxlen = INT_MIN,len= INT_MIN;

        while(j<n){
            if(nums[j] == 1) j++;//if it is 1 and move
            else { //nums[j] == 0 it is then
               if(flips<k){//flip it if no of flips are remaining
                 flips++;//we are not technically flipping but we are imagining as we are flipping
                  j++;
               }
               else{//if no of flips are not reamining

                     len = j-i;//length calculating
                     maxlen = max(maxlen,len);//checking whether it can be a maximum length
                    
                     //take i to the first 0's next index no matter if it is 0 or not
                    while(nums[i]==1) i++;
                    i++;//if it is 0 then we had already fliped it so i++    
                    j++;

               }

            }
        }
        //checking if any maximum length can be found after finishing the loop
           len = j-i;//length calculating
           maxlen = max(maxlen,len);//checking whether it can be a maximum length

        cout<< maxlen;//max length after flipping k 0's to 1's
}