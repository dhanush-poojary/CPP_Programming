#include<iostream>//Remove concecutive duplicates from the string
#include<stack>//an string with continous duplicates we need to remove those in O(n) T.C
#include<algorithm>
using namespace std;
int main()
{   stack<char>st;//this will be require to store all the distinct characters only

    string s = "aaabbcdeeff";//an string

    int len = s.length();
    

    st.push(s[0]);//if 0 size then we can not acces the top even if we need to check a condition it will be an error
    for(int i=1;i< len;i++){
       if(st.top() != s[i]) st.push(s[i]);//only include all distacnt elements in side the stack if
       //if it already exist then dont push
    }
         
    
    s ="";//empty string 
    for(int i=st.size();i>0;i--){//then insert the stack elements back into the string 
      s+= st.top();//only distinct elements in stack //pass that stack where each elements will be getting lesser
      st.pop();
    }

    reverse(s.begin(),s.end());//then reverse the string bcz in stack it will stored in reverse order
    cout<<s;//an string with no duplicates

}
