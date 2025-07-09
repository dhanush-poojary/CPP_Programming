#include <iostream>//Tower of Honoi using recursion
using namespace std; 
void tower(int n,char S,char H,char D){
    if(n == 0) return;//when n becomes 0 the end the recursion
    tower(n-1,S,D,H);//it moves n-1 disks from A to B using C
    cout<<S<<" -> "<<D<<endl;
    tower(n-1,H,S,D);//it moves n-1 disks from B to C using A
}
int main()
{  int n = 3;//number of disks
   tower(n,'A','B','C');//passing number of disks and Source Helper and distination 
}