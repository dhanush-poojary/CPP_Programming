#include<iostream>//Leetcode 1402                        Reducing Dishes
#include<vector>
#include<algorithm>
//here we need to return the maximum satisfaction by reducing some dishes
using namespace std;
int  main(){  
   int arr[] = {-1,-8,0,5,-9};//array
   int n = 5;
   vector<int>satisfaction(arr,arr+n);

   sort(satisfaction.begin(),satisfaction.end());//sort the array
       vector<int> suf(n);
       suf[n-1] = satisfaction[n-1];
       for(int i=n-2;i>=0;i--){//taking suffix sum of that sorted array
          suf[i] = satisfaction[i]+suf[i+1];
       }
       int idx = -1;//this is a check mark for all negetive numbers as well as starting index where we are reducing
       for(int i=0;i<n;i++){
          if(suf[i]>=0){//first position numbers index
            idx = i;
            break;
          }
       }
       if(idx == -1) return 0;//if all the elements are negative then return 0 and do nothing
       int dishes = 0;
       int k = 1;//for multiplying
       for(int i = idx;i<n;i++){
          dishes+= (satisfaction[i]*k);//this will give maximum satisfaction by reducing those dishes
          k++;
       }
       cout<< dishes;//maximum satisfaction value
      }