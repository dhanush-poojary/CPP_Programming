#include<iostream>//Fractional knapsack
#include<vector>
#include<algorithm>
using namespace std; 
bool cmp(pair<int,int>&p1 ,pair<int,int>&p2){ //it is for custom comparator sorting
    double r1 = (double)p1.first/(double)p1.second;
    double r2 = (double)p2.first/(double)p2.second;
    return r1>r2;  //if true then p1's value/weight ratio is best
                   //otherwise p2's value/weight ratio is best
}
double knapsack(vector<int> a,vector<int> b,int n,int w){
      vector<pair<int,int>> arr;
      for(int i=0;i<n;i++){
        arr.push_back({a[i],b[i]});//insert profit and weight array elements
      }
      sort(arr.begin(),arr.end(),cmp);//and sort the elemnts according to weight/value ration
//which will help us to sort array according to max profit with minimum weight 

      double profit = 0;
      for(int i=0;i<n;i++){
        if(arr[i].second <= w){//if weight is lesser then capacity
             profit += arr[i].first;//then add it's profit
             w-= arr[i].second;//and minus it's weight from capacity
        }
        else{//if weight is larger then capacity then we have to take fraction
//we will take half of wieight to add profit
          profit +=  ((double)arr[i].first/(double)arr[i].second)*w;//(profit/weight)*remaining capacity w
           w = 0;//we emptyed our capacity of knapsack then exit
            break;
        }
        
      }
      return profit;//return the total profit after fractions

}
int main(){
    vector<int> weights = {10,20,30};
    vector<int> profits = {60,100,120};
    int w = 50;
    int n = 3;

    cout<<knapsack(profits,weights,n,w);//prints how many profits can we earn  by w = 50 capacity of knapsak

}