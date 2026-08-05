#include<iostream>//       Leetcode       934           Shortest Bridge
#include<queue>
#include<vector>//multisource bfs
using namespace std;
queue<pair<int,int>>q;

void dfs(vector<vector<int>>& arr,int i,int j){//this is to mark the first comming island to visited or 2
  if(i<0 || j<0 || i>=arr.size() || j>=arr[0].size() || arr[i][j] == 0) return;
 if(arr[i][j] == 2) return;
  arr[i][j] = 2;
  q.push({i,j});//also insert each cell of this island into queue

  dfs(arr,i+1,j);
  dfs(arr,i,j+1);
  dfs(arr,i-1,j);
  dfs(arr,i,j-1);

}
int main(){
    vector<vector<int> > arr =  {{0,1,0},{0,0,0},{0,0,1}};
        bool flag = false;
         for(int i=0;i<arr.size();i++){//it will mark the first comming element to visited or 2 not both 
          for(int j=0;j<arr[0].size();j++){
            if(arr[i][j]== 1) {//if it is then apply dfs
            dfs(arr,i,j);
            flag = true;//set it true
            break;
            }
          }
            if(flag == true) break;//it means 1 set of island is marked as visited or 2
         }

          vector<vector<int> > dr = {{-1,0},{0,1},{0,-1},{1,0}};//directional array
         int noz = 0;

      while(q.size() != 0){ //this will utilize all layers of bfs
        int Size = q.size();
       while(Size--){//utilize only the current layer bcz insertion will cause next layer
        pair<int,int> p = q.front();//take out the first element
        q.pop();
          int r = p.first;
          int c = p.second;
          for(int d = 0;d<4;d++){
            int i = r + dr[d][0];//indicates up,down,left,right
            int j = c + dr[d][1];

           if(i<0 || j<0 || i>=arr.size() || j>=arr[i].size() || arr[i][j] == 2) continue;//out of bound
          if(arr[i][j] == 1) {//if we reach 2nd island by utilizing the layers then return
             cout<<noz;//number of steps to reach 2nd island 
             return 0;
          }
          if(arr[i][j] == 0){//if we reach 0'th cell while bfs layer we have to form a brigde
           arr[i][j] = 2;//make it visited
            q.push({i,j});//insert it for next bfs layer
          }
          }
       }
        noz++;//also layer++ or no of zero ++
        }

        cout<<-1;//this will not execute as there are 2 exact islands
    }
