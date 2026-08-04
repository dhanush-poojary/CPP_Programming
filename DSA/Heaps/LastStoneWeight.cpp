#include<iostream>//Leetcode   1046          Last Stone Weight
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
    int arr[] =  {2,7,4,1,8,1};//an array
    int n = 6;
    vector<int> stones(arr,arr+n);
    //method 1: using max heap or priority queue

        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){//insert all elements of array into the max heap
              pq.push(stones[i]);
        }
        while(pq.size() > 1){//do it untill 1 element is left
            int y = pq.top();//retrive larget element 1
            pq.pop();
            int x = pq.top();//retrive larget element 2
            pq.pop();
            //dont do anything if x == y 
            if(x != y){//otherwise calculate distance
                int dis = abs(x-y);
                pq.push(dis);//and push it back into max heap
            }
        }
        if(pq.size() < 1) cout<<"0";//if 0 element is present in heap  return 0
        else cout<<pq.top();//otherwise return top  element of heap 
 
 //method 2: using array T.C O(N LOG N)
        // while(stones.size() > 1){
        //     sort(stones.begin(),stones.end());//sort the array each time
        //     int y = stones[stones.size()-1];//larget element 1
        //     stones.pop_back();
        //     int x = stones[stones.size()-1];//larget element 2
        //      stones.pop_back();
      //dont do anything if x == y 
        //     if(x != y){//otherwise calculate distance
        //         int dis = abs(x-y);
        //         stones.push_back(dis);//and push it back into array
        //     }
        // }
        // if(stones.size() == 1) return stones[0]; //if 1 element present then return 1st elenment
        // return 0;//otherwise return  0
    
}