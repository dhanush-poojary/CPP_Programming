#include<iostream>//Basic implementation of stack
#include<stack>
using namespace std;
int main(){
  stack<int> st;//declaration of stack

  st.push(10);//intializing the elements since 10 is inserted first so it will be at bottom
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  // cout<<st.top()<<endl;  //it will print 50
  // cout<<st.size()<<endl; //it will print the size of stack     

  // st.pop();//top element 50 will be deleted
  // cout<<st.top()<<endl;  //top 40 will be printed

  // cout<<st.size()<<endl;  //it will print the size of stack 
  // cout<<endl;

  //we need to delete an element to travel in the stack so we need to store it another stack or array
  while(st.size() > 0){
    cout<<st.top()<<endl;//print the top element of each time
    st.pop();//it will remove top elemenet 
  }
}