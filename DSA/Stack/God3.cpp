#include<iostream>//Printing the elements of stack in reverse order
#include<stack>
using namespace std;
int main(){
  stack<int> st;//declaration of stack

  st.push(10);//inserting the elements
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  stack<int> temp;//another stack will be created
  
  while(st.size() != 0){//it will only insert elements in temp stack
    int x = st.top();
    st.pop();
    temp.push(x);
  }
  while(temp.size() != 0){//printing the elements while inserting back in st
    int x = temp.top();//poping from temp
    st.push(x);//inserting back to st 
    cout<<st.top()<<endl;
    temp.pop();//deleting elements from temp
  }
}