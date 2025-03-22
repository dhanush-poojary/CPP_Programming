#include<iostream>//program to find occurrences of elements present in vector
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,1,6,7,1,6};//an initialized vector

     int idx = -1;
    //method 1 
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==1){//we are finding the last index of 1 
    //         idx = i; //last index of 1 will be stored
    //     }
    // }
    // cout<<idx;

    //method 2                    //this is a best method
    for(int i = v.size();i>=0;i--){//here we are traversing from back side
        if(v[i] == 1){//from last first 1's index will be last index of 1
            idx = i;
            cout<<idx;
            break;//break out from loop
        }
    }
  
}