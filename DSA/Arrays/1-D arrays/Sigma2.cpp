#include<iostream>//To print the students roll number whose marks are less then 35
using namespace std;//the indices are itself the roll numbers
int main(){
   int marks[] = {99,44,32,33,55,67,77,88,55,90};//here it will automatically gives array size
   
   cout<<"The students whose marks are less then 35 are = \n";
    for(int i=0;i<10;i++){//here we are checking the each element of the array
        if(marks[i]<35){//whether it is less then 35 or not if it is then print it's index
            cout<<"Roll number = "<<i<<endl;
        }
    }
}