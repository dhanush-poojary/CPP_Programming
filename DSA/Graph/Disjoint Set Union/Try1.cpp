#include<iostream>//Cycle detection using BFS
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

vector<list<int>> graph;
int v,e;
void add_edge(int so_idx,int de_idx){////connecting the edges of graph undirectional 
     graph[so_idx].push_back(de_idx);
     graph[de_idx].push_back(so_idx);
}
void display(vector<list<int>> graph){//prints the graph
   for(int i=0;i<graph.size();i++){
       cout<<i<<" -> "; 
    for(auto j : graph[i]){
        cout<<j<<" ";
      }
      cout<<endl;
   }
}

bool bfs(int s,unordered_set<int> &visited){
   queue<int> q;
q.push(s);
visited.insert(s);
while(!q.empty()){//apply normal bfs
  int vertex = q.front();
  q.pop();
   for(auto neighbour : graph[vertex]){//same as dfs we have to find already visited node which not parent
       if(visited.find(neighbour) == visited.end() && neighbour != vertex){
        cout<<neighbour<<" "<<vertex;//it has cycle
          return true;//cycle detected
       }
       if(visited.find(neighbour) == visited.end()){//not visited node
         visited.insert(neighbour);//make it visited 
         q.push(neighbour);
       }
    }
}
 return false;//no cycle
}
bool has_cycle(){
unordered_set<int> visited;
  for(int i=0;i<v;i++){//for every node apply bfs
    bool flag = bfs(i,visited);
    if(flag) return true;//if true then it has cycle
  }
  return false;
}
int main(){
  cout<<"Enter the number of vertex: ";
  cin>>v;//no of vertex
     graph.resize(v,list<int> ());//we have to create graph of v size 

  cout<<"Enter the number of edges: ";
  cin>>e;//these many edges are there
  while(e--){//for each edges
      int s,d,wt;
      cout<<"Enter the source and destination: ";
      cin>>s>>d;//taking input of source node and destination node
   
      add_edge(s,d);//source,destination node and weight of the edge
  }
  display(graph);//print the graph
  if(has_cycle())cout<<"Cycle detected!";//detects cycle
  
}