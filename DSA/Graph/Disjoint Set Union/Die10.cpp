#include<iostream>//Cycle detection using DFS
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
int v,e;
void add_edge(int so_idx,int de_idx){//connecting the edges of graph undirectional 
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

bool dfs(int s,int parent,unordered_set<int> &visited){
    visited.insert(s);//make visited each node
    for(auto neighbour : graph[s]){//traverse neighbours of each node
       if(visited.find(neighbour) != visited.end() && neighbour != parent){//if we found any node which is already visited and it is not it's parent 
          return true;   //there is a cycle
       }
       if(visited.find(neighbour) == visited.end()){//if not visited 
          dfs(neighbour,s,visited);//apply dfs to its neighbour and pass parent
       }
    }
}
bool has_cycle(){//we did this bcz it can also be applicatiob for disconnected graph or connected component
unordered_set<int> visited;
   for(int i=0;i<v;i++){//traverse each node
    if(visited.find(i) == visited.end()){
       bool flag = dfs(i,-1,visited);//-1 because first node does not have parent
       if(flag) return true;//if true then it has cycle
    }
   }
   return false;//no cycle
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
  if(has_cycle())cout<<"Cycle detected!";//it detects cycle
  
}