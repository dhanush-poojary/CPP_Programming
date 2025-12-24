#include<iostream>   //Leetcode     841         Keys and Rooms
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
int main(){
   //we have a adjecency list over here which is rooms
    vector<vector<int> > rooms = {{1},{2},{3}, {}};
        unordered_set<int> visited;
        queue<int> q;//create a queue to traverse in each room
        q.push(0);//because 0 is defaultly unlocked
        while(q.size()!=0){//untill queue is empty
          int i  = q.front();//take the front element
          q.pop();
          if(visited.find(i) != visited.end()) continue; //if it is visited then ignore
          visited.insert(i);//if not then make it visited
        
          //we have to visit it's neibhouring rooms using their key
          for(int key : rooms[i]){//traverse in i's all nerighbouring rooms
         if(visited.find(key) != visited.end()) continue;//only if there are not visited
               q.push(key);//insert them into queue
          }
        }
        if(visited.size() == rooms.size()) cout<<"True";//at the end if all rooms are visited then return true
        else cout<<"False";//otherwise return false
    }
