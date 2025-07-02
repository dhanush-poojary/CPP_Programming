#include<iostream>//Leetcode 713                     Subarray Product Less Than K
#include<climits>
#include<vector>
using namespace std;
int main(){
  int arr[] = {10,5,2,6};//array
  int k = 100; //subarray's product must be strictly less then this number

  int n = 4; 
  if(k <= 1){//if k is already less then 1 that is impossible to find subarrays bcz nums contains >=1 elements
     cout<<0;
     return 0;
   }
   vector<int> nums(arr,arr+n);
        int count = 0,i=0,j=0;
        int product = 1;//it will be multiplied with only first element of nums
        while(j<n){
            product *= nums[j];
            while(product >= k){//if product goes beyong k then count the no sub arrays
                  count += (j-i);//calculating no of sub arrays not the length

                   product /= nums[i];//removing the i'th index number from product
                   i++;
               }
              j++;
            }
             while(i<n){//this is for calculating the left out sub array's after j is out of the loop
                  count += (j-i);//calculating no of sub arrays not the length

                   product /= nums[i];//removing the i'th index number from product
                   i++;
               }
        cout<< count;//prints no of sub arrays

}