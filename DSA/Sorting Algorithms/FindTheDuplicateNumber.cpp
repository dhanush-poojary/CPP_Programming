 #include<iostream>//Leetcode 287                     Find the Duplicate Number
 #include<vector>
 using namespace std;
int main(){ 
  int arr[] = {3,1,3,4,2};//an array
  int n = sizeof(arr)/4;
   vector<int >nums(arr,arr+n);

   //method -1  //this is a wrong solution bcz we are modifying the array
        int i = 0;  //T.C is  O(n)
        while(i<n){
            int idx = nums[i];//the elements correct index
            if( nums[idx] != nums[i])//if the element present at that element's correct  index does not match then only swap
                swap(nums[idx],nums[i]);
            else{
               cout<<nums[i];//if it matches then it is duplicate element
               exit(0);
            }
        }
        //method -2 T.C is O(n)
        // int sum1 = n*(n-1);//sum of the range n
        // sum1/=2;
        // int sum2 = 0;
        // for(int i=0;i<n;i++){
        //     sum2+=nums[i];//sum of the array
        // }
        // return (sum2-sum1);//returns te duplicate element without modifing the array

       return -1;//does not run at any cost
}      