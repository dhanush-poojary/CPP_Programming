#include<iostream>//Leetcode    46         Permutations
#include<vector>//integer permutation
using namespace std;
vector<vector<int>> v;
  void permu(vector<int> &arr,int i){
       if(i == arr.size()-1){//we need to end recursion when i reach 2nd last element
         v.push_back(arr);//insert that permutation into resultant v
         return;
       }
       for(int idx = i;idx<arr.size();idx++){//for all array elements
        swap(arr[idx],arr[i]);//swap the 1st element of permutation with idx'th element instead creating multiple array's
        
        permu(arr,i+1);//make a call for next element

        swap(arr[idx],arr[i]);//applying the state of backtracking changing the changes to original form

       }
  }
int main(){
 vector<int> arr = {1,2,3};//test case
       permu(arr,0);
     
       for(int i=0;i<v.size();i++){//for printing the resultant permutations 
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j];
        }
        cout<<endl;
       }  
           
}