#include<iostream>//Program for taking sum of each array elements
using namespace std;
int main(){
  int arr[] = {666,545,743,724,992,535};//array declaration and initialization
  int n = sizeof(arr)/sizeof(int);//here we are calculation the size of the array as though we don't know
  
  int sum = 0;

  for(int i=0;i<n;i++){//traversing through entire array
    sum+=arr[i];//here we are adding each element of array  with sum variable
  }
  cout<<"The sum of all array elemet is :"<<sum;//prints sum
}