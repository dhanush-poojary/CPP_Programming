#include<iostream>//Dijkstra's algorithm     Shortest path
#include<vector>
#include<list>
#include<unordered_set>
#include<unordered_map>
#include<queue>
#include<climits>
using namespace std;

vector<list<pair<int,int>> >  graph;//adjecency list
int v,e;  //no of vertex and no of edges
void addedge(int so_idx,int de_idx,int wt,bool bi_direc = true){//undirected graph construction
     graph[so_idx].push_back({de_idx,wt});
     if(bi_direc){
         graph[de_idx].push_back({so_idx,wt});
     }
}
unordered_map<int,int> dijkstra(int s,int n){//T.C O((V + E) log V)
    priority_queue<pair<int,int> , vector<pair<int,int> >, greater<pair<int,int> > > pq;//we need it as sorted weights
    unordered_set<int> visited;
    vector<int> via(n+1);//it will store the node where we come from node
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){//T.C O(V)
      mp[i] = INT_MAX;  //mark infinity in the distance
    }
    pq.push({0,s});//{wt,node/vertex}
    mp[s] = 0;//source nodes distance is 0

    while(!pq.empty()){//T.C O(V+E)
       pair<int,int> curr = pq.top();
      if(visited.find(curr.second) != visited.end()){//if visited already
         pq.pop();//pop it
         continue;//dont to anything
      }  
      visited.insert(curr.second);//make it visited
      pq.pop();//pop it
      for(auto neighbour : graph[curr.second]){//in graph {node/vertex,wt}   //traverse it's neighbours

    if(visited.find(neighbour.first) == visited.end() && mp[neighbour.first] > mp[curr.second]+neighbour.second){//if old weight is larger then present new weight+dist then update
          pq.push({mp[curr.second]+neighbour.second,neighbour.first});//T.C O(log v)//also insert it into pq

          via[neighbour.first] = curr.second;//update the via array
          mp[neighbour.first] = mp[curr.second]+neighbour.second;//new distance which is shortest
        }
      }
     
    }
    return mp;//return tracing path
}

int main(){
  cout<<"Enter the number of vertex: ";
  cin>>v;
     graph.resize(v,list<pair<int,int>> ());//we have to create graph of v size

  cout<<"Enter the number of edges: ";
  cin>>e;//these many edges are there
 
  while(e--){//for each edges
    int s,d,wt;
    cout<<"Enter source -> destination - > weight: ";
    cin>>s>>d>>wt;//taking input of source node and destination node
    addedge(s,d,wt);
  }
  int s,d;
  cout<<endl<<"Enter source Node and Destination Node: ";
  cin>>s>>d;//source and destination for shortest path
  unordered_map<int,int> sp = dijkstra(s,v);
  
  cout<<sp[d];//prints shortest path

//  for(auto p : sp){//we can also trace the path by traversing in map
//   cout<<endl<<p.first<<" "<<p.second;
//  }
}