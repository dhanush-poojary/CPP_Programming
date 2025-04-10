#include<iostream>//leetcode - 88      Merge Sorted Array
#include<vector>//here we are not using extra array, we are modifying 1st array itself
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{       //we are using 3 pointer approach 
    //i will be at last index of first array
    //j will be at last index of second array
    //k will be at last M+n -1 th element of first array
    int i=m-1,j=n-1,k=m+n-1;

    while(j>=0 && i>=0){//i>=0 means we are approaching from last index of the array
  //j>0 if the test case is num1=1 and num2 = 0 otherwise it will be failed
      if(nums1[i]>nums2[j] ){//we are checking for maximum element from 2 arrays at a time
           //it means first array it self has larger element
          nums1[k] = nums1[i];//storing that element at the end  of array
                i--;//as it is sorted and it is in place decreament i by 1
         }
        else{//nums2[j]>nums1[j] it means second array has larger element
             nums1[k] = nums2[j];//store that element in last m+n's index
                  j--;//as it is sorted and it is in place decreament i by 1
         }
          k--;//at each iteration of while k will be reducing as one element will be sorted at time
        }
        while(j>=0){//this loop will only for certain test cases like num1 = 0 and num2 = 1 etc
              nums1[k] = nums2[j]; //stores any element present nums2 into nums1 
               j--;//as it contains 1 element we dont need the loop to execute anymore
               k--;
            }   
            }        
int main(){
    vector<int>v(6); //array declared with size  and it stored 0 as default values
    v[0] = 1;//inserting some elements
    v[1] = 2;
    v[2] = 3;
    vector<int>v1;//array declared without size
    v1.push_back(2);//insering elements
    v1.push_back(5);
    v1.push_back(6);
    
    merge(v,3,v1,3);//function call
    //3 stands for number of elements present in each array only number of element not size
   
    for(int i=0;i<v.size();i++){
        cout<<"\t"<<v[i];//prints array elements
    }
}
   