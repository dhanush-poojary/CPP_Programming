 #include<iostream> //Path compression
 #include<vector>
 using namespace std;
 int find(vector<int> &parent,int x){ //T.C O(log * N) inverse ackerman function
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
 int main(){
   int n;
   cout<<"Enter the number of elements: ";
   cin>>n;//no of vertices

   vector<int> arr(n);
   vector<int> rank(n,0);
   for(int i=0;i<n;i++){//index referece to elements and elements referece to parents
   arr[i] = i;
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
      Union(arr,rank,x,y);//merge to clustor/group according to thier leader of group
    }
    else{
      int x;
      cin>>x;
      cout<<find(arr,x);//find the parent of node after/before union operation
    }
  }

 }