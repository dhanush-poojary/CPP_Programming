#include<iostream>//Leetcode   303 Range Sum Query - Immutable
#include<vector>
using namespace std;
class NumArray {
public:
  //here the array does not update so we can just use prefix sum instead of Segment Tree
    vector<int> arr;
    int n;
    NumArray(vector<int>& nums) {
        arr = nums;
        n = arr.size();
        for(int i=1;i<n;i++){ //T.C  O(N) //taking prefix sum or running sum of an array
            arr[i]+=arr[i-1];
        }
    }
    
    int sumRange(int left, int right) {//T>C O(1)
        if(left == 0) return arr[right];  //if so then left-1 can go out of bound
          return (arr[right] - arr[left-1]); //if >=1 left-1 bcz dont include sum till left-1
    }
};
int main(){
//   ["NumArray", "sumRange", "sumRange", "sumRange"]
// [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
// Output
// [null, 1, -1, -3]
vector<int> arr = {-2, 0, 3, -5, 2, -1};
  NumArray a(arr);
 cout<<a.sumRange(0,2)<<endl;
  cout<<a.sumRange(2,5)<<endl;
  cout<<a.sumRange(0,5)<<endl;
}