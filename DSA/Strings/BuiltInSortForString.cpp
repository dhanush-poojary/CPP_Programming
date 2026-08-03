#include <iostream> //sorting an string using builtin function only in lexicographic order
#include<algorithm>
using namespace std; 
int main()
{  string str = "English"  ;//an string

    sort(str.begin(),str.end());
    //this function will sort the character based on th ascii value of that character and if the
    //character "ba" is string it will be ab because 97 comes first because it is lesser then 98
    cout<<str;
   return 0;
}