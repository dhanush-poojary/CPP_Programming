#include<iostream>//Leetcode  - 42       Rain Water Trapping
#include<vector>                                                   //optimized
using namespace std;
int main(){
    vector<int> height;// question array 
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);

  int n = height.size();//calculating it's size
   vector<int> arr(n);//declaring another array for getting previous greatest element
   //as well as storing(overwritting) the minimum values in the same array

   int max = height[0];//initialize max with first index of array
   arr[0] = -1;//then initialize array's first index with -1 as we dont need it

   for(int i=1;i<n;i++){
      arr[i] = max;//storing previous greatest element as we are approching from the front side
      if(max<height[i]) max =height[i];//fiding maximum element
   }

 //here instead of another array we are making changes in this loop itself  
 max = height[n-1];//initializing max with last index of the array
 arr[n-1] = -1;//then initialize last index of this array by -1 as we dont need that

   for(int i = n-2;i>=0;i--){
      if(max<arr[i]) arr[i] = max;//here we are checking whether the current element of arr
      //is greater then max if it is then store max in arr because max<arr that will be treated as minimum element of 2
      if(max<height[i]) max = height[i];//finding maximum element
    }
  int water = -1;//this is for stroing the amount of water
  for(int x = 1;x<n-1;x++){//here in this loop we are checking whether the minimum value is greater then that of array 
         //if it not then there is a building if it is then water can be stored   
   if(arr[x]>height[x])
      water+=  arr[x] - height[x]; //minusing the minimum value with question array we get amount of water
   }
  
   cout<<"The Volume of is = "<<water<<endl;//prints the resultant  water


}