#include<iostream>//Depth first search/traversal(DFS)
#include<vector>//it is recursive traversal
#include<list>
#include<unordered_set>
using namespace std;
//in this we see all different path exists between any 2 vertex
vector<list<int> >  graph;
unordered_set<int> visited;
int v,e;

vector<vector<int> > result;
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
void dfs(int n,int v,vector<int>& arr){//Time complexity will be O(V+E) bcz we traverl through all vertex and edge
                                       //space complexity is bases on recursion
   if(n == v){//found the destination node                    
    arr.push_back(n);//insert n too into arr
    result.push_back(arr);//push it in resultant
    arr.pop_back();//also revert the changes as we need to find other paths
    return ;
  }
   visited.insert(n);//insert n into visited array              
   arr.push_back(n);//also push back n into arr
   for(int i : graph[n]){//travel in n's neighbours
     if(visited.find(i) ==  visited.end()){//if not visited then only
     dfs(i,v,arr);//apply dfs on it's neighbour i
    }
  }
  arr.pop_back();//also revert the changes as we need to find other paths even if we did not get path
    visited.erase(n);//remove it from visited bcz we did not find any path from n
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
 
  vector<int> arr;
  result.clear();
  dfs(0,3,arr);//source and destination node to find all paths

  cout<<endl<<"All path from "<<0<<" to "<<3<<endl;
  for(int i=0;i<result.size();i++){//prints the path between 0 to 3
    for(int j=0;j<result[i].size();j++){
          cout<<result[i][j]<<"->";
    }
    cout<<endl;
  }
}