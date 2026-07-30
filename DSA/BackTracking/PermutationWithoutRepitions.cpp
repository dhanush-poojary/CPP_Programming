#include<iostream>//Permutations of string normal method with or without repitations
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
void permu(string ans,string str){
    if(str.size() == 0){//string is empty then 
        cout<<ans<<endl;//print the ans string
        return;
    }
    //unordered_set<char> st;//this is to avoid duplications calls of already called element
   for(int i=0;i<str.size();i++){
   // if(st.find(str[i]) != st.end()) continue;//if present any duplicate element then skip it
   //  st.insert(str[i]);//if not present then insert it
   
   char ch = str[i];//first element of permutation
    string left = str.substr(0,i);//remaining elements except that one
    string right =str.substr(i+1);
     permu(ans+ch,left+right);
       
   }
} 
int main(){
  string s = "aabc";//can or can not consist  repeated ele

  permu("",s);//prints all permutations of string s

}