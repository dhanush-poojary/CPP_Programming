#include <iostream> //to count the maximum repeaterd character in a string
#include<vector>
using namespace std; 
int main()
{  string str = "brother worldo";//an string
    int n = str.length();
    
   vector<int> v(26,0);//this is 26 size vector because there are 26 alphabets and initialize it with 0
   
   for(int i=0;i<n;i++){
      char ch = str[i];//here we are retriving single character from string
      int num = (int)ch;//then retriving that character's ascii value and storing it
    
       v[num- 97]++ ;//then increamenting it's index value
       //here minus 97 is because small a's ascii value is 97 
       //b(98) - 97 will be 1 
   }
    int max = 0;
   for(int i=0;i<26;i++){
       if(max < v[i]){//here checking for maximum in vector v for printing
         max = v[i];
       }
   }
   for(int i=0;i<26;i++){
     int num = 97 + i;//here 97 plus is because every character comes after 97 (a) not before so plus
     //when v[i] equals our max then printing that character and the count of max
       if(v[i] == max) cout<<(char)num<<" is repeated "<<max<<" Times"<<endl;
   }
      
    return 0;
}