#include <iostream>//pre_in_post using recursion
using namespace std; 
void pip(int n){
    if(n == 0) return;
    cout<<"pre"<<n<<endl;
    pip(n-1);//1 function call can done at 1 time
    cout<<"in"<<n<<endl;
    pip(n-1);//1 function call can done at 1 time
    cout<<"post"<<n<<endl;

}
int main()
{  
  int n;
  cin>>n;//user input
  pip(n);//function call
}