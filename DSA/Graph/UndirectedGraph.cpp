#include<iostream>//undirectected or directed graph implmentation using adjecency list
#include<vector>
#include<list>
using namespace std;
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
}