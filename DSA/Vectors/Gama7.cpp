#include<iostream>//program to merge 2 sorted array into another array
#include<vector>//method  - 2         //approach from back
using namespace std;
int main(){
    vector<int> v1;//1st array
     v1.push_back(1);
     v1.push_back(2);
     v1.push_back(3);
  
    vector<int> v2;//2nd array
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);

     int size = v1.size() + v2.size();//adding both array's size for 3rd array
     vector<int> res(size);//3rd array

     int i = v1.size()-1,j = v2.size()-1,k = size-1;
     //as this is back approach so we are keeping our pointers at i and j at end of 2 arrays
     //and pointer k will be at the end of resultant array
     while(k>=0){//here we are performing size-1 steps
        if(j>=0 && v2[j]>v1[i]){//here we are checking for maximum element of both array and storing it in res array
            //it will be stored at k'th index of result array
            res[k] = v2[j];
            j--;
            
        }
        else{//v1[i]>v2[j] this condition will be effected
            res[k] = v1[i];//it will be stored at k'th index of result array
            i--;
        }
        k--;
     }
    while(j>=0){//this loop is for copying the remaining elements in the second array
        res[k] = v2[j];
        j--;
        k--;
    } 

     for(int i=0;i<size;i++){//prints the resultant array
          cout<<"\t"<<res[i];
     }
}