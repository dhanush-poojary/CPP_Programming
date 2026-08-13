#include <iostream>//Leetcode - 48              Rotate image
using namespace std; 
int main()//inplace transpose and 90 degree rotation can be done in only nXn matrix
{  int n;
    cout<<"Enter the row and column size: ";
    cin>>n;//user input of size of both

    int arr[n][n];//An 2-D array

    cout<<"Enter the elements into the 2-D array: ";
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        cin>>arr[i][j];  //inputing elements into the 2-D array
     }
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
       cout<<arr[i][j]<<" ";//printing the transposed matrix
    }
    cout<<endl;
  }
  for(int k=0;k<n;k++){  //as this remains const this is for row indexing
   int i = 0;//2 poiter for replacing each rows array element     at 0'th index
   int j = n-1;//at n-1'th index
   while(i<j){//it will reverse specific row only as row number is constent
       int temp = arr[k][i];
       arr[k][i] = arr[k][j];
       arr[k][j] = temp;
       i++;
       j--;
    }
  }

   cout<<"The array elements after Rotating 90 degree are: "<<endl;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<arr[i][j]<<" "; //printing the 90 degree rotated matrix
    }
    cout<<endl;
  }
  return 0;
}