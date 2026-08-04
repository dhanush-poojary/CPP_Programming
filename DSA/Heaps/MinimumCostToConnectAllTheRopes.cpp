#include<iostream>//Minimum cost to connect all the ropes
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] =  {2,7,4,1,8};//an array
    int n = 5;
    vector<int> nums(arr,arr+n);

        priority_queue<int, vector<int>,greater<int> > pq;
        for(int i=0;i<nums.size();i++){
              pq.push(nums[i]);//insert all elements of array into the min heap
        }
      int cost = 0;  
        while(pq.size() != 1){//do it untill 1 element is left
          int x = pq.top();//retrive smallest element 1
          pq.pop();
          int y = pq.top();//retrive smallest element 2
            pq.pop();

           cost+= x+y;//add the cost 
           pq.push(x+y); //also push it 
        }

        cout<<cost;//return cost
     
}