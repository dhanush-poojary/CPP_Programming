#include <iostream>//Palindrome using recursion
using namespace std; 
bool palin(string str,int i,int j){//here we applied same logic as iterative solution
    if(i>j) return true; //when our half of the string is checked then return true
    
    if(str[i]!=str[j]) return false;//if beg!=end then return false
    else return palin(str,i+1,j-1);//call i+1 and j-1 as the iterative solution
}
int main()
{  string str = "racecar";//original string
    //if it returns true then it is a palindrome or else it it not
    if(palin(str,0,str.length()-1)) cout<<"Is a palindrome!";
    else cout<<"Is not a palindrome!";
 
}