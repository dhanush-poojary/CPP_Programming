#include<iostream>//code to find whether the character is an vowel or consonant
using namespace std;
int main(){
   char ch;
   cout<<"Enter an character:";
   cin>>ch;//user input of character(single character)

   if(ch>='a'&& ch<='z'){//this is only for lower case alphabets
      if(ch== 'a' || ch=='e' || ch=='i'||ch=='o'||ch=='u'){//if any of the above condition gets true then this block will be executed
        cout<<"The Entered character is a vowel";
      } 
      else{//otherwise this block of code will be executed
        cout<<"The Entered number is a consonant";
      }
       }
   else{//if the ented number is not a lowercase nor a alphabet this statement will be executed
    cout<<"The enterd character is neither a vowel nor a consonent";
   }
}