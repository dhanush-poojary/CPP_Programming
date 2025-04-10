#include<iostream>//Prints the sum of specific rectangle of the 2d matrix
using namespace std;
int main(){

  int arr[4][4] = {{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-5,-7,0}} ;//2d array declaration
   int l1 = 1,l2 = 3,r1 = 2,r2 = 3;//these are cordinates of rectangle
   int sum = 0;

  for(int i=l1;i<=l2;i++){
    for(int j=r1;j<=r2;j++){
      sum+=arr[i][j];//it will store the sum of each element inside the rectangle
    }
    
  }
    cout<<sum;//prints sum
}