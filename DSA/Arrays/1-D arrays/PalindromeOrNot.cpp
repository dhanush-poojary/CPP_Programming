#include<iostream>//Program to check whether the array is a palindrome or not
using namespace std;
int main(){
  int arr[]  = {1,3,2,1,2,3,1};//array initialization
  const int n = sizeof(arr)/4;//array size calculation
  int brr[n];//another array for a copy
   
  for(int i=0;i<n;i++){//here we are reversing the array and at the same time storing it in brr
     brr[n-i-1] = arr[i];
  }
  bool flag = false;//check mark for palindrome
  for(int i=0;i<n;i++){
    if(arr[i]!=brr[i])//if any element does not matches with both arrays then it is not palindrome
     flag = true;//check mark not a palindrome
  }
  if(flag == true) cout<<"The array is not a palindrome!";
  else cout<<"The array is a palindrome";

}