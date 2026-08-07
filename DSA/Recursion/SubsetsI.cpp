#include <iostream>//Leetcode 78         Subsets-1
#include<vector>
using namespace std;  //same logic as subset
void subset(vector<int>v,int arr[],int idx,int n){
    if(idx == n){//when idx reaches n then print the subsets
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;//new line
        return;
    }
    subset(v,arr,idx+1,n);//first call
     v.push_back(arr[idx]);//after first call push_back arr[idx] 1 number to v array
    subset(v,arr,idx+1,n);//second call

}
int main()
{  int arr[] = {1,2,3};//an array 
   int n = 3;

   vector<int> v;
    subset(v,arr,0,n);//function call
   
}