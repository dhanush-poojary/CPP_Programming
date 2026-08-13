#include<iostream>//Optimized linear search which will search for array element
using namespace std;
int main(){
   int arr[100];
   int n = 10;//size of the array is 10
   cout<<"Enter 10 elements: ";
   for(int i=0;i<n;i++){//this is for taking array element input
     cin>>arr[i];
   }

   int x;
   cout<<"Enter the search element: ";
   cin>>x;//user input of search element
    
   bool check = true;//this is for reducing the number of operations if we found the search
   //element earler so we are breaking out of the loop
   for(int i=0;i<n;i++)//this loop will traverse within each element of the array
   {
      if(arr[i]==x){//we are check if our current array's element is equals to x's value
        cout<<"The search element "<<x<<" is present in "<<i<<" index";//prints result
        check = false;//this means search element is already found 
      }
      if(check == false){//if element is found then not to unnecsarily travel futher
         break;//exit the loop
      }
     }    
     
}