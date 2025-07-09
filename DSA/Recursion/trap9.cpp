#include <iostream>//Stiar path using recursion for 2 and 3 jumps
using namespace std; 
// int stair(int n){//this is for 1,2 jumps
//     if(n == 1) return 1;//1  way  from n-1 spot
//     if(n == 2) return 2;//2 way from n-2 spot
//     return stair(n-1) + stair(n-2);//add both will give us n's ways
// }
int stair(int n){//this is for 1,2,3 jumps
    if(n == 1) return 1;;//1  way  from n-1 spot
    if(n == 2) return 2;//2 way from n-2 spot
    if(n == 3) return 4;//4 ways from n-3 sport
    return stair(n-1) + stair(n-2) + stair(n-3);//add thest and will get n's ways
}
int main()
{  int n;
    cin>>n;//user input
    cout<<stair(n);//prints the number of ways
   return 0;
}