#include<iostream>//To find the first negetive number in each window of size k if no negetive then store 0
#include<queue>
#include<vector>
using namespace std;
int main(){
   int arr[] = {0,-1,-2,3,4,-5,6,4,7,-8};//an array
   int k = 3;//window size
   int n = 10;
   queue<int> q;
    for(int i=0;i<n;i++){//only inserting the negetive numbers index's 
       if(arr[i] < 0) q.push(i);
    }
   vector<int> v;
   int i = 0;
  while(i<n-k){//untill the possible windows//here i reffer to the index of array's only negetive elements
      while(q.size() && q.front() < i) q.pop();//if the i is out of presnt windows range then  pop until it gets equal
      if(q.size()==0 || q.front() >= i+k) v.push_back(0);//if there is not negetive element in that window store 0 bcz
      else {
             v.push_back(arr[q.front()]);//if it is in the range then push that negetive element in resultant
      }
      i++;
    }

   for(int ele : v){
     cout<<ele<<" ";//for printing
   }

}