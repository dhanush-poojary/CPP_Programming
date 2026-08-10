#include<iostream>//Leetcode    239           Sliding Window Maximum
#include<stack>
#include<vector>
using namespace std;
int main(){
  int v[] = {1,3,-1,-3,5,3,6,7};
  int n = 8;
   vector<int >arr(v,v+n);  //an array
   int k = 3;//size of the each window

   for(int ele : arr){//printing the elements
    cout<<ele<<" ";
   }
        vector<int> ans;

        int nxt[n];
        stack<int> st;

      nxt[n-1] = n;//insert n to last but not -1 bcz the array can consist negetive numbers
      st.push(n-1);// 
//find the next greater index of arr
    for(int i=n-2;i>=0;i--){
       while(st.size()>0 && arr[i] > arr[st.top()]) st.pop();
       if(st.size() == 0) nxt[i] = n;//insert n to index but not -1 bcz the array can consist negetive numbers
       else nxt[i] = st.top();
       st.push(i);//push i on stack
    }

    int j=0;
    //apply sliding windows
    for(int i=0;i<n-k+1;i++){//n-k+1 is the number possible windows
        if(j<i) j =i; //only if j's out of window
          int mx = arr[j];//maximum element of the previous window
          while(j < i+k){//traverse in the window
                mx = arr[j];//maximum element in that window
                if(nxt[j] > i+k) break;//if maximum index is out of this window then break
                j = nxt[j];//if it is in this window then take j to that index bcz we need to start next window from that index
              }
        ans.push_back(mx);//insert maximum element
    }
    
       
   cout<<endl;
    for(int ele : ans){//printing the elements
        cout<<ele<<" ";
    }

}