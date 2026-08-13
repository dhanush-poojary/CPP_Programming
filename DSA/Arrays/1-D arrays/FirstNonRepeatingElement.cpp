#include<iostream>//program for finding the first non- repeating element 
using namespace std;

int main(){
   int arr[] = {2,3,1,2,5,6,4,6,3};//an array
   int n = sizeof(arr)/4;//arrays size
    bool flag = true;//check mark if it is true then there is no non - repeating

   for(int i =0 ;i<n;i++){
     flag = false;//if this remains false till end then it is the non-repating element
      for(int j = i+1;j<n;j++){
         if(arr[i]==arr[j])//checks for repeating elements only
           {  flag  = true;
              break;
           }
      }
      if(flag == false) {//if flag remains false then arr[i] is itself the non - repeating
        cout<<arr[i];
         break;  
      }
      
   }
}
