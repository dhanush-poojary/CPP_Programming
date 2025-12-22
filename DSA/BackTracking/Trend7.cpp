#include<iostream>//Leetcode         51  N-Queens
#include<vector>
#include<list>
using namespace std;
//we need to place atleast 1 queen at each row 
//we can move anywhere in vertically and horizontally and left and right diagonal
    vector<vector<char> > grid;
    bool can_place(int row,int col,int n){
      for(int i=row-1;i>=0;i--){//checking for upside column ,no need to check down side
                             //and also no need to check row bcz at a time we place only one queen
         if(grid[i][col] == 'Q') return false; //we go attacked 
      }

      for(int i=row-1,j=col-1;i>=0 && j>=0;i--, j--){//checking for left diagonal only upside  
            if(grid[i][j] == 'Q')return false;//we go attacked
        
      }
       for(int i=row-1,j = col+1;i>=0 && j<n;i--,j++){//checking for right diagonal only upside
       
            if(grid[i][j] == 'Q')return false;//we go attacked
        
      }
      return true;//no attack we can place
    }

    vector<vector<string>> ans;

void queen(int row,int n){
      if(row == n){//when all queen are placed we got the answer
      //   vector<string> str;
      //  for(int i=0;i<n;i++){
      //   string s = "";
      //   for(int j=0;j<n;j++){
      //         s+= grid[i][j];
      //   }
      //   str.push_back(s);
      //  }
      //   ans.push_back(str);

      for(int i=0;i<grid.size();i++){//printing the answer grid of current answer
        for(int j =0;j<grid[0].size();j++){
             cout<<grid[i][j]<<" ";
        }
        cout<<endl;
      }
      cout<<endl;
      return ;//return to next combition 
      }

        for(int i=0;i<n;i++){//here we need to explore all the possibilities even we got the answer earlier
            if(can_place(row,i,n)){//we are checking whether we can place queen in row,i'the cell

                grid[row][i] = 'Q';//place queen 

                queen(row+1,n);//and move to next row bcz only 1 queen can be placed at each row and column too

                grid[row][i] = '.';//revert back the changes so that we can make a new 
            }
        }
        return;//one set of queen is placed 
 }
     
int main(){
  int n = 4;//we have n queens and inside a NXN matrix or board

        grid.clear();
        ans.clear();
         grid.resize(n,vector<char>(n,'.'));//create a  similar array and fill '.' in it
         queen(0,n);
   
    }
