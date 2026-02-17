#include<iostream>//Leetcode  2080  Range Frequency Queries
#include<vector>//here the array does not update
#include<unordered_map>
using namespace std;

class RangeFreqQuery {
public:
   vector<unordered_map<int,int>> st;//here the each node of tree is a map to store frequency
   int n;
    RangeFreqQuery(vector<int>& arr) {
        n = arr.size();
        st.resize(4*arr.size());//worst possible no of ways to form a tree
       buildTree(arr,0,0,arr.size()-1);
    }
    void buildTree(vector<int> &arr,int i,int low,int high){
         if(low == high){//when we reach 1 node
     st[i][arr[low]] = 1;//then increament the frequency by 1
       return;
     }
     int mid = (low+high)/2;
     buildTree(arr,2*i+1,low,mid);//call left child
     buildTree(arr,2*i+2,mid+1,high);//call right child
     //merge left and right map
     for(auto p : st[2*i+1]){//left child's map
        st[i][p.first]+= p.second;//add element as well as it's frequency if already present
     }
     for(auto p : st[2*i+2]){//right child's map
        st[i][p.first]+= p.second;//add element as well as it's frequency if already present
     }

    }
    int getfreq(int i,int low,int high,int &l,int &r,int &val){
    if(l > high|| r < low) return 0;//if subset is out of bound then return 0 as we cannot get any answer
    if(low>=l && high<=r){//if subset lies inside then
       if(st[i].count(val)) return st[i][val];//only if element present in current nodes map then only return its frequency
       return 0;//if not present then return 0
    }
    int mid= (low+high)/2;
    return getfreq(2*i+1,low,mid,l,r,val) + getfreq(2*i+2,mid+1,high,l,r,val);//add the frequencies of left sub tree and right subreee
}
    int query(int left, int right, int value) {//it will return frequency of an element untill given range
       return getfreq(0,0,n-1,left,right,value);
        
    }
};
int main(){
//   ["RangeFreqQuery", "query", "query"]
// [[[12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56]], [1, 2, 4], [0, 11, 33]]
//   Output
// [null, 1, 2]
vector<int> arr = {12, 33, 4, 56, 22, 2, 34, 33, 22, 12, 34, 56};
 RangeFreqQuery  a(arr);
cout<<a.query(1,2,4)<<endl;
cout<<a.query(0,11,33);
}