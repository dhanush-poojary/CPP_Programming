#include<iostream>//google interview problem
//we have to tell wheather we can reach the end or not after moving according to constraints 'R','L','D','U'
#include<vector>//constraint we have to solve it in O(1) and no matrix modification allowed
using namespace std;
int main(){
   vector<vector<char> > graph = {{'R','R','D','R'},{'D','L','D','L'},{'U','D','L','R'},{'U','R','R','R'}};
   int m = graph.size();
   int n = graph[0].size();

    int count = 0;
    int i=0,j=0;
    while(i<m && j<n){//untill we reach last index
       if(i>m || j>n || count> m*n){//even before we reach end,maximum time complexity  then it means cycle detected inside so exit
         cout<<"False";
         return 0;
       }
       if(graph[i][j] == 'R') j++;//go right
       else if(graph[i][j] == 'L') j--;//go left
       else if(graph[i][j] == 'D') i++;//go down
       else if(graph[i][j] == 'U') i--;//go up
       count++;//count the number of steps/ time
    }
    if(count<= m*n){ //if after the loop count is lesser then maximum time then it is correct
      cout<<"True";
     return 0;
    }
    cout<<"False";
  
}