#include<iostream>//To skip a character in the string using recursion
#include<string>
using namespace std;
void remove(string s,string str,int idx){ 
   
    if(idx == str.length()){//as the index reaches length of string then it should print the string
        cout<<s;
        return;//end the recursion
    }
     char ch = str[idx];//it will give each element or character of str
    if(ch == 'a') remove(s,str,idx+1);//if str[idx] is 'a' then dont do anything and skip idx+1
    else remove(s+ch,str,idx+1);//if not 'a' then append that character to s
    return;
}
int main(){
   string str = "amazone";//an string
     
   remove("",str,0);//pasing an empty string as we are storing our modified string in that itslef

}