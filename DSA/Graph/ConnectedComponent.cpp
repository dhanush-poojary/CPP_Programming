#include<iostream>//Connected component  basically it counts the disconnected graph
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;
vector<list<int> >  graph;//adjecency list
int v,e;  //no of vertex and no of edges
void addedge(int so_idx,int de_idx,bool bi_direc = true){
     graph[so_idx].push_back(de_idx);
     if(bi_direc){
         graph[de_idx].push_back(so_idx);
     }
}
void dfs(int a,unordered_set<int> &visited){
  visited.insert(a);//make visited for each vertex
   for(int i : graph[a]){//travel in each vertex's neighbours
   if(visited.find(i) == visited.end()){  //if not visited then only go to it's neighbours
      dfs(i,visited);//apply dfs
   }
   }
}
//using 1 node we should visit all the nodes if some nodes are not visited then it becomes a different connected component
int connect(vector<list<int> >  graph){
  int count = 0;
  unordered_set<int> visited;
  for(int i=0;i<v;i++){//travel in each vertex
   if(visited.find(i) == visited.end()){//if not present in visited then 
    count++;//increament the counter
         dfs(i,visited);//apply dfs in i'th vertex so that whole graph is cover which is connected to this vertex
   }
    }
    return count;//return the no of components
}
int main(){
  cout<<"Enter the number of vertex: ";
  cin>>v;
     graph.resize(v,list<int> ());//we have to create graph of v size

  cout<<"Enter the number of edges: ";
  cin>>e;//these many edges are there
 
  while(e--){//for each edges
    int s,d;
    cout<<"Enter source -> destination: ";
    cin>>s>>d;//taking input of source node and destination node
    addedge(s,d,false);//add false to make it a directional  graph otherwise it will be undirectional
  }
  cout<<connect(graph);//prints the no of components
}