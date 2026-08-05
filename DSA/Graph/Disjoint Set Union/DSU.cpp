 #include<iostream> //Disjoint set Union (DSU)
 #include<vector>
 using namespace std;
 int find(vector<int> &parent,int x){ //T.C O(1) prints the parent of x
   return parent[x];//x contains it's parent
 }
 void Union(vector<int> &parent,int a,int b){ //T.C O(N) it fill merge to group/clustor
     int x = find(parent,a);//find each groups parent
     int y = find(parent,b);
     for(int i=0;i<parent.size();i++){
         if(parent[i] == y){//then change parent of any one group to other
            parent[i] = x;
         }
     }
 }
 int main(){
   int n;
   cout<<"Enter the number of elements: ";
   cin>>n;//number of vertex

   vector<int> arr(n);
   for(int i=0;i<n;i++){//index referece to elements and elements referece to parents
     arr[i] = i;
   }
   for(int i=0;i<n;i++){
      cout<<i<<" -> "<<arr[i]<<"\t";//prints index which is element and it's parent
   }
   cout<<endl;

   cout<<find(arr,2)<<endl;//prints the parent of 2nd vertex
   Union(arr,4,1);//it will merge group of 4 and group of 1
   //it merges only the group's representative which is leader/parent

   for(int i=0;i<n;i++){
      cout<<i<<" -> "<<arr[i]<<"\t";//prints index which is element and it's parent
   }

 }