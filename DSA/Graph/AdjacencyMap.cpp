#include<iostream>//weighted or unweighted  graph implmentation using adjecency map
#include<vector>
#include<unordered_map>
using namespace std;

vector<unordered_map<int,int>> graph;//created a adjecency map
int v,e;
void add_edge(int so_idx,int de_idx,int wt){
     graph[so_idx].insert({de_idx,wt});//insert destination node in the list of graph[source node,weight]
}
void display(vector<unordered_map<int,int> > graph){
   for(int i=0;i<graph.size();i++){//travel in graph's each row
       cout<<i<<" -> ";  //each row means a node
    for(auto j : graph[i]){//each row contains a list of pair which are neighbours
        cout<<"( "<<j.first<<","<<j.second<<") ,";//pair containts node and weights of edges
      }
      cout<<endl;
   }
}
int main(){
  cout<<"Enter the number of vertex: ";
  cin>>v;//no of vertex
  graph.resize(v,unordered_map<int,int> ());//we have to create graph of v size 
  cout<<"Enter the number of edge: "; 
  cin>>e; //these many edges are there
  
  while(e--){//for each edges
      int s,d,wt;
      cout<<"Enter the source and destination: ";
      cin>>s>>d;//taking input of source node and destination node
      cout<<"Enter the weight of the edge: ";
      cin>>wt;//insert weight
      add_edge(s,d,wt);//source,destination node and weight of the edge
  }
  display(graph);//print the graph
           
  
}