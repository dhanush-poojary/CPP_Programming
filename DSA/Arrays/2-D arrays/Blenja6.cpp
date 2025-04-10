#include <iostream>//Leetcode 54                Spiral printing I
using namespace std; //4 pointer technique
int main()
{  int m,n;
    cout<<"Enter rows and columns of  matrix: ";
    cin>>m>>n;//user input of row and column sizes

// input array    
// 1 2 3 4 5       
// 6 7 8 9 10
// 11 12 13 14 15   
// 16 17 18 19 20

//output
//1 2 3 4 5 10 15 20 19 18 17 16 11 6 7 8 9 14 13 12
    int arr[m][n];//2d array
    int  minr = 0,maxr = m-1;  //these for rows
    int minc = 0,maxc = n-1;   //these for columns

    cout<<"Enter the elements of 1st matrix: "<<m*n<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];//user input of m*n elementss
        }
    }
   int count = 1;//this is for to check and see that whether all elements are printed or not

    while(minr<=maxr && minc<=maxc){//after each iteration of this loop our spiral matrix
         //will be shrinked by 1 size

        for(int i=minc;i<=maxc && count<m*n ;i++){//right
            cout<<arr[minr][i]<<" "; //here we are printing elements of 1st row 
            count++;                    //1 2 3 4 5   7 8 9
        }
        minr++;//after it is done we dont need that row any more
        for(int j=minr;j<=maxr && count<m*n ;j++){//down
            cout<<arr[j][maxc]<<" "; //here we are printing elements of last column
            count++;                   //10 15 20  14
        }
        maxc--;//after it is done we dont need that column any more
        for(int k=maxc;k>=minc && count<m*n ;k--){//left
            cout<<arr[maxr][k]<<" ";//here we are printing elements of last row
            count++;                 //19 18 17 16  13 12
        }
        maxr--;//after it is done we dont need that row any more
        for(int l=maxr;l>=minr && count<m*n ;l--){//up
             cout<<arr[l][minc]<<" ";//printing we are printing elements of 1st column
             count++;                    //11  6
        }
        minc++;//after it is done we dont need that column any more

    }


   return 0;
}