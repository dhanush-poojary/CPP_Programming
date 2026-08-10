#include<iostream>//Reversing the elements of stack using 3 methods 
#include<stack>
#include<vector>
using namespace std;
class Node{//this will be require to create a linked list
  public:
  int val;
  Node* next;
  Node(int val){
     this->val = val;
     next = NULL;
  }
};
int main(){
  stack<int> st;

  st.push(10);//dclaration and initialization of stack
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);


  //Method: 1 Reversing the elements of stack using 2 extra stacks T.C O(n) and S.C(n) 
  // stack<int> temp;
  // stack<int> strev;
  
  // while(st.size() != 0){//storing the elements in 1st exrta stack
  //   int x = st.top();
  //   st.pop();
  //   temp.push(x);
  // }
  // while(temp.size() != 0){//storing it again in 2nd extra stack
  //   int x = temp.top();
  //   temp.pop();
  //   strev.push(x);            
  // }
  // while(strev.size() != 0){//then storing it once again in st in our main stack so that it will be in reverse
  //   int x = strev.top();
  //   strev.pop();
  //   st.push(x);
  // }
  // while(st.size() != 0){
  //     cout<<st.top()<<endl;//printing
  //     st.pop();
  // }

  //Method: 2 Reversing the elements of stack using 1 extra array T.C O(n) and S.C(n)
  //   vector<int> v(st.size());
  //   int i = 0;
  //   while(st.size() != 0){//storing the elements of stack in an array in 0 to n indexing
  //       v[i] = st.top();
  //       st.pop();
  //       i++;
  //   }
  //    i = 0;
  //   while(i < v.size()){//then again pushing back it in stack in 0 to n indexing
  //        st.push(v[i]);
  //        i++;
  //   }
  //    while(st.size() != 0){
  //     cout<<st.top()<<endl;//then it will be in reverse order
  //     st.pop();
  // }

 //Method: 3 Reversing the elements of stack using 1 extra linked list T.C O(n) and S.C(n)
    Node* a = new Node(-1);
  Node*temp = a;
  while(st.size() != 0){//here we are generating a new linked list with create a new node for each element
      Node*C = new Node(st.top());
      st.pop();
      temp->next = C;
      temp = C;
  }//aftet this an linked list will be formed
  temp = a->next;
  while(temp != NULL){//then we can insert or push back them in stack from head to tail
      st.push(temp->val);
      temp = temp->next;
  }//so that the element will be in reversed order
  while(st.size() !=0){
     cout<<st.top()<<endl;//printing the stack
     st.pop();
  }
   
}