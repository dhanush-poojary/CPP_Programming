#include<iostream>  //Rate in a Maze
#include<vector>
using namespace std;
//here a rat can move in all 4 directions left right up down
//0 is open and 1 is blocked cell
//here we need to return how many possibles ways are there to reach last cell

int count = 0;
void rat(vector<vector<int> > &arr,int i,int j, vector<vector<int> >&visited){
      if(i == arr.size()-1 && j == arr[0].size()-1){//when it reaches 
          count++;
          return;
      }

      visited[i][j] = 0;//when we enter any cell make it visited

        if(i-1>=0 && arr[i-1][j] == 0  &&  visited[i-1][j] == -1)//go up
        rat(arr,i-1,j,visited);//only if up is not blocked and not visited then we can go
         
        if( i+1<arr.size() && arr[i+1][j] == 0  &&  visited[i+1][j] == -1)//go down
        rat(arr,i+1,j,visited);//only if down is not blocked and not visited then we can go
        
        if(j-1>=0 && arr[i][j-1] == 0 &&  visited[i][j-1] == -1)//go left
           rat(arr,i,j-1,visited);//only if left is not blocked and not visited then we can go
        
           if(j+1<arr[i].size() && arr[i][j+1] == 0 && visited[i][j+1] == -1)//go right
           rat(arr,i,j+1,visited);//only if right is not blocked and not visited then we can go
              
      visited[i][j] = -1; //after making the entire call revert the visited array so that
       //a new way is found
              
          return ;    
}
int main(){
  vector<vector<int> > arr = {   //test case
    {0,0,1,0,0,1,0},
    {1,0,1,1,0,0,0},
    {0,0,0,0,1,0,1},
    {1,0,1,0,0,0,0},
    {1,0,1,0,1,0,0},
    {1,0,0,0,0,1,0},
    {1,1,1,1,0,0,0}
  };
  vector<vector<int> > visited(arr.size(),vector<int>(arr[0].size(),-1));//creating a same sized array and fill -1
 
  rat(arr,0,0,visited);
 
  cout<<count;//prints the number of possibles ways are there to reach the rate from the (0,0) to (m-1,n-1)      
 
  return 0;
}