#include<iostream>//Leetcode 238                      Product of Array Except Self
#include<vector>
//here we need to take prefix product of array but not to include element itself's sum while it's time
using namespace std;
int main(){
  int arr[] = {1,2,3,4};   // 24,12,8,6
  int n = 4;
  vector<int> nums(arr,arr+n);
      //this is a reduced method from using 2 extra array
          vector<int> prefix(n);
          int p = nums[0];
          prefix[0] = 1;
          for(int i=1;i<n;i++)
          {   prefix[i] = p; //taking prefix product 
            p*= nums[i];
          }
          p = nums[n-1];
          for(int i=n-2;i>=0;i--)
            {   prefix[i]*= p;//taking suffix product at the same time multiplyig the prefix sum's answer with current suffix sum
               p*= nums[i];
          }
      for(int ele : prefix){//printing the answer
          cout<<ele<<" ";
      }

}