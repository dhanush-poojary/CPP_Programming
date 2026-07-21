#include<iostream>//optimized code for finding the duplicate element in the array
#include<vector>
//here optimising means in terms of time and space the code must be efficient
using namespace std;
int main(){
   int arr[] = {6,3,2,4,1,7,1,5};//an array
   int n = sizeof(arr)/4 -1;//here -1 in size beacause the 1 element is repeated

//this code is best in terms of time complexiy which is O(n)
  //    vector<int> v(n,0);//in this method we are creating an extra array
//    for(int i=1;i<=n;i++){//traveling in that array only 1 time
//       int temp = arr[i];//geting that element to increament that index
//       if(v[temp] == 1){//checking whether it is already 1 if it is then it is repeated element
//         cout<<temp<<" is the dublicate element";
//         break;//break out of the loop
//       }
//       v[temp]++;//increaments the index of temp which is the element inside the main array
      
//    }
//this is best in terms of both time as well as space complexity
   int s =0;
   for(int i=0;i<=n;i++){//we are adding the sum of each element
      s+= arr[i];//in the s variable
   }
   int sum = n*(n+1)/2; //this is for calculating the sum of specific range which is size of array


   cout<<s-sum;//we minusing sum of elements with the sum of range of  n we get that duplicate element
 

}