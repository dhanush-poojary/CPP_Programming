#include<iostream>//Kruskal's(MST) Really special sub-tree
#include<vector>//(Minimum spanning sub-tree)
#include<algorithm>//use when no of edges < no of vector //sprace graph
#define ll long long int
using namespace std;
// Enter number of vertice and edges: 4 6    //sample input ans is 12
// Enter source -> destination -> weight: 1 2 5 
// Enter source -> destination -> weight: 1 3 3
// Enter source -> destination -> weight: 4 1 6
// Enter source -> destination -> weight: 2 4 7
// Enter source -> destination -> weight: 3 2 4
// Enter source -> destination -> weight: 3 4 5
 int find(vector<int> &parent,int x){ //path compression with DSU
   if(parent[x] == x) return parent[x];
   return parent[x] = find(parent,parent[x]);//here we basically reduce the levels by directly connecting each node to group leader 
 }
 // T.C O(log * N) it represents that the number of operations to make N <= 1 by making it log2 (n)

 void Union(vector<int> &parent,vector<int> & rank,int a,int b){ //T.C O(log * N)
     int x = find(parent,a);//find both groups parents
     int y = find(parent,b);

     if(a == b) return; //if both groups parents are same then dont do anything

     if(rank[x] >= rank[y]){

        rank[x]++;//it increaments number of levels of x
        parent[y] = x;//change the parent of y to x
     }
     else{
       rank[y]++;//it increaments number of levels of y
        parent[x] = y;//change the parent of x to y
     }
 }
struct Edge{
   int s;//source
   int d;//destination
   int wt;//weight
};
bool cmp(Edge e1,Edge e2){//To sort according to weight of edge ascending wise
    return e1.wt < e2.wt;
}
ll kruskals(vector<Edge> &input,int v,int e){//T.C O(v + e * log e)
   sort(input.begin(),input.end(),cmp);//sort using coustom comparator O(e * log e)
   vector<int> parent(v+1);//O(log * e)
   vector<int> rank(v+1,1);
   for(int i=0;i<=v;i++){//mark parents as themself
    parent[i] = i;
   }
   int Edgecount = 0;//n-1 / v-1 edges should be there to form a tree
   int i=0;
   int weightsum = 0;
   while (Edgecount < v-1 && i < input.size()){//O(log * e)
       Edge curr = input[i];//as the input is sorted we will get minimum weighted edge

       int s_parent = find(parent,curr.s); //find parents of both source and destination
       int d_parent = find(parent,curr.d); 

       if(s_parent != d_parent){//then include edge because it wont form any cycle
        Union(parent,rank,curr.d,curr.s);//otherwise directly send parent of source and destination 
                                        //because it will get parent in find function too
        Edgecount++;//increament the edge
        weightsum+=curr.wt;//add weight into answer                      
       }
       i++;//even though we dont pick an edge then also we have to go to next edge
   }
   return weightsum;//return the answer
}
int main(){
     int v,e;
     cout<<"Enter number of vertice and edges: ";
     cin>>v>>e;//no of vertice and edges
     vector<Edge> graph(e);   
    for(int i=0;i<e;i++){
      cout<<"Enter source -> destination -> weight: ";
      cin>>graph[i].s>>graph[i].d>>graph[i].wt;//insertion of v e and wt
       
    }
    cout<<kruskals(graph,v,e);//prints minimum cost to reach source -> destination in a directed weighted graph
    
}