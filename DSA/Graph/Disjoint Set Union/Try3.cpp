#include<iostream>//Leetcode 2316  Count Unreachable Pairs of Nodes in an Undirected Graph
#include<vector>
#include<list>
#include<unordered_set>
using namespace std; 
vector<list<int>> graph;
    void constGraph( vector<vector<int>>& arr){//undirected graph
         for(int i=0;i<arr.size();i++){
            graph[arr[i][0]].push_back(arr[i][1]);//soruce and destination
            graph[arr[i][1]].push_back(arr[i][0]);//destination and source
         }
    }

  void dfs(int s,int &count,unordered_set<int> &visited){//apply normal dfs count all nodes of a connected component
    visited.insert(s);//visited
    count++;//increament count
    for(auto neighbour : graph[s]){//s's neighbour
       if(visited.find(neighbour) == visited.end()){//not visited
          dfs(neighbour,count,visited);//apply dfs
       }
    }
}
    
int main() {
   int n = 7;
   vector<vector<int>> edges = {{0,2},{0,5},{2,4},{1,6},{5,4}};
        graph.resize(n);

        constGraph(edges);//build graph
        
        vector<long long> Size;
        unordered_set<int> visited;
       for(int i=0;i<graph.size();i++){
          int count = 0;//make cont of all components
          if(visited.find(i) == visited.end()){//if not visited then 
            dfs(i,count,visited);//apply dfs
            Size.push_back(count);//store count/size of component
          }
       }
      //hint forumla and chat gpt inorder to reduce the time and space
    long long totalPairs = (long long)n * (n - 1) / 2;//total number of possible  pairs 
    for (auto s : Size) {
        totalPairs -= (long long)s * (s - 1) / 2;//substract the nodes nodes that are reachable inside a connected component
    }
    cout<<totalPairs;//prints total unreachable pairs
  
    }