#include <iostream>//To find the maximum element in an array using recursion
using namespace std; 
int maxi(int arr[],int n,int maximum){
    if(n == 0) {//our base case
      //  cout<<maximum; //if we want to print we can
        return maximum;
    }
    maxi(arr,n-1,(max(arr[n],arr[n+1])));//it will check n'th and n+1'th element for maximum
}
int main()
{  int arr[] = {4,3,6,2,4};//an array with it's size
   int n = sizeof(arr)/4;

   cout<<maxi(arr,n-1,0);//minus 1 from n is bcz we are checking n+1'th element in recursion funtion
    //it will print the max element
}