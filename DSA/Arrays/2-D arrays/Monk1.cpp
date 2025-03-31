#include<iostream>  //Types of declaration od 2D-Array (matrix)
using namespace std;
int main(){
   //int arr[row size][column size];
//    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};//these 3 are valid 
//    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
   int arr[][3] = {1,2,3,4,5,6,7,8,9};//this also valid while initializing together only column is required
   
   cout<<arr[2][1]<<endl; //element present in 2,1 'th index will be printed
   cout<<arr[1][1];//element present in 1,1 'th index will be printed
}