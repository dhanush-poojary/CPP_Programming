#include<iostream>  //Leetcode      200        Number of Islands
#include<set>
#include<vector>
using namespace std;
//connected component
  set<pair<int,int>> visited;//here we can not use unordered_set because with unordered set we can not compare pair's both element at once
void dfs(vector<vector<char>>& grid,int i,int j){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || grid[i][j] == '0') return;//out of bound index and water part then exit
    pair<int,int> p = {i,j};//current cordinates
    if(visited.find(p) != visited.end()) return;//if present in set then it means no new land found
    visited.insert(p);//if not present then it is a new land insert it in set

    dfs(grid,i+1,j);//traverse in all 4 directions for that cordinates
    dfs(grid,i,j+1);
    dfs(grid,i-1,j);
    dfs(grid,i,j-1);
}
int main(){
  vector<vector<char>> grid = { {'1','1','1','1','0'},
  {'1','1','0','1','0'},
  {'1','1','0','0','0'},
  {'0','0','0','0','0'}
  };

        int rows = grid.size();
        int cols = grid[0].size();
        visited.clear();

        int cc = 0;//to store the count
        for(int i=0;i<rows;i++){//traverse in the matrix
            for(int j=0;j<cols;j++){
                if(grid[i][j] == '0') continue;//it is water part then skip it
                pair<int,int> p = {i,j};//store the cordinates of island's 
                //then search it in visited set if found then not a new island if not then new island which is not visited
                if(visited.find(p) == visited.end()){//found land which is not visited 
                cc++;//increament the count
                dfs(grid,i,j);//the  apply dfs so that all island's part's(1) must be visited 
                }

            }
        }
        cout<< cc;//printing the number of islands
    
}