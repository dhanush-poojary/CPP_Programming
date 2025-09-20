#include<iostream>//Sort a 'k' sorted array (nearly sorted array)
#include<queue>
using namespace std;
int main(){
   int arr[] = {6,5,3,2,8,10,9};//an array that is nearly sorted
   int n = sizeof(arr)/4;
   int k = 3;//maximum possible distance of elements from sorted place
   
   for(int ele : arr) cout<<ele<<" ";//printing
   
   priority_queue<int, vector<int>,greater<int> >pq;
 
   int idx = 0;
   for(int i=0;i<n;i++){
       pq.push(arr[i]);//insert each element of array into the min heap

       if(pq.size()>k){//when size gets k+1 then
        arr[idx] = pq.top();//insert that minimun element at idx'th index
         pq.pop();//remove that element
          idx++;//move to next index
      } 
   }

   while(pq.size() !=0){//untill min heap gets empty
    arr[idx] = pq.top();//insert all elements of pq into arr
         pq.pop();//and remove it from heap
        idx++; //move to next index
      
   }
    
   cout<<endl;
     for(int ele : arr) cout<<ele<<" ";//printing
}