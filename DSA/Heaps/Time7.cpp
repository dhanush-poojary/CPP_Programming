#include<iostream>//Leetcode 658   Find K Closest Elements solved using Heap/ priority queue
#include<queue>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};//an array
    int k = 4, x = 3;//k is number of element and x is the target kind of element 
    //x may or may not be present in array
    int n = 5;
    vector<int> nums(arr,arr+n);
   
       priority_queue<pair<int,int> > pq;
        for(int i=0;i<nums.size();i++){
             pq.push({abs(arr[i]-x),arr[i]});//insert each element and it's distance from x
             if(pq.size()>k) pq.pop();//if size gets k+1 then remove the top
//it is because except k+1'th element remaining's distance is less then k which we wanted
        }
        vector<int> ans;
        while(pq.size() !=0){//untill heap gets empty
              ans.push_back(pq.top().second);//insert .secon which is the element
              pq.pop();//and pop it
        }
        sort(ans.begin(),ans.end());//sort the array to take elements in ascending order
   

      for(int ele: ans){//printing 
        cout<<ele<<" ";
      }
}