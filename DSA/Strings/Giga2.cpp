#include <iostream> //program usage of sub-string function and to_string function
#include<string>
using namespace std; 
int main()
{  string str ;
    cout<<"Enter the string: ";
    getline(cin,str);//inputting an string

  //substring function will give a specific part of the array or the entire array
   int n = str.length()/2;
  cout<<str.substr(n);//it will print till first half of the string from 0 to n 
  //we can also give start and end index as well
    
     
  //usage of To-string function  it is used to typecast integer or digits into string
    // int x = 12345;    
    // string s = to_string(x);

    // cout<<s.length();  //it will give the count of digits present in x
 

}