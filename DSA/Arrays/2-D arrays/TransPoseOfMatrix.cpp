#include <iostream>//Program for transpose of a mXn matrix
using namespace std; 
int main()
{  int m,n;
    cout<<"Enter the row and column size: ";
    cin>>m>>n;//this is a m X n matrix
    int arr[m][n];//An 2-D array
    cout<<"Enter the elements into the 2-D array: ";
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
        cin>>arr[i][j];  //user inputing elements into the 2-D array
     }
   }  
   cout<<"The array elements are: "<<endl;
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
        cout<<arr[i][j]<<"\t";  //printing the array element of 2nd matrix
     }
     cout<<endl;
   }
   int res[n][m];//an 2-D matrix declaration with interchanging row into column mXn into nXm
   for(int i=0;i<n;i++){  //we have to interchange row size and column size
    for(int j=0;j<m;j++){
       res[i][j] = arr[j][i]; //initializing res array's i,j'th index with symmetric of arr j,i'th index
    }                                                 //res[1,2] = arr[2,1]
    cout<<endl;
  }
  cout<<"The array elements after transpose are: "<<endl;
  for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
      cout<<res[i][j]<<"\t";//printing the resultant matrixs
   }
   cout<<endl;
 }
   return 0;
}