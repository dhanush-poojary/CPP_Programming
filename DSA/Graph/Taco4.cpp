#include<iostream>//depth first search/traversal(DFS)
#include<vector>//it is recursive traversal
#include<list>
#include<unordered_set>
using namespace std;
//in this we check if any path exists between any to vertex

vector<list<int> >  graph;
unordered_set<int> visited;
int v,e;
void addedge(int so_idx,int de_idx,bool bi_direc = true){
     graph[so_idx].push_back(de_idx);//insert destination node in the list of graph[source node]
     if(bi_direc){//if it is undirectional graph then do it for opposite destination to source
         graph[de_idx].push_back(so_idx);
     }
}
void display(vector<list<int> >  graph){
     for(int i=0;i<graph.size();i++){//travel in graph's each row
      cout<<i<<"-> ";//each row means a node
        for(auto el : graph[i]){//each row contains a list of integer which are neighbours
          cout<<el<<",";//prints neighbours
        }
        cout<<endl;
     }
}
bool dfs(int n,int v){//Time complexity will be O(V+E) bcz we traverl through all vertex and edge
                             //space complexity is bases on recursion
  visited.insert(n);//insert each node n in visited              
   for(int i : graph[n]){//traverse in n'th neighbours to find path
    if(i == v) return true;//if we found the destination among neighbours then return true
     if(visited.find(i) ==  visited.end()){//if not then check wheather it is visited or not
     bool path = dfs(i,v);//if not then apply dfs on i,v
     if(path == true) return true;//found a path then return true
     }
   }
   return false;//not found any path after all dfs 
}
int main(){
    cout<<"Enter the number of vertex: ";
  cin>>v;
     graph.resize(v,list<int> ());//we have to create graph of v size and list is dynamically sized later

  cout<<"Enter the number of edges: ";
  cin>>e;//these many edges are there

  while(e--){//for each edges
    int s,d;
    cout<<"Enter source -> destination: ";
    cin>>s>>d;//taking input of source node and destination node
    addedge(s,d);//add false to make it a directional  graph otherwise it will be undirectional
  }
  display(graph);//it will display the graph
 
  cout<<dfs(0,4);//pass the source and destination node to find path
}