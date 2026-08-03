#include <iostream>//Program to reverse first half of the string
#include<string> 
#include<algorithm>//it is for builtin function
using namespace std; 
int main()
{  string str;
    cout<<"Enter the string: ";
    getline(cin,str); //even length of string
    //string inputing using getline function

    int n = str.length()/2 ; //-2 is because 1 for indexing and another for null character
     reverse(str.begin(),str.end()-n);//it will reverse the string from 0 to n/2 index

    cout<<str;//prints the string
    
   return 0;
}