#include <iostream>//To make a transpose of matrix within the array itself nXn
using namespace std; //in this code we just transposed the elements inside this array itself
int main()
{  int n;
    cout<<"Enter the row and column size: ";
    cin>>n;//taking user input of row and column size
    int arr[n][n];//An 2-D array
    cout<<"Enter the elements into the 2-D array: ";
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        cin>>arr[i][j];  //inputing elements into the 2-D array
     }
   }  
   cout<<"The array elements before transpose are: "<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" "; //printing array element of 2-D array
    }
    cout<<endl;
  }
  for(int i=0;i<n;i++){//here we are just transposing the matrix 
   for(int j=i+1;j<n;j++){//just execute loop i+1 times to avoid error
      int temp = arr[i][j];   //swap the noraml with it's symmetric 
      arr[i][j] = arr[j][i];  //1,2 with 2,1
        arr[j][i] = temp;
     }
   }
   cout<<"The array elements after transpose are: "<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" ";//printing the array after transposed 
    }
    cout<<endl;
  }


   return 0;
}