#include<iostream>//Finding the sub-Array using recursion
#include<vector>
using namespace std; //same logic as subset
void subarray(vector<int>v,int arr[],int n,int idx){
    if(idx == n){//when it comes to length 3 
        for(int i=0;i<v.size();i++){//print that sub-array
            cout<<v[i];
        }
        cout<<endl;//new line
        return;
    }
    subarray(v,arr,n,idx+1);//first call all the time 
    if(v.size() == 0 || v[v.size()-1] == arr[idx-1])//second call only when it fill files these 2 conditions
    {    v.push_back(arr[idx]);//push back that element
         subarray(v,arr,n,idx+1);//second call
    }    
}
int main(){
   //iterative method
   int arr[] = {1,2,3};//an array
   int n = 3;
//    for(int i=0;i<n;i++){//this is an iterative method to print sub-arrayss
//        for(int j=i;j<n;j++){
//           for(int k=i;k<=j;k++){
//             cout<<arr[k];
//           }
//           cout<<endl;
//        }
//    }
    vector<int>v; //recursive method
    subarray(v,arr,n,0);//function call
}