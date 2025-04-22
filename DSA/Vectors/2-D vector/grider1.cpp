#include<iostream>//leetcode - 118                    pascal's triangle I
#include<vector>
using namespace std;
int main(){
    int n = 5;//this is the number of lines
   vector<vector<int> >v;//2d vector
   
   for(int i=0;i<n;i++){

    vector<int> a(i+1);//in here we are dynamically modifying the size of an single row same as the row number
    v.push_back(a);//creating a 1d vector then pushing into the 2d vector

     for(int j=0;j<=i;j++){//here j<=i means i+1 number of columns
        
        if(j==0 || j==i){//in first and last index store 1 as default
           v[i][j] = 1;
        }
        else{ //otherwise use the rule of pascal's triangle for the calculation
            v[i][j] = v[i-1][j] + v[i-1][j-1];
            //present ele = sum( previous v[i-1][j] + previous of previous v[i-1][j-1]);
        }
     }
   }

   for(int i=0;i<n;i++){
      for(int j=0;j<v[i].size();j++){
         cout<<v[i][j]<<" ";//prints the triangle's values
      }
      cout<<endl;
   }

}