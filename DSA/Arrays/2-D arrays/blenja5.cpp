#include <iostream> //Program for printing wave form but in column wise
using namespace std; 
int main()
{  int m,n;
    cout<<"Enter rows and columns of 1st matrix: ";
    cin>>m>>n;//user input row and column
    
    int arr[m][n];//2-D arrays
    //input
//  1 2 3
//  4 5 6 
//  7 8 9

 //output
// 1 4 7 8 5 2 3 6 9 
    cout<<"Enter the elements of 1st matrix: "<<m*n<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];//user inputs of n*n elements
        }
    }
    int k = 0;//this is for column
   while(k<n){
     if(k%2==0){//this is for even number of columns
        for(int i=0;i<m;i++){//traversal through elements of row straight while mainting column constant
                 //k is no column           
                cout<<arr[i][k]<<" ";
            }
        }
     
     else{//this is for odd number of rows
        for(int i=m-1;i>=0;i--){//traversal through elements of row reverse while mainting column constant
           //k is no column 
            cout<<arr[i][k]<<" "; 
        }
     }
        k++;//increamenting the column
   }
   return 0;
}