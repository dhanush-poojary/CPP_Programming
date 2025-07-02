#include<iostream>//Finding maximum sum subarray of length n using sliding window
#include<climits>
using namespace std;
int main(){
   int arr[] = {7,1,2,5,8,4,9,3,6};//an array
   int n = sizeof(arr)/4;

   int k = 3;//sub array's length
   int prevSum = 0;
   for(int i=0;i<k;i++){//taking previous sum of first k'th window
     prevSum+=arr[i];
   }

   int maxSum = prevSum;//this will store maximum sum of our sub array
   int i=1,j=k;//starting and ending point of window

   int idx;
   while(j<n){//applying sliding window
       prevSum = prevSum + arr[j] - arr[i-1]; // adding j and substracting i-1 element as we are moving to next window
       if(maxSum<prevSum){//finding maximum 
           maxSum = prevSum;
           idx = arr[i];//storing that element
       }
       i++;//move to next window
       j++;//move to next window
   }
   cout<<"The starting element of window is : "<<idx<<endl;//first element of sub array
   cout<<"The maximum sum of subarray of  3 length is "<<maxSum;
}