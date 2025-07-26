#include<iostream>//Stock span problem
#include<stack>
//here we need to next greater index of arr
using namespace std;
int main(){
   int arr[] = {100,80,60,81,70,60,75,85};//an array
   int n = sizeof(arr)/4;//size

   for(int ele : arr){
    cout<<ele<<" ";//printing
   }
   cout<<endl;

   int brr[n];
  brr[0] = 1; //insert 1 instead of -1 bcz 1 stock space -1 can not

   stack<int> st;

   st.push(0);
   for(int i=1;i<n;i++){
      while(arr[st.top()] <= arr[i]) {//pop the elements of stack until greater then arr[i] is found
        st.pop();
      }
      if(st.size() == 0) brr[i] = 1;//insert 1 instead of -1 bcz 1 stock space -1 can n
      else brr[i] = st.top();//we get next greater index here
      brr[i] = i-brr[i]; //but we need deference between arr[i] and brr[i] 
      st.push(i);//push i to stack
   }
    for(int ele : brr){
    cout<<ele<<" ";//printing
    }
  }  