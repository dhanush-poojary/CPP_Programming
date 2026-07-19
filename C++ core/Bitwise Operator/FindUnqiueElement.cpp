#include<iostream>//To find Unique element in an array using bitwise operator XOR
using namespace std;
int main(){//Time complexity is O(n)
     int arr[]  = {4,4,1,3,2,3,5,1,2};//an array

     int n = 9;
     int res = 0;

     for(int i=0;i<n;i++){
        res = res ^ arr[i];//by taking XOR the if we get same values then res gets zero
        //if we get different value then first value will be store in res
     }    
    cout<<"The unique element is "<<res;//the left out number in res will be unique element 
                                       //bcz if any different it can not be changed
      return 0;
}