 #include<iostream> //Union by size
 #include<vector>
 using namespace std;
 int find(vector<int> &parent,int x){//T.C O(N) recursively find parent 
   if(parent[x] == x) return parent[x];
   return find(parent,parent[x]);
 }
 void Union(vector<int> &parent,vector<int> &Size,int a,int b){
     int x = find(parent,a);//find both groups parents
     int y = find(parent,b);
     if(a == b) return;
     if(Size[y] <= Size[x]){//who groups size is larger then merge the smaller group to it
        Size[x]+=Size[y];//also increase the size of leader
        parent[y] = x;//change parent of smaller group
     }
     else{//merge 2nd group as it's size is larger then first 
      Size[y]+=Size[x];
        parent[x] = y;
     }
 }
  int main(){
   int n;
   cout<<"Enter the number of elements: ";
   cin>>n;//one of vertex
   vector<int> arr(n);
   vector<int> Size(n,1);
   for(int i=0;i<n;i++){//index referece to elements and elements referece to parents
   arr[i] = i;
   }
   int m;
   cout<<endl<<"Enter number of operations: ";
   cin>>m;//user inputs of no of operations union and find
  while(m--){
    string str;
    cin>>str;
    if(str == "union"){
      int x,y;
      cin>>x>>y;
      Union(arr,Size,x,y);//merge 2 groups/clustor
    }
    else{//to find the parent of x vertex
      int x;
      cin>>x;
      cout<<find(arr,x);
    }
  }

 }