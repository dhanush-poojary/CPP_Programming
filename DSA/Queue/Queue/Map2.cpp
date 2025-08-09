#include<iostream>//Leetcode     232           Implement Queue using Stacks
#include<stack>
//here we need to create a queue using stack 
using namespace std;
class MyQueue{
  public:
  stack<int> st;
    stack<int> ts;
      int x ;//it is for maintaing the front elements or pop function
    MyQueue() {
        x = 0;
    }
    
    void push(int val) {//it will insert the elements into the queue of stack
        st.push(val);
    }
  
    int pop() {
        while(st.size() > 0){//we need to empty the stack into another stack
             ts.push(st.top());
             st.pop();
        }
        if(x == -1) x = ts.top();//it is for front() or peek function where no need to delete element
        else {
            x = ts.top();//it is for pop() so 
            ts.pop();//deleted front() element
        }
        while(ts.size() > 0){//then insert the elements back into stack
            st.push(ts.top());
            ts.pop();
        }
        return x;
    }
    
    int peek() {
         x = -1;//we dont need to delete here so we maintained a mark -1 menas empty the stack and re insert the same
        pop();
        return x;//it will return front() ele
    }
    bool empty() {//it will tell whether queue is empty or not
        if(st.size() == 0) return true;
        else return false;
    }
};
int main(){
   MyQueue q;
   q.push(10);//inserting the elements
   q.push(20);
   q.push(30);

   cout<<q.peek()<<endl;//it will print front element
   cout<<q.pop()<<endl;//it will pop front elemet
   cout<<q.peek()<<endl;//it will print front element
   
}