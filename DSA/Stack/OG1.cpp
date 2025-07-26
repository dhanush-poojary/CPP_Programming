#include<iostream>//Leetcode   20                  Valid Parentheses
#include<stack>
using namespace std;
//since in this question there are 3 different paranthesis so make a condition for each
bool isvalid(string s){
       stack<char>st;

        for(int i=0;i<s.length();i++){
            if(s[i] == '(') st.push('(');//push if it is a '('
            else if(s[i] == ')'){//then check for opening
                 if(st.size() == 0) return false;//there is no opening then return false
                 else if(st.top() == '(') st.pop();//if there is opening then pop it
                 else return false;//it there is any another bracket then also return false
            }
            if(s[i] == '[') st.push('[');//push if it is a '['
            else if(s[i] == ']'){//then check for opening
                 if(st.size() == 0) return false;//there is no opening then return false
                 else if(st.top() == '[') st.pop();//if there is opening then pop it
                 else return false;//it there is any another bracket then also return false
            }
             if(s[i] == '{') st.push('{');//push if it is a '{'
            else if(s[i] == '}'){//then check for opening
                 if(st.size() == 0) return false;//there is no opening then return false
                 else if(st.top() == '{') st.pop();//if there is opening then pop it
                 else return false;//it there is any another bracket then also return false
            }
        }
        if(st.size() == 0) return true;//if the stack is empty then it means all the opening brackets are paired with closing
        return false;//not valid paranthesis
}
int main(){   
    string s = "()[]{}" ; //an string           
    int len = s.length();
        if(len%2 != 0) {//if the string is of odd element is not a balcanced bcz no of opening should be equal to no of closing bracket
         cout<<"False";
         return 0;//exit
      }
    if(isvalid(s)) cout<<"true";//it is a well formed 
    else{//it is not
         cout<<"false";
    }  
       
}