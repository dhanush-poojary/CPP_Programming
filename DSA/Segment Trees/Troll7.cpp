#include<iostream>//Leetcode   307 Range Sum Query - Mutable
#include<vector>
using namespace std;//here the array is modified/updated
class NumArray {
public:
   //here the array will update 
    vector<int> st;
    int n;
    NumArray(vector<int>& nums) {
          n = nums.size();
         st.resize(4*n);//worst possible no of ways to form a tree
         buildTree(nums,0,0,n-1);
    }
    void buildTree(vector<int>&arr,int i,int low,int high){
        if(low == high){//when 1 node is left then 
             st[i] = arr[low];//just insert any low /high into i
             return;
        }
        int mid = (low+high)/2;
        buildTree(arr,2*i+1,low,mid);//call left
        buildTree(arr,2*i+2,mid+1,high);//call right
        st[i] = st[2*i+1] + st[2*i+2];//insert left + right child into parent i
    }
    int getSum(int i,int low,int high,int &l,int &r){
    if(l > high|| r < low) return 0;//subset out of range return 0
    if(low>=l && high<=r){//return sum bcz we reached our desired index
       return st[i];
    }
    int mid = (low+high)/2;
    return getSum(2*i+1,low,mid,l,r) + getSum(2*i+2,mid+1,high,l,r);//add the sum of left and right child to get total sum
}   
 void updateST(int i,int low,int high,int& index,int& val){//reconstruct the tree ofter updating an element
    if(low == high){//when we reached that index
        st[i] = val;//update it's value
        return;
    }
      int mid = (low+high)/2;
      if(index <= mid) updateST(2*i+1,low,mid,index,val);//if index lies before mid then call only left child
      else  updateST(2*i+2,mid+1,high,index,val);//if it lies after mid then call only right child
      st[i] = st[2*i+1] + st[2*i+2];//updating the sum of entire try while coming back from updated Node
 }
    void update(int index, int val) {//updates the element of an index
        updateST(0,0,n-1,index,val);
    }
    
    int sumRange(int left, int right) {//returns the sum between given range
         return getSum(0,0,n-1,left,right);
    }
};
int main(){
//   ["NumArray", "sumRange", "update", "sumRange"]
// [[[1, 3, 5,6,8]], [0, 2], [1, 2], [0, 2]]
// Output
// [null, 15, null, 17]
vector<int> arr = {1, 3, 5,6,8};
NumArray a(arr);
cout<<a.sumRange(0,3)<<endl;
a.update(1,5); 
cout<<a.sumRange(0,3);

}
