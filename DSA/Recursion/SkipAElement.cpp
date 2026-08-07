#include<iostream>//To skip an element or number in array using recursion
#include<vector>
using namespace std;
void remove(vector<int>&v,int arr[],int idx){
    if(idx == 6){//it will end the recursion when idx becomes same as 6
         return;
    }
    int ele = arr[idx];//getting a idx'th element
    if(arr[idx] == 1) remove(v,arr,idx+1);//if it is 1 then skip and dont do anything
    else {
        v.push_back(arr[idx]);//if not then  push back it in vector v
        remove(v,arr,idx+1);//and idx+1 for going to next element
    }
}
int main(){
     int arr[6] = {1,4,1,2,3,1};//an array
     vector<int> v;//this is for stroing our modified array elements

     remove(v,arr,0);//function call
      for(int i=0;i<v.size();i++){
               cout<<v[i]; //printing modified array
          }
}