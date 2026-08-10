#include<iostream>//Leetcode   155                     Min Stack
#include<stack>
#include<climits>
using namespace std;
class MinStack{
  public:
    stack<long long>st;
    // stack<int>min;  //for method 2
    int min;
    MinStack() {
        min = LLONG_MAX;//method 4: which does not uses any space or either time just uses fake or dummy values in variables
        //include climits to use LLONG_MAX , we need to multiply INT_MIN value also if it is input
      }

    //method 2: using 1 extra stack but reduced time complexity//T.C(n) and S.C(n)
    // void push(int val) {
    //      st.push(val);//push the element val
    //      if(min.size() == 0 || val<min.top()) min.push(val);//if val< min's top then only push val
    //      //val>= st.top()
    //      else min.push(min.top()); ///otherwise, push min's top in min again bcz it is still min or < val
    // }

    void push(int val){//T.C(1) and S.C(1)
         if(st.size() == 0){//when stack is empty directly push val and min = val
             st.push((long long)val);
             min = val;
         }
         else if(val>= min) st.push((long long)val);//if val is bigger then min then also push val
         else{//val < min if it is then 2*val-min it will give a dummy value lesser then min
               st.push(2*(long long)val-min);//inserting a dummy value
               min = (long long)val;//make min = val
         }
    }
    // void pop() {//T.C(1) and S.C(1)
    //      st.pop(); //pop the element
    //      min.pop();//even pop from the min stack
    // }
    void pop(){//T.C(1) and S.C(1)
          if(st.top()>= min) st.pop();//it is not a dummy value
          else{//st.top() < min it is an dummy value is present
           //before popping the top we have to retrive the old minimum 
           long long oldmin = 2*(long long)min - st.top(); //2*min-top we ge previous min value
           min = oldmin;//store it
           st.pop();//then pop the dummy value or a element of stack
          }

    }
    // int top() {//T.C(1) and S.C(1)
    //     return st.top();//just return top
    
    // }
    int top(){//T.C(1) and S.C(1)
        if(st.top() < min) return (int)min;//it means the it is dummy value so min will have that value
        else return (int)st.top();//it is not a dummy value so return it 
    }
    // int getMin() {
    //  //method :1 using 1 extra stack high time comlexity T.C(n) and S.C(n)
    //   //    int mn = INT_MAX;
    // //    stack<int>temp;//make a extra stack
    // //  while(st.size()!= 0) //empty the stack into temp stack and then maintain a min variable
    // //  {  mn = min(mn,st.top());
    // //    temp.push(st.top());
    // //    st.pop();
    // // }
    // // while(temp.size()!=0){//then  again empty the temp stack into stack
    // //     st.push(temp.top());
    // //     temp.pop();
    // // }
    // // return mn;//then return min 

    //   // return (min.top());  //this is of method 2
    // }
    int getMin(){//T.C(1) and S.C(1)
        return min; //just return min variable for method 4
    }
};
int main(){
  //["MinStack","push","push","push","getMin","pop","top","getMin"]
  // [[],[-2],[0],[-3],[],[],[],[]]
    MinStack s;
    s.push(10);//insertion
    s.push(5);
    s.push(4);
    cout<<s.getMin()<<endl;//current min is 4
    s.pop();//pop 4
    cout<<s.top()<<endl;//top is 5
    cout<<s.getMin()<<endl;//min is also 5

}
//method 3: T.C O(n) and S.C(1)
//Method 3: implement stack using vector push pop and top function will remain same
 //but in getmin function just traverse the vector and find the  min value and return