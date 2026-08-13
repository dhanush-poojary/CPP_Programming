#include<iostream>//Usages of 2d vector 
#include<vector>
using namespace std;
int main(){
    //2d vector will consist of 1d vector inside the 2d vector
     vector<int> v1(5,1);//we can assign variable columns in 2d vector
     vector<int> v2(7,2);
     vector<int> v3(3,3);
     
     vector<vector<int> >v;//2d vector declaration
     //vector<vector<int> >v(3,vector<int>(4));
     v.push_back(v1);//this will be row 0
     v.push_back(v2);//this will be row 1
     v.push_back(v3);//this will be row 2
   
     int m = v.size();//this will give only the size row 
    //  int n = v[0].size();//this will give only the size of 1 set column
//although we used different number of columns in 2d array

     for(int i=0;i<m;i++){
        for(int j=0;j<v[i].size();j++){//this will print variable number of columns
            cout<<v[i][j]<<" "; //prints array elements
        }
        cout<<endl;
     }
}