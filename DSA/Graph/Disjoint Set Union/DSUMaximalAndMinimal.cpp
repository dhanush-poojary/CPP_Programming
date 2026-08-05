 #include<iostream> //DSU minmal amd maximal
 #include<vector>
 using namespace std;
 //same as path compression but includes size,minimal,maximal for each group
 int find(vector<int> &parent,int x){ //T.C O(log * N) inverse ackerman function
   if(parent[x] == x) return parent[x];
   return parent[x] = find(parent,parent[x]);//here we basically reduce the levels by directly connecting each node to group leader 
 }
 // T.C O(log * N) it represents that the number of operations to make N <= 1 by making it log2 (n)
 void Union(vector<int> &parent,vector<int> & rank,vector<int> &Size,vector<int> &maximal,vector<int> &minimal,int a,int b){ //T.C O(log * N)
     int x = find(parent,a);//find both groups parents
     int y = find(parent,b);

     if(a == b) return;//if both groups parents are same then dont do anything 

     if(rank[x] >= rank[y]){
        rank[x]++;//it increaments number of levels of x
        Size[x]+=Size[y];
        parent[y] = x;//change the parent of y to x
        maximal[x] = max(maximal[x],maximal[y]);//maximum[x] will be current maximum of both group
        minimal[x] = min(minimal[x],minimal[y]);//minimum[x] will be current minimum of both group
      }
      else{
        rank[y]++;//it increaments number of levels of y
        Size[y]+=Size[x];
        parent[x] = y;//change the parent of x to y
        maximal[y] = max(maximal[x],maximal[y]);//maximum[y] will be current maximum of both group
        minimal[y] = min(minimal[x],minimal[y]);//minimum[y] will be current minimum of both group
     }
 }
 int main(){
   int n;
   cout<<"Enter the number of elements: ";
   cin>>n;//no of vertices
   vector<int> arr(n+1);
   vector<int> rank(n+1,0);
   vector<int> maximal(n+1);
   vector<int> minimal(n+1);
   vector<int> Size(n+1,1);
   for(int i=0;i<=n;i++){//index referece to elements and elements referece to parents
   arr[i] = maximal[i] = minimal[i] = i;
   
   }
   int m;
   cout<<endl<<"Enter number of operations: ";
   cin>>m;//user input of number of operations
  while(m--){
    string str;
    cin>>str;
    if(str == "union"){
      int x,y;
      cin>>x>>y;
      Union(arr,rank,Size,maximal,minimal,x,y);//merge to clustor/group according to thier leader of group
    }
    else{
      int x;
      cin>>x;
      x = find(arr,x);
      cout<<minimal[x]<<" "<<maximal[x]<<" "<<Size[x]<<endl;//find the parent of nodeafter/before union operation
    }
  }

 }