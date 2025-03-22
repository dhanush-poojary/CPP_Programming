#include<iostream>//taking vector elements input and printing them using loop
#include<vector>
//this header file is required to use vector functionalities throughout the program
using namespace std;
int main(){
  vector<int>v;//vector declaration without size

  v.push_back(1);//1 will be inserted from back
  v.push_back(2);//2 will be inserted from back
  v.push_back(3);//3 will be inserted from back
  v.push_back(4);//4 will be inserted from back
  v.push_back(5);//5 will be inserted from back
 
//   cout<<v[1];  //we can also print it like this
  
  //the size of the vector is obtained by vector_name.size() 
   //it is similar to array's n-1 is the last elements index
  for(int i=0;i<v.size();i++){

    cout<<v[i]<<endl;//prints the elements of the vector
  }
} 