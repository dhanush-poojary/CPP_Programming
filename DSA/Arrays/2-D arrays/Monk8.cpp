#include<iostream>//Leetcode - 867            Transpose matrix
#include<vector>//we did the same job here but with 2-D vectors
using namespace std;
int main(){
  vector<vector<int>> arr(2,vector<int>(3));//an 2-D vector declaration mXn
  cout<<"Enter the array elements: ";
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
       cin>>arr[i][j];
    }
  }  
    vector<vector<int>>v(3,vector<int>(2));//resultant vector  declaration with interchanging row into column mXn into nXm
    cout<<"The array elements before transpose: "<<endl;
    for(int i=0;i<2;i++){  
        for(int j=0;j<3;j++){
             cout<<arr[i][j]; //printint elements of arr
        }
        cout<<endl;
      }
  for(int i =0;i<3;i++){//we have to interchange row size and column size
     for(int j=0;j<2;j++){
        v[i][j] = arr[j][i];//initializing res array's i,j'th index with symmetric of arr j,i'th index
     }                                                  //res[1,2] = arr[2,1]
    cout<<endl;
  }

  cout<<"The array elements after transpose: "<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
         cout<<v[i][j];//printing elements of resultant matrix
    }
    cout<<endl;
  }
}