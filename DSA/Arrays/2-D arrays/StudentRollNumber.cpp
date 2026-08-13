#include<iostream>//Program to store rollno and marks of 4 student in a 2-D array
using namespace std;
int main(){
    int arr[4][2] = {{06,578},{03,575},{20,275},{23,150}};//storing marks and rollno in different array in the array
    //here row size is 4 and column size is 2 
    int m = 4,n = 2;
   
   cout<<"The Results  = "<<endl;
   cout<<"Rollno  marks"<<endl;
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
         cout<<arr[i][j]<<"\t";//printing rollno and student marks
      }
      cout<<endl;
    }
}