#include<iostream>//Leetcode 779                 K-th Symbol in Grammar
using namespace std;
int grammer(int n,int k){
    if(n == 1) return 0;//at 0'th row there is only 1 element which is 0
    if(k%2==0){//for even k's call
        int ans = grammer(n-1,k/2);///function call ans it will be return 0 or 1
//for even index we need to flip the ans if 0 to 1 and if 1 to 0
        if(ans == 0) ans = 1;
        else ans = 0;
         return ans;//then return the answer
    }
    else{//for odd k's call
         int ans = grammer(n-1,k/2+1);//we dont need to flip any of the elements in odd calls
         return ans;
    }
}
int main(){
    int n = 4;//n stands for no of rows 
    int k = 3;//and k stands for k'th index

   cout<<grammer(n,k);//function call
}