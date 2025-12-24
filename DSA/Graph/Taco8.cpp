#include<iostream>//Leetcode 1791   Find Center of Star Graph
#include<vector>
using namespace std;
int main(){
  vector<vector<int> > edges = {{1,2},{2,3},{4,2}};//it is a guanrateed star graph

  //if it is a star graph then any 2 edges there will be always 1 common element
  //[1,2],[2,3],[4,2]]   take [1,2] and [2,3] common is 2
  //it is bcz multiple vertices are connected to central vertex
   
        if(edges[0][0] == edges[1][0]) cout<<edges[0][0];//compare  first and first node of both
        if(edges[0][1] == edges[1][1]) cout<<edges[1][1];//compare second and second of both
        if(edges[0][0] == edges[1][1]) cout<<edges[0][0];//comapre first and second of both
        if(edges[0][1] == edges[1][0]) cout<<edges[1][0];//compare second and first of both
      
}