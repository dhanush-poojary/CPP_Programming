#include<iostream>//Basic operations on 2-D matrix
using namespace std;
int main(){
   int m,n; //m is for row size and n is for column size
   cout<<"Enter the number of rows: ";
   cin>>m;//user input of row size
   cout<<"Enter the number of columns: ";
   cin>>n;//user input of column size
   int arr[m][n];//An 2-D array
   cout<<"Enter the elements into the 2-D array: ";
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cin>>arr[i][j];  //inputing elements into the 2-D array
    }
  }
  cout<<"The matrix  = "<<endl;
   for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";//printing the elements of 2-D array
     }
     cout<<endl;
   }
    
}