#include<iostream>//Program to reverse a array with 2 pointer method
#include<vector>//without using extra array
#include<algorithm>
//this header file provides various algorithms like sorting,searching  etc
using namespace std;
int display(vector<int>& a){
    cout<<"the vector after reversed= "<<endl;
    for(int i=0;i<a.size();i++){//here in this function we print thr vector elements
        cout<<a[i]<<"\t";
    }
    return 0;
}
int main(){
   vector<int>v1;//vector declaration 
   v1.push_back(5);//inserting elements in to the vector
   v1.push_back(9);
   v1.push_back(7);
   v1.push_back(4);
   v1.push_back(1);
   v1.push_back(3);
   v1.push_back(0);

   int i=0 , j = v1.size() -1 ;//2 pointers 1 in starting index and other one is at last index
   while(i<j){//i<=j is also correct
      int temp = v1[i];//here we are wpping last index with 1st and so on
      v1[i] = v1[j];
      v1[j] = temp;
      i++;//moving pointer forward
      j--;//moving pointer backward
   }
//    reverse(v1.begin(),v1.end());
   //we also have reverse function for vectors to be reversed which is obtained by algorithm header file
   display(v1); //function call
}