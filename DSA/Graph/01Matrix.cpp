#include<iostream>  //Leetcode         542        01 Matrix
#include<queue>
#include<climits>
#include<vector>
using namespace std;
int main(){
//multisource bfs approach 
    vector<vector<int>>  mat = {{0,0,0},{0,1,0},{1,1,1}};

    for(int i=0;i<mat.size();i++){//displaying matrix before modification
      for(int j=0;j<mat[0].size();j++){
        cout<<mat[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
    
        queue<pair<int,int>> q;//to store the cordinations of 0 in matrix

        for(int i =0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 0) q.push({i,j});//insert i,j of 0 but dont change matrix
                else mat[i][j] = INT_MAX;//modify the matrix insert INT_MAX inplace of 1
            }
        }
        vector<vector<int>> dr = {{-1,0},{1,0},{0,-1},{0,1}};//indicates all 4 directions up,down,left,right

        while(q.size() != 0){//untill all 0's are 
            pair<int,int> p = q.front();//take out each cordinates
            q.pop();

            int r = p.first;//r and c is cordinates of 0'th element 
            int c = p.second;

           for(int d = 0;d<4;d++){//traverse each queue's element in all 4 directions

             int i = r + dr[d][0];//up,down,left,right
             int j = c + dr[d][1];

               if(i<0 || j<0 || i>=mat.size() || j>=mat[i].size()) continue;//out of bound conditions 
               if(mat[i][j] == 0) continue;//reached cell is already zero
             if(mat[i][j] > mat[r][c]+1){ //here i,j is new cell and r,c is 0'th cell ,so INT_MAX will be  i,j and r,c = 0 
             mat[i][j] = mat[r][c]+1;//previous cell's element + 1  = current cell
             q.push({i,j});//insert that cell's cordinates also
             }
           }
        }
        
        for(int i=0;i<mat.size();i++){//displaying the modified matrix
          for(int j=0;j<mat[0].size();j++){
            cout<<mat[i][j]<<" ";
          }
          cout<<endl;
        }
    }