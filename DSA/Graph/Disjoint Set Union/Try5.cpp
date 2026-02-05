#include<iostream>//Leetcode    1584 Min Cost to Connect All Points
#include<vector>//Kruskal's(MST) Really special sub-tree
#include<algorithm>//(Minimum spanning sub-tree)
using namespace std;
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
   int dist;//dist
};
bool cmp(Edge e1,Edge e2){//To sort according to weight of edge ascending wise
    return e1.dist < e2.dist;
}
int kruskals(vector<Edge> &input,int v,int e){//T.C O(v + e * log e)
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
        weightsum+=curr.dist;//add distance into answer                      
       }
       i++;//even though we dont pick an edge then also we have to go to next edge
   }
   return weightsum;//return the answer
}
 int manhattan_distance(vector<int> &x,vector<int> y){
     return abs(x[0] - y[0]) + abs(x[1] - y[1]);//formula for manhatten distance
 }
  int main() {
    vector<vector<int>>  points = {{0,0},{2,2},{3,10},{5,2},{7,0}};

     int n = points.size();
      vector<Edge> v;


for (int i = 0; i < n; i++) {//making a connected graph 
    for (int j = i + 1; j < n; j++) {
        Edge e;  //in here we are basically making pair with each and every elements
        e.s = i;
        e.d = j;
        e.dist = manhattan_distance(points[i], points[j]);//also finding distance between each pair of source and destination
        v.push_back(e);//add edge
    }
}

    cout<<kruskals(v,n,n);//prints the answer to reach destination with minimum manhatten distance
     
    }