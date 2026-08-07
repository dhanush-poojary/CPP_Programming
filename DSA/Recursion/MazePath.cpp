#include <iostream>//Maze path using recursion
using namespace std; 
// int maze(int sr,int sc,int er,int ec){//this function does not print the combinations but give no of combinations
//     if(sr>er || sc>ec) return 0;//it means destination reached
//     if(sr == er && sc == ec) return 1;
//     int rightways = maze(sr,sc+1,er,ec);//this will come with all combinations of rightways
    
//     int downways = maze(sr+1,sc,er,ec);//this will come with all combinations of downways
  
//     return rightways + downways;//after we add them it will be total combination
// }
int maze(int sr,int sc,int er,int ec,string s){//this function will also print the combinations

    if(sr>er || sc>ec) return 0;//it means destination reached
    if(sr == er && sc == ec) {
        cout<<s<<endl; //it will print all the combinations to reach destination 
        return 1 ;
    }
    int rightways = maze(sr,sc+1,er,ec,s+'R');//this will come with all combinations of rightways
    
    int downways = maze(sr+1,sc,er,ec,s+'D');//this will come with all combinations of downways
  
    return rightways + downways; //after we add them it will be total combination
}
int main()
{    maze(1,1,3,3,"");//it can start from either 1 or 0
 
}