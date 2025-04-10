#include <iostream> //Program for printing the matrix in wave form
using namespace std; 
int main()
{  int m,n;
    cout<<"Enter rows and columns of 1st matrix: ";
    cin>>m>>n;//user input of row size and column size
    
    int arr[m][n];//an 2d array
  //input
  //  1 2 3
  //  4 5 6
  //  7 8 9

 //out put
 // 1 2 3 
 // 6 5 4 
 // 7 8 9 
 
    cout<<"Enter the elements of matrix: "<<m*n<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];//user input of m*n elements into the matrix
        }
    }
   for(int i=0;i<m;i++){
      if(i%2==0){//here we are just printing straight only in even rows
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";//i row will be constant
        }
      }
      else{//here we are just printing reverse only in odd rows
        for(int j = n-1;j>=0;j--){
        cout<<arr[i][j]<<" ";//i row will be constant
      }
     
   }
   cout<<endl;//newline
}
   return 0;
}