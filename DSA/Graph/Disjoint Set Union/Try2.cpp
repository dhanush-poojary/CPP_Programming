#include<iostream>//Leetcode 1559  Detect Cycles in 2D Grid
#include<vector>
using namespace std; 
 bool dfs(int i,int j,pair<int,int> parent, vector<vector<bool>> &visited,vector<vector<char>>& grid){
        visited[i][j] = true;//make it visited
        vector<vector<int>> dirs =  {{1,0},{-1,0},{0,1},{0,-1}};//directions array
        for (auto d : dirs) {//move in 4 directions
            int ni = i + d[0];
            int nj = j + d[1];
           
            if(ni<0 || nj<0 || ni>=grid.size() || nj>=grid[0].size()) continue;//if cell is out of bound then skip
           
            if(grid[ni][nj] != grid[i][j]) continue;//skip if the new cell is different 

           pair<int,int> p1 = {ni,nj};

           if(visited[ni][nj] ==true && p1 != parent) return true;//if new cell is visited and that is not it's parent then return true

          if(visited[ni][nj] == false){//if not visited apply dfs
          if(dfs(ni,nj,{i,j},visited,grid)) return true;//there is a cycle
          }
        }

  return false;//there is no cycle
   }
    int main(){
    vector<vector<char>> grid = {{'a','a','a','a'},{'a','b','b','a'},{'a','b','b','a'},{'a','a','a','a'}};

      vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));//visited 2D matrix

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                  pair<int,int> p = {i,j};
                  bool flag = false;
              if(!visited[i][j]){//if not visited
                 flag =  dfs(i,j,{i,j},visited,grid);}//apply dfs
              if(flag == true){//if true then return true
                cout<<"True";
                return 0;
              }
            }
        }
        cout<<"False";//otherwise return false
    }