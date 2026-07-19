#include<iostream>//To find just smaller and just greater power of 2
using namespace std;
int main(){
   int n = 63;//Non power of 2

   int temp;
   int copy = n;//making a copy
   while(n !=0 ){//using Brian Kernighan's algorithm
     temp = n;//this is to keep last value before getting zero

     n = n & (n-1); //the number will be getting smaller at each iteration
   }        
   cout<<copy<<" just Smaller power of 2 is "<<temp<<endl;//we get small power of 2    
   cout<<copy<<" just greater power of 2 is "<<(2*temp);//by multiplying we ge greater power of 2      
   return 0;
}