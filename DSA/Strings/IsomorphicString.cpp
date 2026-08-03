#include<iostream>//Leetcode 205                 Isomorphic String
#include<vector>
#include<string>
//an isomorphic string means that each character of 2 string are mapped to each other and
//if anyof the mapped character is tries to map with another then it is not isomophic
//s = egg and t = add here e is mapped to a and g is mapped to d from both s and t is prospective

using namespace std;
int main(){
   // string s = "paper";//test case 1
   // string t = "title";

   // string s = "foo";//test case 2
   // string t = "bar";
   string s = "badc";//test case 3
   string t = "baba";

   if(s.length()!=t.length()){//if both strings are not of same length then they are not isomorphic
      cout<<"The string can not be compared!";
      exit(0);
   }
   else{//otherwise check for isomorphic string
      vector<int> v(150,1000);//created 150 length array beacuse there only maximum 150 available characters and initializaing it with 1000
      //beacuse there is no character whose acssi value is 1000

       for(int i=0;i<s.length();i++){//we checking first in s's prospective
           int idx = (int)s[i];//converting a string character to ascii value in idx 
           if(v[idx] == 1000) v[idx] = s[i] - t[i];
           //first cheking wehter is has 1000 stored or not if it not then the character is already mapped with some other character
           else if(v[idx] != (s[i] - t[i])) {//this is for already mapped character
            cout<<"These string are not isomorphic";//we are checking if the already mapped character is the same as currently mapping character
            return 0;     
         }
      }
      for(int i=0;i<150;i++) v[i] = 1000;//reintialization the base value because to resee in t's prospective

       for(int i=0;i<t.length();i++){//we checking first in t's prospective
           int idx = (int)t[i];//converting a string character to ascii value in idx 
           if(v[idx] == 1000) v[idx] = t[i] - s[i];
            //first cheking wehter is has 1000 stored or not if it not then the character is already mapped with some other character
           else if(v[idx] != (t[i] - s[i])) {//this is for already mapped character
            cout<<"These string are not isomorphic";//we are checking if the already mapped character is the same as currently mapping character
            return 0;     
         }
      }
   }
   cout<<"These string are isomorphic";//if all the conditions are correct then this will be printed
}