#include<iostream>//Leetcode  - 42       Rain Water Trapping
#include<vector> //using 3 extra arrays
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

   vector<int> prev(n);//declaring another array for getting previous greatest element

   int max = height[0];//initialize max with first index of array
   prev[0] = -1;//then initialize array's first index with -1 as we dont need it
   for(int i=1;i<n;i++){
      prev[i] = max;//storing previous greatest element as we are approching from the front side
      if(max<height[i]) max =height[i];//fiding maximum element
   }
  
   vector<int> next(n);//declaring another array for getting next greatest element

   max = height[n-1];//initializing max with last index of the array
   next[n-1] = -1;//then initialize last index of this array by -1 as we dont need that
   for(int i = n-2;i>=1;i--){
      next[i] = max;//storing the next previous element as we are approaching from back side
      if(max<height [i]) max = height[i];//finding maximum element
   }
   vector<int> mini(n);//another array for storing minimum values of both prev and next arrays
   for(int j=0;j<n;j++){
      mini[j] = min(prev[j],next[j]);//we are storing minimum of both arrys element into mini array
   }
   int water = 0;//this is for stroing the amount of water
   for(int x = 1;x<n-1;x++){//here in this loop we are checking whether the minimum value is greater then that of array 
   //if it not then there is a building if it is then water can be stored
       if(mini[x] > height[x]){
         water+=  mini[x] - height[x] ; //minusing the minimum value with question array we get amount of water
       }
   }
   cout<<"The Volume of is = "<<water<<endl;//prints the resultant  water
}