#include<iostream>//Topological sort
#include<list>//topological sort is used for dependency resolution
#include<vector>//it can sort only DAG
#include<queue>
#include<unordered_set>
using namespace std;
vector<list<int> > graph;
// 4 v
// 4 e
// 0 1
// 0 2
// 1 3
// 2 3
//output
//0 1 2 3 
int v;
void edge(int s,int d,bool dir = true){//dependency graph /DAG
    graph[s].push_back(d);   //directed graph
   if(dir == true){
    graph[d].push_back(s);
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
void topo(){//kahn's algorithm    //multisource bfs
     vector<int> indegree(v,0);
     for(int i=0;i<v;i++){ //first mark the indegree of all the nodes
      for(int neighbour : graph[i]){
          indegree[neighbour]++;       
      }
     }
   queue<int> q;
   unordered_set<int> visited;
  for(int i=0;i<v;i++){       
    if(indegree[i] == 0){//insert the nodes in queue whoose indegree is 0
      q.push(i);
      visited.insert(i);//also make it visited
    }
  } 
   while(!q.empty()){  //start bfs
      int vertex = q.front();
      q.pop();
      cout<<vertex<<" ";//take the element and visit
      for(int neighbour : graph[vertex]){//traverse in neighbour
        if(visited.find(neighbour) == visited.end()){//if not visited
           indegree[neighbour]--; // reduce indegree by 1
           if(indegree[neighbour] == 0){//when it becomes 0
               q.push(neighbour);//push it into queue
               visited.insert(neighbour);//also make it visited
           }

        }//at the end our DAG will be printed in sorted order
      }
   }

}
int main(){
   cin>>v;//no of vertex
   int e;
   cin>>e;//no of edges
   graph.resize(v, list<int> ());
   while(e--){
     int x,y;
     cin>>x>>y;//source and destination
     edge(x,y,false);//directed graph
   }  
   display(graph);    //prints graph not in sorted order
   topo(); ////prints graph in sorted order
   
}