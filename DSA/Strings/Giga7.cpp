#include <iostream>//usage of string stream stl function
#include<sstream>//it provides certian string functions like stringstream and all
#include<string>
using namespace std; 
int main()
{  string str = "Dhanush    is a coder";//string declaration with spaces
   stringstream ss(str);//it can be usefull for count the number of words or manipulate with string
   string temp;//using this we can get 1 by 1 string from sstream
    
   int count  = 0;
   for( ; ss>>temp ; ){//here ss will give 1 word from the string at a time 
     count++;//we are increamenting after getting 1 word
      //cout<<temp<<endl;
   }
   cout<<count;//prints the number of words in an string
   return 0;
}