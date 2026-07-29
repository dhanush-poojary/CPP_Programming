#include<iostream>    //Leetcode  1710 Maximum Units on a Truck
#include<vector> 
#include<algorithm>
using namespace std;
 bool cmp(vector<int>a,vector<int> b){
         return a[1]>b[1];//return true if units of a is greater then units of b
    }
int main(){
vector<vector<int>> boxTypes = {{1,3},{2,2},{3,1}};//0 is weight of box and 1 is profit of box
 int truckSize = 4;//maximum capacity of truck

      sort(boxTypes.begin(),boxTypes.end(),cmp);//sort according to whoose no of units are lesser to greater
         int profit = 0;
         for(int i=0;i<boxTypes.size();i++){
             if(boxTypes[i][0] <= truckSize){//if weight is lesser then current truck's capacity 
               profit += boxTypes[i][0]*boxTypes[i][1];//then add the total profit of that box
               truckSize-=boxTypes[i][0];//minus weight by capacity
             }
             else{//if weight is greater then current capacity then 
                 profit += truckSize*boxTypes[i][1];//here we can not pick all the unit of boxs bcz the truck size is not that much we can only pick till amount of truck size
                 truckSize = 0;//make the capacity as zero bcz all capacity is utilized by box
 
             }
             if(truckSize ==0) break;//exit after finished 
         }

         cout<<profit;//profit after  putting box's into truck (1 * 3) + (2 * 2) + (1 * 1) = 8
}