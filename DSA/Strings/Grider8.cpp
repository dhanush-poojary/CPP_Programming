#include<iostream>//The usage of some STL function on string
#include<string>
#include<algorithm>//we used this for reverse function 
using namespace std;
int main(){
   string str = "Dhanush is a Coder";//null at end 
   int x = str.length();//but size and len function only counts the present element

   char str1[] = "Dhanush is a Coder";
   cout<<sizeof(str1)/1<<endl; //it will count null character including all present element
   cout<<x;//it will not count the null character

   str.push_back('!'); //also we can push_back element 
   cout<<endl<<str<<endl;
   str.pop_back();//we can also pop_back an element

   reverse(str.begin()+1, str.end()-12);//it will reverse an part of the string not the entire string
   cout<<str<<endl;

  //by using + operator we can use append 2 string to the front and rear as well 
   string s = "Gigga";// append means combining 2 strings together
   s = s + " Nigga"; //it will add nigga at the end of gigga
   cout<<s;
}