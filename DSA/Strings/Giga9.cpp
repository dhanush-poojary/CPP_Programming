#include<iostream>//usage of stoi and stoll functions
#include<string>
using namespace std;
int main(){
  //we cannot directly typecaste integer into string or string into integer
    string str = "94943";//strings
    string s = "949434354444";
    int x; 
    long long y;//it holds largest value of integer type
    
    x = stoi(str);//it convert string into integer value
    y = stoll(s);//it convert string  into long long type
    
    cout<<x<<endl;//prints integer
    cout<<y<<endl;


//coversio of string to integer without using any builtin funtion 
//    string s=  "3445"; //an string
     
//   int n = s.length();//it's length
//  int i = 0;
//  int x = 0;
//   while(i<n){
//       int num = s[i] - '0';//we are subtracting string 1 element at a time with '0' character's ascii value
//        x =( x * 10) + num;//then add it into integer value 
      //here * 10 is because we need it a digit in a single variable
//        i++;
//   }
//   cout<<x;
 
}