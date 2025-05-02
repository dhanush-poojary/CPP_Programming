#include<iostream>//To find the maximum in the gievn string 
#include<string>//we are just coverting string into integer then finding maximum outof it
#include<climits>
using namespace std;

int main(){
   string str[6] = {"1223", "4334", "644"," 4364"," 663" ,"5563"}; //string array can hold a string in an index
   int n = 6; //size
  

   
   int max = INT_MIN;//this is for finding max
   int idx = -1;//this is for storing maximum element
   for(int i=0;i<n;i++){
       int num = stoi(str[i]);//using stoi function we are converting an (i'th index )string into integer
       if(max<num){//finding maximu
          max = num;
          idx = i;//stores index
       }
   }
   cout<<max<<idx;//prints

}