#include<iostream>//Leetcode 14         longest common prefix
//it means finding the max number of prefix common in 2 string or 3
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
   vector<string>str;  //an vector of string type
//    str.push_back("flower"); //1st test case
//    str.push_back("flow");
//    str.push_back("flight");
      str.push_back("dog");//2nd test case
      str.push_back("racecar");
      str.push_back("car");

   int n = str.size();//size of vector

   sort(str.begin(),str.end());//here we are sorting it because the similar elements 
   //will come together so we only need to check the first and third string as the 2nd string is more similar to first then thrid

   string first = str[0]; //1st string
   string last = str[n-1]; //2nd string
   string s = "";//new resultant string
   
   if(n == 1){ //if the string size is 1 then NULL is the resultant
    cout<<s; //prints "" empty
    exit(0);
   }
   else{
        for(int i=0;i<min(first.size(),last.size());i++){//here we used min of first and last because otherwise it will go beyong the index of smaller string
           //so we are only traveling till small size string from first and last
            if(first[i] == last[i]){ //if each single character of both string matches then only 
                s = s + first[i];//we are adding it in resultant string
            }
            else{
                break;//if any of the characters does not match then exit
            }
        }
   }
   cout<<s;
}