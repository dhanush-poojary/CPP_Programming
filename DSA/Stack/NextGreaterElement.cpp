#include<iostream>//Next greater element
#include<stack>//T.C O(n) and S.C O(n) but it is better in terms of brute force
using namespace std;
int main(){
   int arr[6] = {2,1,5,6,2,3};//an array
   int n = 6;
   for(int ele : arr){//printing the elements
    cout<<ele<<" ";
   }
   cout<<endl;
    stack<int> st;
    int brr[n];//we need an array to store next greatest
    brr[n-1] = -1;//there is not next to last element
    st.push(arr[n-1]);//insert the last element of arr in stack

    for(int i=n-2;i>=0;i--){//we are traveling in the reverse order in the array
       while(st.size()>0 && arr[i] > st.top()) st.pop();//pop untill greater element will be at top

       if(st.size() == 0) brr[i]= -1;//if stack is empty then insert -1 bcz there is not element greater then this
       else brr[i] = st.top();//if there is greater element then insert it into array
       st.push(arr[i]);//all the elements of array in stack 
    }
   
    for(int ele : brr){//printing the elements
        cout<<ele<<" ";
    }

}