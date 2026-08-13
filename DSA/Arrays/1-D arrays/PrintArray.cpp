#include<iostream>//taking input and printing of an array
using namespace std;
int main(){
  int arr[5];//array declared with the size 5 it can be changed
  int n;
  cout<<"Enter the number of elements: ";
  cin>>n;//we are taking size of the array as user input
  cout<<"Enter the array elements: ";
  for(int i=0;i<n;i++){//the subscript of the array starts from 0
    cin>>arr[i];//it will ask for input each array elements
  }

  cout<<"\nThe array elements are = \n";
  for(int i=0;i<n;i++){//with this loop we are printing n-1 elements because start is 0
    cout<<arr[i]<<endl;//each element will be printed
  }

}