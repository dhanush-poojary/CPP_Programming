#include<iostream>//Leetciode 207  Course Schedule
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
using namespace std;

vector<list<int>> graph;
    void constGraph( vector<vector<int>>& arr){//construct graph in same order
         for(int i=0;i<arr.size();i++){
            graph[arr[i][0]].push_back(arr[i][1]);//soruce and destination
         }
    }
bool topo(int v){ //kahn's algorithm    //multisource bfs
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
      if(v - visited.size() == 0) return true;//if all nodes utilized then return true;
      else  return false;//otherwise return false


}
   int main(){
    int numCourses = 2 ;
     vector<vector<int>> prerequisites = {{1,0},{0,1}};

        graph.resize(numCourses,list<int> ());

        constGraph(prerequisites);//Builds an graph from matrix
        
        if(topo(numCourses))cout<<"True";//prints result
          else cout<<"False";
   
         }