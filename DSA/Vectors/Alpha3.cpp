#include<iostream>//Program to sort an vector using built in sort function
#include<vector>//this header file is required to use vector functionalities throughout the program

#include<algorithm>
//this header file provides various algorithms like sorting,searching  etc
using namespace std;
int main(){
//    vector<int>v(5,100);
//if we declare and initialize like this the vector's size will be 5 and in all elements 100 will be present
   
    vector<int>v(5);
 //if we give size then all the elements will be 0 as default   


   // for(int i=0;i<v.size();i++){
   //      cout<<v[i]<<endl;
   // }

   v[0] = 5;//we can not assign like this but we can update the present values like these
   v[1] = 4;
   v[2] = 3;
   v[3] = 2;
   v[4] = 1;
   
//    v.at(5) = 6;  //we can access elements using at() function
//    cout<<v.at(5);

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<'\t';  //prints element of vector
   }
   cout<<endl;

   sort(v.begin(),v.end());//this will sort the vector in asccending order
   //the sort function is provided by algorithm header file and it mainly uses best sorting algorithm


   for(int i=0;i<v.size();i++){
    cout<<v[i]<<'\t'; //prints element of vector after sorting
   }
}