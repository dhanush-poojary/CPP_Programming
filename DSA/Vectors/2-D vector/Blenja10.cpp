#include<iostream>//To print the row sum whose sum is maximum with its's row number
#include<climits>
using namespace std;
int main(){
  
  int arr[4][4] = {{1,2,3,4},{9,10,1,2},{5,6,7,8},{9,3,2,6}} ;//2d array
   int idx = -1;
   int sum = 0;

  int max = INT_MIN;
  
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      sum+=arr[i][j];//this will store each row's sum
  }
  if(sum>max) {//when it becomes last time maximum then it will be maximum sum and i will be it's row
    max = sum;  
    idx = i; 
  }
  sum = 0;//after computation set sum into 0
}
  cout<<max<<" "<<idx;//prints the maximum element sum and its index number of row
}
