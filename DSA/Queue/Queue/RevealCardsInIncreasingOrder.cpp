#include<iostream>//Leetcode     950      Reveal Cards In Increasing Order
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
   int v[] = {17,13,11,2,3,5,7};//an array of deck 
   int n = sizeof(v)/sizeof(v[0]);
   vector<int> deck(v,v+n);

        vector<int> arr(n);
        sort(deck.begin(),deck.end());//firstly we need to sort the deck array
       queue<int> q;
       for(int i=0;i<n;i++){//after that insert the index into the queue
            q.push(i);
       }

       for(int i=0;i<n;i++){
           int idx = q.front();//take the front()
           q.pop();//pop it
           q.push(q.front());//take the current front then push it to back of queue
           q.pop();//then pop it

           arr[idx] = deck[i];//insert at idx'th index of element deck[i]
       }
    for(int ele : arr){//printing
       cout<<ele<<" ";
    }
}