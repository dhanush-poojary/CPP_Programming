#include<iostream>//Program to find the unique element present in the array
using namespace std;//unique refferces to non repeating element

int main(){
   int arr[] = {2,2,1,1,3};//array initialization
   int n = sizeof(arr)/4;//size calculation
    int count ;

   for(int i = n-1;i>=0;i--){//we are executing the loop from backside
     count = 0;//if this gets >0 then it means there are duplicates
      for(int j = n-i;j>=0;j--){//we are executing the loop from backside
         if(arr[i]==arr[j])//checkes for duplicates
             count++;
      }
      if(count== 0){//if it is still 0 that means it's arr[i] is unique element
        cout<<arr[i]<<" is the unique element";
        break;//exit the loop
      }
      }
      if(count!=0) cout<<"There is not unique element!";//if count>0 then there is no unique element
   }
  

