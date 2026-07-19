#include<iostream>//To convert decimal to binary and binary to decimal
#include<string>
#include<algorithm>
using namespace std;
int binary_to_decimal(string &binary){
   int n = binary.size();
   int result = 0;
    for(int i=n-1;i>=0;i--){//we are taking each binary digit from last
    char ch = binary[i];
    int num = ch - '0';
    result+= (num* (1 << n-i-1));//multiplying that digit with corresponding power of 2
  }//left shift operator will strike 2 digits from last and put 2 zero's right after most segnificant bit
  return result;
}
int main(){
  string str = "110";//6
  int n = str.length();
  
  int x = 1;   //Binary to decimal
  int number = 0;
  for(int i=n-1;i>=0;i--){//we are taking each binary digit from last
    char ch = str[i];
    int num = ch - '0';
    number += (num *x);//multiplying that digit with corresponding power of 2
    x*=2;
  }
  cout<<number;
 //cout<<binary_to_decimal(str); //Binary to decimal using left shit operator bitwise operator


//  string str = "";  //Decimal to binary 
//  int num = 18;
//   while(num!=0){//here we are taking the lcm of that number 
//     int n = num/2;//dividing 
//     str+=(to_string(num%2));//storing remainder
//     num = n;//reducing number by lcm
//   }
//   reverse(str.begin(),str.end());//as we need to store the remainders from bottom to top reverse it
//   cout<<str;
}