#include <iostream> //program to print matrix in reverse but in wave from
using namespace std; 
int main()
{  int m,n;
    cout<<"Enter rows and columns of 1st matrix: ";
    cin>>m>>n;//user input
    
    int arr[m][n];
  //input
//  1 2 3
//  4 5 6
//  7 8 9
  //output
//  7 8 9 
//  6 5 4
//  1 2 3
    cout<<"Enter the elements of 1st matrix: "<<m*n<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];//user input of m*n elements into the matrix
        }
    }
   for(int i=m-1;i>=0;i--){//it's same as prevous one but in here we are just doing it in reverse
      if(i%2==0){//here we are just printing straight only in even row
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";//i is constant
        }
      }
      else{//here we are just printing reverse only in odd rows
        for(int j = n-1;j>=0;j--){
        cout<<arr[i][j]<<" ";//i is constant
      }
     
   }
   cout<<endl;
}
   return 0;
}