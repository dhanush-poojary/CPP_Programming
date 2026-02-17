#include<iostream>//Maximum in Given range Segment Tree   T.C O(Q(log N)) //imutable
#include<vector>//here the array does not changes
#include<climits>
using namespace std;
vector<int> st;
void buildTree(vector<int>&arr,int i,int low,int high){//T.C O(N) same as S.C 
  if(low == high){//when array is left of 1 size  //base
      st[i] = arr[low];//insert hi or low it is same
      return;
  }   
     int mid = (low+high)/2;//Divide the array into 2 parts
     buildTree(arr,2*i+1,low,mid);//call left child
     buildTree(arr,2*i+2,mid+1,high);//call right child
     st[i] = max(st[2*i+1],st[2*i+2]); //i is the parent 
}
int getMax(int i,int low,int high,int &l,int &r){//T.C O(Log n) 
  if(l > high || r < low) return INT_MIN;//if l and r reaminds out side of subset
     if(low >= l && high <= r)//l,r is a subset of low,high ..i.e [l,r] C [low,high]
     return st[i];     
     int mid = (low+high)/2;//Divide the array into 2 parts
     int leftMax = getMax(2*i+1,low,mid,l,r);//call left child
     int rightMax = getMax(2*i+2,mid+1,high,l,r);//call right child
     return max(leftMax,rightMax);//return larger maximum
}
int main(){
  vector<int> arr = {1,4,2,8,6,4,9,3}; //[0,7]
   int n = arr.size();
   st.resize(4*n);
   buildTree(arr,0,0,n-1);//it will construct a segment tree
  int left,right;
  cout<<"Enter range :";
  cin>>left>>right;
  cout<<getMax(0,0,n-1,left,right);
 
}