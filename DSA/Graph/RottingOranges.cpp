#include<iostream>      //Leetcode        994 Rotting Oranges
#include<queue>
#include<vector>
using namespace std;
//multisource bfs approach
int main(){
  vector<vector<int> > grid = {{2,1,1},{1,1,0},{0,1,1}};
  //0 representing an empty cell
  //1 representing a fresh orange
 //2 representing a rotten orange 

       queue<pair<int,int>> q;

       int frsh_orn = 0;//to maintain the count of freash oranges ,if it becomes 0 then all oranges rottened if not then return -1

       for(int i=0;i<grid.size();i++){//traverse in the matrix
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j] == 1) frsh_orn++;//if freash orange found then increament the count
            else if(grid[i][j] == 2) q.push({i,j});//if rotten orange found then insert it into queue
            else continue;//if empty then dont do anything
        }
       }
       q.push({-1,-1});//this will represent that 1 level of oranges are rotted or end of level's
       int mint = 0;
            
        vector<vector<int> > dr = {{-1,0},{1,0},{0,-1},{0,1}}; //indicates directions up,down,left,right   

       while(q.size() != 0){//traverse in all already rotten oranges
        pair<int,int> p = q.front();//take rotten orange
        q.pop();

        if(p.first == -1 && p.second == -1){//if it is a end of level marker
          mint++;//then 1 minute done

        if(q.size() == 0){//this is to avoid infinite loop or it means all oranges are rotten
            mint--;//this is bcz last row will not rotten any oranges
            break;
        }
       q.push({-1,-1});//this will represent that 1 level of oranges are rotted
        }
        else{//for rotten the neighbouring elements
          int r = p.first;//their cordinates
          int c = p.second;
          for(int d = 0;d<4;d++){//for rottening all 4 directions oranges
            int i = r + dr[d][0];//indicates up,down,left,right
            int j = c + dr[d][1];

           if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size()) continue;//out of bound condition then skip
           if(grid[i][j] == 2 || grid[i][j] == 0) continue;//empty or already rotten cell then skip
           grid[i][j] = 2;//rotten the freash orange or visited
           q.push({i,j});//insert it back to queue
           frsh_orn--;//and reduce the freash orange count
          }
        }
        }
      
      if(frsh_orn != 0) cout<<-1;//if all freash oranges are not rotten then return -1
      else cout<< mint;//otherwise return mint

       
    }