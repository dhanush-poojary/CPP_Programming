#include<iostream>//Leetcode    785     Is Graph Bipartite?
#include<vector>
#include<queue>
using namespace std;

bool bfs(int s,vector<int> &color,int n,vector<vector<int>>& graph){//2 color problem   //bfs
        queue<int> q;
       
        q.push(s);//insert source into queue
        color[s] = 0;   //imagine 0 as Red and 1 as blue
        while(!q.empty()){
            int curr = q.front();//take out a element
            q.pop();
            for(int neighbour : graph[curr]){//traverse it's neighbours 
                if(color[neighbour] == -1){//unvisited
                    color[neighbour] = !color[curr];//change already of adjecent node to it's opposite
                    q.push(neighbour);//insert the neighbour
                }
                else if(color[neighbour] == color[curr]){//visited
                 //and neighbour and parent's color is both same which is wrong
                    return false;//cannot be partitionned
                }
            }
        }
         return true;//can be partitionned
}
int main(){
      vector<vector<int>> graph = {{1,2,3},{0,2},{0,1,3},{0,2}};
        int n = graph.size();
     vector<int> color(n,-1);//it also acts as a visited
     for(int i=0;i<n;i++){//just ignore if the neighour is empty just see wheather others can be paritionned or biparite
        if(color[i] == -1){//if not colored
        if(bfs(i,color,n,graph) == false) {//apply bfs
          cout<<"False";//cannot be partitionned
          return 0;
        }
        }
     }
     cout<<"True";//it means it can be partitionned
    }
