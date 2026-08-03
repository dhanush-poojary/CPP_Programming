#include <iostream> //Program to count the number of vowels present in an array
using namespace std; 
int main()
{  int n;
    cout<<"Enter the size of string: ";
    cin>>n;//enter the string size
    char str[n];//character array declaration
    for(int i=0;i<n;i++){
        cin>>str[i];//inputting string
    }  
    int count = 0;
    for(int i=0;i<n;i++){
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u')
        count++;//it increaments if our string contains any of these
    }
    cout<<"There are "<< count<<" vowels";//prints the result

   return 0;
}