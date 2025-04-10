#include <iostream> //Matrix multiplication
using namespace std; 
int main()
{  int m,n;
    cout<<"Enter rows and columns of 1st matrix: ";
    cin>>m>>n;//row and column size of 1st matrix
    int r,c;
    cout<<"Enter the rows and columns of 2nd matrix: ";
    cin>>r>>c;//row and column size of 2nd matrix
    
    if(n!=r){//if column size of 1st matrix and row size of 2nd matrix are not same then multiplication is not possible
        cout<<"The multiplication is not possible...";
        exit(0);//exit out the program
    }
    int mata[m][n],matb[r][c],res[m][c];//2d array declarationss
     //resultant matrix will be of size row of 1st matrix and column of 2nd matrix sizes

    cout<<"Enter the elements of 1st matrix: "<<m*n<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mata[i][j];//user input of m*n elements of  1st matrix
        }
    }
    cout<<"Enter the elements of 2nd matrix: "<<r*c<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matb[i][j];//user input of r*c elements of  2//user input of m*n elements of  1st matrixnd matrix
        }
    }
    //res matrix will only hold m*c elements
    for(int i=0;i<m;i++){
        for(int j=0;j<c;j++){
            res[i][j] = 0;//initilizing all index by 0 as it stores garbage value
           for(int k =0;k<r;k++){ 
            
//first we are multiplyinh the elements of each matrix's of each index and then adding  
//those in the resultant matrix 
//while mainting i and j as const because rule says that 1st matrix row and 2nd matrix columns are to be multiplied
            res[i][j]+= mata[i][k] * matb[k][j];
           }
        }
    }
    cout<<"The resultant matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<c;j++){
            cout<<res[i][j]<<" ";//printing of resultant matrix
        }
        cout<<endl;
    }
   return 0;
}