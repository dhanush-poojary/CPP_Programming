#include<iostream>//balanced brackets
#include<stack>//we need to check whether is a well formed or not
using namespace std;
int main()
{   stack<char>st;
    string s = "(()()(";//(())()      //an string

    int len = s.length();
    if(len % 2 != 0){//if the string is of odd element is not a balcanced bcz no of opening should be equal to no of closing bracket
         cout<<"False";
         return 0;//exit
    }

    for(int i=0;i< s.length();i++){

         if(s[i] == '(')  st.push('(');//push  all '(' brackets
         else {//if(s[i] == ')') then 
            if(st.size() == 0){//see if there is a opening bracket in stack if no then return false
              cout<<"False";//bcz with out '(' it is impossible to be ')' bracket to exist in balanced
                return 0;
            }
            else st.pop(); //delete the opening bracket bcz it is a pair to ')' 
            }
            }

    if(st.size() == 0) cout<<"true";  //if the stack becomes empty after traversing the string then it is balanced
    else cout<<"false";//otherwise not


}
