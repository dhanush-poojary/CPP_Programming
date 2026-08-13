#include<iostream>//Leetcode - 31     Next permutations
#include<vector>
//if there are no possible next permutations just sort the array
using namespace std;
void reverse(vector<int>& v,int start,int end){//this function is for reversing the part/entire array
    int i = start;
    int j = end;
    while(i<=j){
        int temp  = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}
int main(){
  vector<int> v;//array declaration
  v.push_back(2);
  v.push_back(3);
  v.push_back(1);

  int n = v.size();

  int idx = -1;//this is a pivot element
  for(int i = n-2;i>=0;i--){//in this loop we are finding the pivot element and storing it's index in idx 
    if(v[i]<v[i+1]){//if any element is less then i+1's value then it is pivot element
        idx = i;
        break;
    }
  }  //-1 means there is not pivot element as the array is in descending order
   if(idx == -1) reverse(v,0,n-1);//if we do not found pivot element then reverse the entire array
   else{
      reverse(v,idx+1,n-1);//sorting the array after the index of pivot element till n-1
      int swaper = -1;//after 3 steps we have to perform another step which is  to
      //find the just greater element then our pivot element
      for(int i=idx+1;i<n;i++){//we are finding just greater element then pivot
          if(v[i]>v[idx]){
             swaper = i;//swapper will be just greater element 
             break;
          }
      }//swap the pivot element with just greater element then we find the next permutation
      int temp = v[idx];
      v[idx] = v[swaper];
      v[swaper] = temp;
   }
    
   for(int i=0;i<n;i++){//prints the next permutation
      cout<<v[i]<<" ";
   }
}