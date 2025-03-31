#include <iostream> //Program for finding  maximum and secon largest element in an 2-D matrix
#include<climits>
using namespace std; 
int main()
{  int arr[3][3] = {{100,43,67},{144,77,234},{636,532,42}};//2-D array declaration
int max = INT_MIN;//setting the lowest value in max
int sec_max = INT_MIN;//setting the lowest value in second larget

   for(int i = 0;i<3;i++){//travesal through each element present in the matrix
      for(int j=0;j<3;j++){
        for(int j=0;j<3;j++){
          if(max<arr[i][j]){//it will check max with each element
            sec_max = max; //also store max's previous value in sec_max as though 4 comes before 5
             
            max = arr[i][j];//if max is less then arr's element then update it in max
          }
        if(sec_max<arr[i][j] && max!=arr[i][j]){ //it does the same work but at one step where the arr's element is 5
          //it will does not execute this block because max is already 5 and max!= arr[i][j] means 5!=5 == F
            sec_max = arr[i][j];//stores 2nd maximum element
        }
      }
   }
    cout<<"The maximum element is: "<<max<<endl;//prints max element
    cout<<"The Second maximum element is: "<<sec_max;//printes second max element
   return 0;
}
