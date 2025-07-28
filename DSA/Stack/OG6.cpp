#include<iostream>//Leetcode     1944             Number of Visible People in a Queue
#include<stack>
#include<vector>
//here we need to take next greater index of arr
using namespace std;
int main(){
   int arr[6] = {10,6,8,5,11,9};//an array
   int n = 6;
   for(int ele : arr){//printing the elements
    cout<<ele<<" ";
   }
        vector<int> nxt(n);
        stack<int> st;
        nxt[n-1] = 0;//there is no person after last one to see
        st.push(arr[n-1]);//push the last element
        for(int i=n-2;i>=0;i--){
           int count = 0;
              while(st.size()>0 && arr[i]>st.top()){
                  st.pop();
                  count++;//count the elements smaller ten arr[i]
              }
              if(st.size() == 0) nxt[i] = count; //when all elements are smaller then arr[i]
              else nxt[i] = count+1;//+1 is 1 element is left that can be seen by the i'th person
              st.push(arr[i]);//push on to stack
        } 

   cout<<endl;
    for(int ele : nxt){//printing the elements
        cout<<ele<<" ";
    }

}