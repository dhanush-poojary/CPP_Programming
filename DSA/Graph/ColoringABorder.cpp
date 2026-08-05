#include<iostream> //Leetcode   1034           Coloring A Border
#include<vector>
using namespace std;
//in this question we have to color the all border of starting color's cell but not cell which is of different color
 vector<pair<int,int>> internalcell;
void dfs(vector<vector<int>>& grid, int r, int c, int newcolor,int initial){//in this we convert
          if(r<0 || c<0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] !=  initial) return;//if out of bound or we have already colored that cell
          
          grid[r][c] = -newcolor;//convert it ,here minus inorder to identify the already present color 
          
          dfs(grid,r+1,c,newcolor,initial);//traverse in all 4 directions 
          dfs(grid,r-1,c,newcolor,initial);
          dfs(grid,r,c+1,newcolor,initial);
          dfs(grid,r,c-1,newcolor,initial);
          //after coloring the entire connected component now we have to change color to original of non- boundary cells
          if(!(r==0 || c==0 || r == grid.size()-1 || c == grid[0].size()-1 || grid[r+1][c] != -newcolor || grid[r-1][c] != -newcolor || grid[r][c+1] != -newcolor || grid[r][c-1] != -newcolor)){
      
                internalcell.push_back({r,c});//insert the colored cells into internalcell array  
              
           } 
    }
int display(vector<vector<int> > grid){//for printing the matrix
    for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
               cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
}
int main(){
  vector<vector<int>> grid = {{1,1,1},{1,1,1},{1,1,1}};
  display(grid);//printing
  cout<<endl;

   int  row = 1, col = 1, color = 2;//starting row and column and resultant color
          //we may also get a color which is same as new color although we did not made it , it is not considered as a connected component so instead of newcolor insert -newcolor
        internalcell.clear();

        int initial = grid[row][col];//take the initial color of starting row and column

        if(initial == color) return display(grid);//printing bcz color is already same as resultant color
      
        dfs(grid,row,col,color,initial);//apply dfs from row,col
      
        for(auto ele : internalcell){//this is to convert back the internal cell to their initial color
            int i = ele.first;
            int j = ele.second;
            grid[i][j] = initial;
        }

       //converting -newcolor back to newcolor
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] < 0) grid[i][j]*=-1;//converting the negetive color into positive to differentiate the already present resultant color
            }
        }
        return display(grid);//printing
      
    }