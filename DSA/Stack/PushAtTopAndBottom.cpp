#include<iostream>//basic funtion on stack display,push at bottom , push at index
#include<stack>
using namespace std;
void display(stack<int> &st){//it will use 1 extra stack so that element remain the same after printing
   stack<int> temp;
  
  while(st.size() != 0){//storing the elements of st in temp
    cout<<st.top()<<endl;//it will print in normal form
    temp.push(st.top());
    st.pop();
  }
  while(temp.size() != 0){//storing them back in st itself
    st.push(temp.top());
    temp.pop();
  }
}
void PushAtBottom(stack<int> &st,int val){//this function will insert an element at the bottom of the stack
     stack<int> temp;
  
  while(st.size() != 0){//storing the elements of stack in another stack temp
    temp.push(st.top());
    st.pop();
  }
  st.push(val);//inserting a new element in st
  while(temp.size() != 0){//then storing the element back from temp to st
    st.push(temp.top());
    temp.pop();
  }
}
void PushAtPos(stack<int> &st,int val,int idx){//this function will insert a new element at any given index in stack
  if(idx > st.size()){
     cout<<"Invalid index!"<<endl;
     return;
  }
 stack<int> temp;
  while(st.size() > idx){//storing the elements in temp
    temp.push(st.top());
    st.pop();
  }
  st.push(val);//inserting the new element in st stack
  while(temp.size() != 0){//storing the elements back in st
    st.push(temp.top());
    temp.pop();
  }
}
int main(){
   stack<int> st;
   st.push(10);//intializing the stack
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
  
  int val = 69;//value of new element
  int idx = 2;//index where it will be inserted

   display(st);//for displaying
   cout<<endl;
   //PushAtBottom(st,val);

   //display(st);//for displaying
   //cout<<endl;
  
   PushAtPos(st,val,idx);
   display(st);//for displaying
}