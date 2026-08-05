 #include<iostream>//Cycle Detection using DSU
 #include<vector>
 using namespace std;
int find(vector<int> &parent,int x){//T.C O(N) recursively find parent 
   if(parent[x] == x) return parent[x];
   return find(parent,parent[x]);
 }
bool Union(vector<int> &parent,vector<int> &Size,int a,int b){
     int x = find(parent,a);//find both groups parents
     int y = find(parent,b);

     if(a == b) return true;//if we try to make union of 2 nodes which are already of same group then there will be a cycle
     
     if(Size[y] <= Size[x]){//who groups size is larger then merge the smaller group to it
        Size[x]+=Size[y];//also increase the size of leader
        parent[y] = x;//change parent of smaller group
     }
     else{//merge 2nd group as it's size is larger then first 
      Size[y]+=Size[x];
        parent[x] = y;
     }
     return false;//if not same group then no cycle
 }
  int main(){
   int n;
   cout<<"Enter the number of elements: ";
   cin>>n;//no of vertices 
   vector<int> arr(n);
   vector<int> Size(n,1);
   for(int i=0;i<n;i++){//index referece to elements and elements referece to parents
   arr[i] = i;
   }
   int m;
   cout<<endl<<"Enter number of operations: ";
   cin>>m;//user input of no of operation
  while(m--){//only union
      int x,y;
      cin>>x>>y;
     bool flag = Union(arr,Size,x,y);
     if(flag){//prints cycle is present or not
      cout<<"Cycle detected!";
      exit(0);
     }
  }

 }