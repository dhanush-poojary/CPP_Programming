#include<iostream>//Leetcode    37           Sudoku Solver
#include<vector>
using namespace std; 
 bool can_place(vector<vector<char>> &arr ,int i,int j,int num){
        for(int r = 0;r<arr.size();r++){//checking the row whether that num exists or not
            if(arr[r][j] - '0' == num) return false; //if yes then can not place
        }
         for(int c = 0;c<arr.size();c++){//checkking the column whether that num exists or not
            if(arr[i][c] - '0' == num) return false;//if yes then can not place
        }
      //calculating the i and j of that big cell
      int row =  (i/3)*3;//this is bcz big cell is of 3X3 and there are only 9X9 elements
      int col =  (j/3)*3;

        for(int x=row;x<row+3;x++){//travel in big cell's 0'th index to 2'rd index
            for(int y=col;y<col+3;y++){
                if( arr[x][y] - '0' == num) return false;//if can not place then exist
            }
        }
        return true;//it means we can place it
   }
    bool f(vector<vector<char>> &arr ,int i,int j){
        if(i == 9) return true;//when i reaches or row gets empty then it means sudoku is solved return true

        if(j == 9) return f(arr,i+1,0);//j reaches 9 then it means all  column  of a row is completed
                                       //goto 0'th column of next row

        if(arr[i][j] != '.') return f(arr,i,j+1);//if any cell is already numbered then move to next element

        if(arr[i][j] == '.')//if it is empty then fill it
        {    for(int x=1;x<=9;x++){//in sudoku we can place only 0-9 elements 
             if(can_place(arr,i,j,x)){//we will see if we can place i'th element in current cell

             arr[i][j] = '0'+x;//if yes then  '0'+x that will be 48+x = asci value of x

            bool solved =  f(arr,i,j+1);  
            if(solved == true) return true;//if we dont do this then due to backtracking our filled sudoku will be reverted
         
             arr[i][j] = '.';//revert the changes back to original bcz we did not got the sudoku solved
             }
        }
        }
        return false;//it means not solved yet
    }
   int main(){
    vector<vector<char>> arr = {              //test case of sudoku solver game
    {'5','3','.','.','7','.','.','.','.'},
    {'6','.','.','1','9','5','.','.','.'},
    {'.','9','8','.','.','.','.','6','.'},
    {'8','.','.','.','6','.','.','.','3'},
    {'4','.','.','8','.','3','.','.','1'},
    {'7','.','.','.','2','.','.','.','6'},
    {'.','6','.','.','.','.','2','8','.'},
    {'.','.','.','4','1','9','.','.','5'},
    {'.','.','.','.','8','.','.','7','9'}
};

        f(arr,0,0);

        for(int i=0;i<9;i++){//printing the solved version of sudoku
          for(int j=0;j<9;j++){
            cout<<arr[i][j]<<" ";
          }
          cout<<endl;
        }
    }