#include<iostream> //Program for finding minimum and maximum element in an 2-D matrix
#include<climits>
using namespace std; 
int main()
{  int arr[3][3] = {{100,43,67},{144,77,234},{636,532,42}};//2-D array declaration
   int max = INT_MIN;//setting the lowest value in max
   int min = INT_MAX;//setting the highest value in min

   for(int i = 0;i<3;i++){//travesal through each element present in the matrix
      for(int j=0;j<3;j++){

        if(max<arr[i][j]){//it will check max with each element
          max = arr[i][j];//if max is less then arr's element then update it in max
        }
        if(min>arr[i][j]){//it will check min with each element
          min = arr[i][j];//if min is greater then arr's element then updatr it in min
        }
      }
   }
    cout<<"The maximum element is: "<<max<<endl;//prints maximum element
    cout<<"The minimum element is: "<<min;//prints minimum element
   return 0;
}
