#include <iostream>//leetcode 74    search in an 2D matrix
#include<vector>
using namespace std;

//row and column both will be in asscending order
// 1 4 7 11 5
// 2 5 8 12 19
// 3 6 9 16 22 
// 10 13 14 17 24
// 18 21 23 26 30  

int main()
{     //we used 2d array instead of vector ! 
     int arr[5][5] = {{1,4,7,11,5},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
      
      int target = 5;//seach element
     int m = 5;//row size
     int n= 5;//column size
     
     int i=0,j=n-1; //i at 0'th row and j at 0'th row's last index value which is n-1
    
     while(i<m && j>=0){
     //i<m for not going beyong row and j>=0 for not going foreth index value

        if(arr[i][j]== target) {//first we are checking whether we found the target or not
         cout<<"The element "<<target<<" is found";
         return 0;
      }
        else if(arr[i][j]>target) j--;  //if it arr[i][j] is greater then our target then go left
        else//if it arr[i][j] is lesser then our target then go down
            i++;
        }
     
   cout<<"The element "<<target<<" is not  found";//if it is not found 
}