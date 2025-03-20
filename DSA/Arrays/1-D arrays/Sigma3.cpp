#include<iostream>//for taking the size of an array manually
using namespace std;
int main(){
  int arr[] = {1,5,3,6,4,8,9,11,55,77,4,7,8,99,66,44,88,11};//here we dont know the size of the array
  //even though it will be initialized automatically

  int n = sizeof(arr)/sizeof(arr[0]); //here we are making use of size of data types 
  //which int here int has the size 4 so whole array size of  divided by 4bytes or first ele of arr whose size also the same
//   int n = sizeof(arr)/4;
   
   cout<<"\nThe size of the above array is = "<<n;//it will print the size of the array

}