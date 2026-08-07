#include <iostream>//Leetcode 39                 Combination Sum
#include<vector>
using namespace std; 
void combination(vector<int>v,int arr[],int n,int target,int idx){
    if(target == 0){//only when the target becomes zero print the combinations
         for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
         }
         cout<<endl;//newline
         return;
    }
    if(target<0) return;//if it is negetive number then it is wrong combination
     for(int i=idx;i<n;i++){//i = idx is for skiping 2 while we are on 3 and 2 3 when we are on 5
       v.push_back(arr[i]);//first add it
       combination(v,arr,n,target-arr[i],i);//target will be getting less upon adding an element or coin
       v.pop_back();//then remove it
     }
}
int main()
{   int arr[] = {2,3,5};//an array of coins
    int n = 3;

    vector<int>v;
    int target = 8;//this is the combinations sum
   combination(v,arr,n,8,0);
}