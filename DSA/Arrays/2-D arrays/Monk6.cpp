#include <iostream> //addition of 2 matrix
using namespace std; 
int main()
{  const int m = 2,n = 3;//row and column size of 1st matrix
   const int r = 2,c = 3;//row and column size of 2nd matrix
   int arr[m][n] = {{1,2,3},{4,5,6}};// 1st matrix
   int brr[r][c] = {{7,8,9},{10,11,12}};//2nd matrix
   
   if(m != r && n!=c){//in order to add 2 matrix there row and column size are to be same
      exit(0);//otherwise exit the program
   }
   int res[m][n]; //resultant matrix declared with the same size as those 2 matrix
   for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
        res[i][j] = arr[i][j] + brr[i][j];//adding each element one by one from both arr matrix and brr matrix into the resultant matrix
        //addition element will also be stored in the same index as arr,brr's
      }
   }

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<res[i][j]<<"\t";//printing the elements of resultant matrix 
    }
    cout<<endl;
   }
   return 0;
}