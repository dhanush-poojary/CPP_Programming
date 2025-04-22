#include<iostream>//leetcode - 119              pascal's triangle II
#include<vector>
 using namespace std;
 int main(){
   
         int n = 3;//this is the number of lines just this lines value must be retrived
         vector<vector<int> >v;//2D array
        
         vector<int> a;//1D array for resultant
         for(int i=0;i<=n;i++){//as we need to include n also because we need only the n'th row's values

          vector<int> res(i+1);//in here we are dynamically modifying the size of an single row same as the row number
          v.push_back(res);//creating a 1d vector then pushing into the 2d vector

           for(int j=0;j<=i;j++){//here j<=i means i+1 number of columns
              
              if(j==0 || j==i){//in first and last index store 1 as default
                 v[i][j] = 1;

                 if(i==n) a.push_back(v[i][j]); //if it is the n'th index then store all elements in 1d array
              }
              else{
                   //otherwise use the rule of pascal's triangle for the calculation
            v[i][j] = v[i-1][j] + v[i-1][j-1];
            //present ele = sum( previous v[i-1][j] + previous of previous v[i-1][j-1]);
                  if(i==n) a.push_back(v[i][j]);//if it is the n'th index then store all elements in 1d array
              }
           }

         }
         for(int k=0;k<a.size();k++){
            cout<<a[k]<<" ";//prints the 1D vecctor which has stored the values of n index of trinagle
         } 
       
 
 }