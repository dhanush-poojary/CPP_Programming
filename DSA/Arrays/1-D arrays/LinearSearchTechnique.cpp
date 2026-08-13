#include<iostream>//Basic linear search technique for searching elements in an array
using namespace std;
int main(){
   int arr[] = {1,2,6,75,84,34,72,54,98,68};//an initialized array
   int n = sizeof(arr)/4;//we can findout the size of any array like this
   int x;
   cout<<"Enter the search element: ";
   cin>>x;//user input of search element

   for(int i=0;i<n;i++)//this loop will traverse through each element of the array
   {
      if(arr[i]==x){//it will check if  each array element is equal to the x's cakue
        cout<<"The search element "<<x<<" is present in "<<i<<" index";
        //prints the search element and it's index
      }
   }    
     
}