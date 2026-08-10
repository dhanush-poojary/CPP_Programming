#include<iostream>//printing the elements of stack in normal order
#include<stack>
using namespace std;
int main(){
  stack<int> st;//declaration of stack

  st.push(10);//intialization of stack
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  stack<int> temp;//another stack for storing the elements while printint the stack st
  
  while(st.size() != 0){
      cout<<st.top()<<endl;//printing the elements of stack
      int x = st.top();//it will be deleted so we need to store it in another stack
      st.pop();
      temp.push(x);//st's elements will be inserted in reverse order
    }
    cout<<"size = "<<st.size()<<endl;//all elements are deleted so size will be zero
  while(temp.size() != 0){//inserting the elements back into the st 
   int x = temp.top();//elements are inserted in original order itself
    st.push(x);
    temp.pop();
  }
  cout<<"size = "<<st.size();//size will be 5 
}