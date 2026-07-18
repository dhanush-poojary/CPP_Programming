//Leetcode 150 Evaluate Reverse Polish Notation

class Solution {
public:
    void cal(stack<int> &st,string ch){
        int B = st.top();
        st.pop();
        int A = st.top();
        st.pop();
        if(ch == "+") st.push(A+B);
        if(ch == "-") st.push(A-B);
        if(ch == "*") st.push(A*B);
        if(ch == "/") st.push(A/B);        
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") 
             cal(st,tokens[i]);
             else{
                st.push(stoi(tokens[i]));
             }
        }   
     return st.top();
    }
};