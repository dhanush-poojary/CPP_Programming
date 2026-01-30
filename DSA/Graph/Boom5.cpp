#include<iostream>   //Leetcode     130        Surrounded Regions
#include<vector>
using namespace std;
//in this question we have to convert all the non boundary O's to X
 void dfs(vector<vector<char>>& board,int i,int j){
       if(i<0 || j<0 || i>=board.size() || j>=board[0].size()) return;//out of bound index
       if(board[i][j] == 'X' || board[i][j] == 'Z') return;// if it is 'X' or if it is 'Z' which means already converted cell
       board[i][j] = 'Z';//covert the O to Z
       //move in all 4 directions
       dfs(board,i+1,j);//down 
       dfs(board,i,j+1);//right
       dfs(board,i-1,j);//up
       dfs(board,i,j-1);//left
  }
int main(){
  vector<vector<char>> board = {{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
  int m = board.size();
  int n = board[0].size();
  for(int i=0;i<m;i++){//displaying the matrix before modification
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
      for(int i=0;i<n;i++){//apply dfs to only 0's present at the top and bottom row inorder to covert all boundary 0's to X
         if(board[0][i] == 'O') dfs(board, 0, i);//top row             
         if(board[m-1][i] == 'O') dfs(board, m-1, i);//bottom row
      }
      for(int j=0;j<m;j++){//apply dfs to only 0's present at the left and right column inorder to covert all boundary 0's to X
      if(board[j][0] == 'O') dfs(board,j,0);  //left column      
    if(board[j][n-1] == 'O') dfs(board, j, n-1); //right column
      }
    
    for(int i=0;i<m;i++){//after that traverse in the matrix then
        for(int j=0;j<n;j++){
            if(board[i][j] == 'O') board[i][j] = 'X';//if it is a 'O' then convert it to X
            if(board[i][j] == 'Z') board[i][j] = 'O';//if it is a 'Z' then convert to back to 0 because it is not sourrounded by 'X'
            
        }
    }


    for(int i=0;i<m;i++){//displaying the matrix after modification
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    }
