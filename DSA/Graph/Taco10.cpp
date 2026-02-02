#include<iostream>//Leetcode     133          Clone Graph
#include<vector>
#include<unordered_set>
#include<queue>
using namespace std;
// 0-> 1,2,
// 1-> 0,3,
// 2-> 0,3,
// 3-> 1,2,
class Node {//this is adujlist implementation
  public:
  int val;
  vector<Node*> neighbors;
  Node() {
    val = 0;
    neighbors = vector<Node*>();//each node consits value and it's neighbours
  }
    Node(int _val) {
      val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
      val = _val;
      neighbors = _neighbors;
    }
};

vector<Node*>  graph;
int v,e;

 vector<Node*> exists;//it acts as visited array

   void dfs(Node* node,Node* clone){

       for(auto v : node->neighbors){//here we have to connect edges and create vertex if not created
       if(exists[v->val] == NULL){//if vertex is not created
          Node* temp = new Node(v->val);//create it
          exists[temp->val] = temp;//insert to visited  array or make it visited
         clone->neighbors.push_back(temp);//connect it to that clone nodes as a neighbour
         dfs(v,temp);//apply dfs for rest of the nodes
       }
       else{//if it is created
         clone->neighbors.push_back(exists[v->val]);//just connect the node as a neighbour
       }

       }
   }
   void display(vector<Node*>  graph){//it will print the nodes of original graph 
        for(int i=0;i<v;i++){
         cout<<i<<"-> ";
           for(auto el : graph[i]->neighbors){
             cout<<el->val<<",";
           }
           cout<<endl;
        }
   }
    Node* cloneGraph(Node* node) {//given default by leetcode
         if(node == NULL) return NULL;//if node is empty then return null

         Node* clone  = new Node(node->val);//create a clone node which acts as a head of new graph
         exists.resize(110,NULL);
         exists[clone->val] = clone;//make it visited

         dfs(node,clone);//apply dfs
         return clone;

    }
void clone_display(Node* node){//it will display the clonned graph using bfs
    if (node == NULL) return;

    unordered_set<int> visited;
    queue<Node*> q;

    q.push(node);
    visited.insert(node->val);

    while (!q.empty()) {//for every node
        Node* curr = q.front();
        q.pop();

        cout << curr->val << " -> ";//visit / print it vertex
        for (auto neigh : curr->neighbors) {//and then visit it's neighbours
            cout << neigh->val << ",";
            if (visited.find(neigh->val) == visited.end()) {//make it visited if not already visited
                visited.insert(neigh->val);
                q.push(neigh);
            }
        }
        cout << endl;
    }
}

  int main(){
  cout<<"Enter the number of vertex: ";
  cin>>v;//inserting no of vertices
     graph.resize(v);
  for(int i=0;i<v;i++){
     graph[i] = new Node(i);//created all nodes for each index
  }

  for(auto x : graph){//inserting the nodes neighbours for all nodes
    int n;
    cout<<"Enter number of neighbour of "<<x->val<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
      int t;
      cin>>t;
     x->neighbors.push_back(graph[t]);//connecting for each node graph[t] as a neighbour
    }
  }
  display(graph);//prints the original graph

  Node* node = graph[0];
   Node* newgraph = cloneGraph(node);//it will make a copy of a original graph
   cout<<endl;
  clone_display(newgraph);//for displaying the clone graph

}