#include<iostream>//Breadth first search/traversal(BFS)
#include<vector>
#include<list>//it is iterative traversal
#include<unordered_set>
#include<queue>
#include<climits>
using namespace std;
//this will tell the shortest path from source to that current vertex
vector<list<int> >  graph;//adjecency list
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
void bfs(int s,vector<int>&dist){
  queue<int> q;//to traverse each node
  unordered_set<int> visited;//to check any node is visited already
  dist.resize(v,INT_MAX);//fill max

  dist[s] = 0;//distence of 0'th to that will be 0
  visited.insert(s);//insert it into visited
  q.push(s);//also to queue

  while(q.size() != 0){//traverse in each node
       int temp = q.front();//take front of queue
       q.pop();
       for(auto el : graph[temp]){//traverse in temp's neighbour
         if(visited.find(el) == visited.end()){//only if it is not visited
         q.push(el);    //insert it into queue
         visited.insert(el);//make it visited
         dist[el] = dist[temp]+1;//and it's distence will be temp's distence+1
         }
  }
}
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
   vector<int> dist; 
   bfs(0,dist);//sending source vertex/node and stroing distence in array
   cout<<"\n";
   for(auto ele : dist){//printing all the distences
    cout<<ele<<" ";
   }
  }