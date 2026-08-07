#include <iostream>//TO generate a binary string with and without consecative 1's
using namespace std; 
void binary(string str,int n){
    if(str.length() == n){//it will execute when our string is of n size
        cout<<str;
        cout<<endl;
        return;//ends the task of the  call
    }
    binary(str+'0',n);//this call will add 0 to our current string
    binary(str+'1',n);//this call will add 1 to our current string
   
   //if we put these 2 conditions we get to generate strings with no consecative 1's
    //if(str.length() == 0 || str[str.size()-1] == '0') binary(str+'1',n);
    
} 
int main()
{  
   int n = 3;//this is length of our string
   binary("",n);//empty string is for generating 
}