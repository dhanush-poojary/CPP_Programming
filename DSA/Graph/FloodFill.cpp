#include<iostream>//Leetcode   733            Flood Fill
#include<vector> //grid based dfs 
using namespace std;
 void helper(vector<vector<int>>& image, int sr, int sc, int intcol,int color){
        if(sc<0 || sr<0 || sc >= image[0].size() || sr>= image.size()) return;//also when reaches end of the matrix
       
        if(image[sr][sc] != intcol) return;//if current cell is not same as initial then return 
     
        image[sr][sc] = color;//change its color to convert color

         helper(image,sr-1,sc,intcol,color);//go up
        helper(image,sr+1,sc,intcol,color);//go down
        helper(image,sr,sc-1,intcol,color);//go left
        helper(image,sr,sc+1,intcol,color);//go right
}

   int main() {
    int color = 2;
    int sr = 1,sc = 1;
    vector<vector<int> > image = {{1,1,1},{1,1,0},{1,0,1}};  

        if(image[sr][sc] == color){//if the initial color of starting element is same as convert color
          for(int i=0;i<image.size();i++){//printing the converted matrix
            for(int j=0;j<image[i].size();j++){
              cout<<image[i][j]<<" ";
            }
            cout<<endl;
          }
           exit(0);//return from here
        }
         helper(image,sr,sc,image[sr][sc],color);//pass the initial color which is image[sr][sc]


          for(int i=0;i<image.size();i++){//printing the converted matrix
            for(int j=0;j<image[i].size();j++){
              cout<<image[i][j]<<" ";
            }
            cout<<endl;
          }
  
    
}