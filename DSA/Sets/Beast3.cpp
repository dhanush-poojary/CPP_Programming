#include<iostream>//Leetcode 2442 Count Number of Distinct Integers After Reverse Operations
#include<vector>
#include<unordered_set>
using namespace std;
int reverse(int n){//this function will reverse the given digits if only 1 digit then return it as it is
     int rev = 0;
     while(n!=0){
         int rem = n%10;
          rev = rev*10 + rem;
          n = n/10;
     }
     return rev;
 }
int main(){
  int arr[] = {1,13,10,12,31};//an array of integers
  int n = sizeof(arr)/4;

  //method: 2 using only 1 loop
  vector<int> nums(arr,arr+n);
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){//traverse in nums
             int rev = reverse(nums[i]);//take each element's reverse 
             s.insert(rev);//and insert the reverse as well as 
             s.insert(nums[i]);//original digit
             //so that all the duplicates are terminated
             }   
         cout<<s.size();//after that only unique values will be left
    
}
//Method: 1 using 2 loops
//         int n = nums.size();
//         for(int i=0;i<n;i++){//traverse in nums
//              int rev = reverse(nums[i]);//take reverse of each element
//              nums.push_back(rev);//then push it back into nums
//              }   
        
//         unordered_set<int>s;
//         for(int i=0;i<nums.size();i++) s.insert(nums[i]);//and insert each and every element of nums into set 
//         return s.size();//after that only the unique digits will be left 
//     }
