#include<iostream>//To print decreasing ap upto all positive terms
//this is decreasing ap that's why we have to minus the difference
using namespace std;
int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  // 100 97 94 .... 4 1 upto positive terms 
  //the last terms is 1
  int ap = n;//our ap starts from 100 so we assign n to ap
///////////////////////////////////*important*////////////////////////////////////////////
//it is not necessary to  add initialization and increament/decreament only the requirement 
//condition  
for(;ap>0;){//this condition is for the loop to execute till last positive term 1
    cout<<ap<<" ";//prints the series
    ap = ap - 3;//this is difference
    
  }
}