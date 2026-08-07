#include<iostream>//To print the sub sequences of a gives array
#include<vector>
using namespace std; 
void subset(vector<int>v,int arr[],int idx,int n,int k){
    if(idx == n){//when it becomes  
        if(v.size() == k)//print the length 3
       { for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;//new line
     }
        return;
    }
    subset(v,arr,idx+1,n,k);//first call
     v.push_back(arr[idx]);//after the first call push_back arr[idx]
    subset(v,arr,idx+1,n,k);//second call
}
int main()
{  int arr[] = {1,2,3,4};//array
   int n = 4;

   vector<int> v;
   int k = 3;//sub sequence of length 3
    subset(v,arr,0,n,k);//function call
}