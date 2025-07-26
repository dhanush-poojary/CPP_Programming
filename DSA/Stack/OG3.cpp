#include<iostream>//Previous greater element
#include<stack>//T.C O(n) and S.C O(n) but it is better in terms of brute force
using namespace std;
int main(){
   int arr[6] = {2,1,5,6,2,3};//an array
   int n = 6;

   for(int ele : arr){//printing 
    cout<<ele<<" ";
   }
   cout<<endl;
   int brr[n];//another array to store previous greater

  brr[0] = -1;//there is not greater for first index
   stack<int> st;
   st.push(arr[0]);//insert the 0'th element of array into the stack

   for(int i=1;i<n;i++){//here traveling in normal order itself
  
      while(st.size()>0 && arr[i]>st.top()) st.pop();//pop the elements untill the greater then arr[i] is found
      if(st.size() == 0) brr[i] = -1;//if stack is empty then there is no element greater then arr[i]
      else brr[i] = st.top();//if there is then insert it into brr
      st.push(arr[i]);//and push all the elements of arr in stack
   }

    for(int ele : brr){
    cout<<ele<<" ";//printing
   }
  }  