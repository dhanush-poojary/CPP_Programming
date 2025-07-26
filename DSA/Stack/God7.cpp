#include<iostream>//Stack implementation using array or vector
#include<vector>//using vector we can make a stack of unlimited size but not in arrays
using namespace std;
class stack{
    public:
    //int arr[5];//in vetors elements are inserted and deleted from the back so it is like stack
    vector<int> arr;
    int idx;//this for maining the indexing of elements it accts like top pointer
    stack(){
       idx = -1;
    }
    void push(int val){//it will insert an element at top of stack
      // if(idx == 4){
      //   cout<<"Stack is full"<<endl;
      //   return;
      // }
      //  idx++;
      //  arr[idx] = val;
      arr.push_back(val);//no need to maintaing indexing in vector
    }
    void pop(){
      //if(idx == -1)
      if(arr.size() == 0){//underflow
        cout<<"Stack is empty!"<<endl;
        return;
      }
      //idx--
       arr.pop_back();//no need of maintaining index
    }
    int top(){
      //if(idx == -1)
      if(arr.size() == 0){//underflow
        cout<<"Stack is empty!"<<endl;
        return -1;
      }
      //return arr[idx];
       return arr[arr.size()-1];//it will print the last element of the vector or top
    }
    int size(){//it will print the size of vetor or stack
       //return idx+1;
       return arr.size();
    }
    void display(){
       for(int i=arr.size()-1;i >= 0;i--){//printing the elements of stack 
           cout<<arr[i]<<"->";
       } 
       cout<<"NULL"<<endl;
    }
};
int main(){
  stack st;
  st.push(10);//inserting the elements in to the stack
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
  st.push(60);

  cout<<st.size()<<endl;//it will print the size of stack
  cout<<st.top()<<endl;//it will display the element present at top
  st.display();//for displaying stack
  
}