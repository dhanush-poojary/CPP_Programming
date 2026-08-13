#include<iostream>//Leetcode  - 861               score after flipping Matrix
#include<vector>
using namespace std;
int main(){
   vector<vector<int> >grid;//it is an 2d matrix
   vector<int> arr = {0,0,1,1};//these are our 3 rows
   vector<int> brr = {1,0,1,0};
   vector<int> crr = {1,1,0,0};
   grid.push_back(arr);//pushing rows into 2d array
   grid.push_back(brr);
   grid.push_back(crr);

   int m = grid.size();//rowsize
   int n = grid[0].size();//column size
   
   for(int i=0;i<m;i++){   //first we are checking only 0'th column 
       if(grid[i][0] == 0 ){ //whether it has any 0's
         //0 is constant because we are only checking 0'th column
          for(int j = 0; j<n ;j++){   //if it has then flip the entire row
              if(grid[i][j] == 0) grid[i][j] = 1;//turn 0 to 1 
              else grid[i][j] = 0;  //and 1 to 0
          }
       }
   }
   //here we need column so make change of j and i and also row and column size
       for(int i=0;i<n;i++){//here we are fliping the columns if it has more noz's then noo's
          int noz = 0,noo = 0;
          for(int j=0;j<m;j++){ //in here we are checking for number of 1's and 0's present in a column at once
            if(grid[j][i] == 0) noz++;
            else noo++;
          }
          if(noz>noo){//if 0's are greater then flip that column
              for(int j= 0; j<m ;j++){
                 if(grid[j][i] == 0) grid[j][i] = 1;//turn 0 to 1 
                  else grid[j][i] = 0;  //and 1 to 0
              }
           }
         
     }
    
     int sum = 0;//stores sum of each rows decimal value
     for(int i = 0; i<m;i++)//here we are coverting binary to decimal
     {   int x = 1;//it need to be changed in each row
        for(int j=n-1;j>=0;j--){//binary to decimal from back itself
             sum+= grid[i][j] * x;//multiply  element with 2's power
              x*= 2;//2's power
        }
     }
   cout<<sum;//prints the maximum score or sum
}
