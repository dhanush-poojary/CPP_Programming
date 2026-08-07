#include <iostream>//To print the permutations of string using recursion
#include<vector>
using namespace std; 
void perm(string ans,string str){
    if(str == ""){//when str becomes empty it means character's are append into ans including null string
        cout<<ans<<endl;//print it
        return;
    }
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        string left = str.substr(0,i);//it will give the left substring
        string right = str.substr(i+1);//it will give the right substring
        perm(ans+ch,left+right);//append ch to and  and left and right substring to str
    }
}
int main()
{  string str = "abc";//an array of characters
  
    perm("",str);//function call
 
}