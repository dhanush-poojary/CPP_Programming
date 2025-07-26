#include<iostream>//reverive functions on stack display rev and forw, push at index, push at bottom
#include<stack>
using namespace std;

void displayrev(stack<int> &st){
  if(st.size() == 0) return;//when there is nothing left in stack then return
  cout<<st.top()<<endl;//print 
  int x = st.top();
  st.pop();//delete that element
  displayrev(st);//pass that stack where each elements will be getting lesser
  st.push(x);//insert it back in to the stack in original order 
}
//since x is a local variable so the value will be safe
void PushAtBottom(stack<int> &st,int val){//insert at the end in stack
  if(st.size() == 0) {//when stack reaches 0'th index or no element present
     st.push(val); //then insert the element so that it will be in bottom
     return;
  }
  int x = st.top();
  st.pop();//delete the lements
  PushAtBottom(st,val);//pass that stack where each elements will be getting lesser
  st.push(x);//insert them back in to the stack in original order 
}
void reverse(stack<int> &st,int val){
  if(st.size() == 1) return ;//when there is only 1 element left then return bcz we need that
  int x = st.top();
  st.pop();//delete the elements untill 1 left
  reverse(st,val);//call the function by passing the stack 
  PushAtBottom(st,x);//call the insert at bottom of stack function when there is 1 element present in our stack
  //the all the elements are insert at bottom so that the stack will be revered
}
void displayfor(stack<int> &st){
  if(st.size() == 0) return;//when there is nothing left in stack then return
  int x = st.top();
  st.pop();//delete the elements 1 by 1
  displayfor(st);//pass that stack where each elements will be getting lesser
  st.push(x);//then insert them back after class
  cout<<st.top()<<endl;//and print 
} 

int main(){
  stack<int> st;//declaration

  st.push(10);//intialization of stack
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);

  int val = 69;//an value to be inserted
  
  //displayrev(st); //for reverse display
  cout<<endl;
  //displayfor(st);  //for forward display
  //PushAtBottom(st,val);

  reverse(st,val); //this will reverse the stacks elements in reverse order itself
  displayrev(st);//for reverse display
}