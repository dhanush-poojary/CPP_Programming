#include <iostream>//Leetcode 59               Spiral printing II
using namespace std; //4 pointer technique
int main()
{  int m,n;
    cout<<"Enter rows and columns of  matrix: ";
    cin>>m>>n;//user input of row and column sizes

 //input
    // 1 2 3
    // 4 5 6
    // 7 8 9
 //output
    // 1 2 3 6 9 8 7 4 5 
    int arr[m][n];//2d array
    int  minr = 0,maxr = m-1;  //these for rows
    int minc = 0,maxc = n-1;   //these for columns
   
    int res[m*n] ;//2d array

    cout<<"Enter the elements of 1st matrix: "<<m*n<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];//user input of m*n elementss
        }
    }
   int count = 0;//this is for to check and see that whether all elements are printed or not
   //it is also the index for our 1d array
    while(minr<=maxr && minc<=maxc){//after each iteration of this loop our spiral matrix
         //will be shrinked by 1 size

        for(int i=minc;i<=maxc && count<=m*n ;i++){//right
            res[count] = arr[minr][i]; //here we are stroing elements of 1st row into res array 1 by 1
            count++;                    //1 2 3  5
        }
        minr++;//after it is done we dont need that row any more
        for(int j=minr;j<=maxr && count<=m*n ;j++){//down
            res[count] = arr[j][maxc]; //here we are storing elements of last column into res array 1 by 1
            count++;                   //6 9
        }
        maxc--;//after it is done we dont need that column any more
        for(int k=maxc;k>=minc && count<=m*n ;k--){//left
            res[count] = arr[maxr][k];//here we are storing elements of last row into the res 1 by 1
            count++;                 //8 7
        }
        maxr--;//after it is done we dont need that row any more
        for(int l=maxr;l>=minr && count<=m*n ;l--){//up
            res[count] = arr[l][minc];//printing we are stroing elements of 1st column into the res 1 by 1
             count++;                    //4 
        }
        minc++;//after it is done we dont need that column any more

    }
    cout<<"The resultant matrix :"<<endl;
    for(int i=0;i<m*n;i++){
            cout<<res[i]<<" "; //printint the spiral form using 1d array
       
    }


   return 0;
}