#include <iostream>//Zigzag printing using recursion
using namespace std; 
void zig(int n){
    if(n == 0) return;
    cout<<n;
    zig(n-1);//1 function call can done at 1 time
    cout<<n;
    zig(n-1);//1 function call can done at 1 time
    cout<<n;
}
int main()
{  int n;
    cin>>n;//user input
    zig(n);//function call
}