#include<iostream>//Leetcode 658     Find  k closest element
#include<vector>
#include<cmath>
#include<algorithm>
//we have to return k element that are closest to target it can be both upper and lower bound 
//|a - x| < |b - x|, or |a - x| == |b - x| 
// and a < b  //which ever is closer and given priority to small one
using namespace std;
int main(){
  int arr[] = {1,2,3,4,5};//need to return resultant in sorted form
  int n = sizeof(arr)/4;
  
  int k = 4, target = 3;
  vector<int>v(k);//this is resultant array

  if(target<arr[0]){//if element does not exists and it is less then array's first index
     for(int i=0;i<n;i++){//insert the first k element in to resultant array
        v[i] = arr[i];//without checking anything
     }
      for(int i=0;i<k;i++){
        cout<<v[i];
     }
     return 0;
  }
  if(target>arr[n-1]){//if element does not exists and it is greater then array's last index 
     int i = n-1;//insert the last k elements into the array without checking anything
     int j = k-1;//we are inserting in sorted form
     while(j>=0){
        v[j] = arr[i];
        i--;//it is inserting in sorted order it self
        j--;
     }
     for(int i=0;i<k;i++){
        cout<<v[i];
     }
     return 0;
  }
  int low = 0,hi = n-1;
  int idx = 0;//this is for keeping track of resultant's elements which is k
  int mid = -1;

  bool flag = false;
  while(low<=hi){//this is for finding that x's index or it's lower or upper bound index
    mid = (low+hi)/2;
    if(arr[mid] == target){
        v[idx] = arr[mid];//if it exists then insert the target
        idx++;//increament idx
        flag = true;//true is for the number is present
        break;
    }
    else if(arr[mid] > target) hi = mid-1;
    else low = mid+1;
  }
  int lb = hi,ub = low;//this is Lower and upper bound if the element is not present
  if(flag == true){//if element is present
     lb = mid-1;//then this is lb and ub
     ub = mid+1;
  }
  while(idx<k && lb>=0 && ub<=n-1){//insertig k closest elements by calculating difference of u
    int d1 = abs(arr[lb] - target);//checking difference lower bound elements
    int d2 = abs(arr[ub] - target);//checking difference upper bound elements
    if(d1<=d2){//if d1 is equal and it is lesser the lb element will be inserted
        v[idx] = arr[lb];
        lb--;
    }
    else{//if not then ub element will be inserted
        v[idx] = arr[ub];
        ub++;
    }
    idx++;
  }
  if(lb<0){//if array elements finished from front then
  while(idx<k){//insert ub elements without checking
     v[idx] = arr[ub];
     idx++;
     ub++;
  }
  }
  if(ub>n){//if array elements finished from back then
    while(idx<k){//insert lb elements without checking
     v[idx] = arr[lb];
     idx++;
     lb--;
    }
  }
   sort(v.begin(),v.end());//at the end sort the resultant 
   for(int i=0;i<k;i++){//it need to be in sorted order
        cout<<v[i];
     }
     return 0;
}