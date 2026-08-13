#include<iostream>//Leetcode - 1    Two sum
//program to find the doublet's (pair) of givem array for the x's value 
#include<vector>
using namespace std;
int main(){
   vector<int> v = {1,3,2,4,3,4,1,6};//vector initialized with elements only
   int n = v.size();

   int x;
   cout<<"Enter the target: ";
   cin>>x;//this is our target number for which we are finding our doublets
   cout<<"These are doublets of 7 :"<<endl;
   for(int i=0;i<n-1;i++){//this loop checks 1 number with each element of the array
      for(int j=i+1;j<n;j++){//this will traverse through each element from next element of i'th loop
         //so that is does not repeat the combinations or pairs  
         if(v[i] + v[j] == x){//we are check ele of i and j 's sum wheather it is equal to the
            //target x or not 
              cout<<"("<<i<<","<<j<<")"<<endl;//prints all the pair
           }
      }
   }


}