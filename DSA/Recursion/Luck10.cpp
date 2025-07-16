#include<iostream>//Leetcode  60                           Permutation Sequence
#include<sstream>
using namespace std;
string sequence(string str,int k,string res){
    int n = str.length();
    if(n == 1){
        res += str;
        return(res);
    }
    int fact = 1;
    for(int i=2;i<=n-1;i++){
        fact*=i;
    }
    int idx = k/fact;
    if(k%fact == 0) idx--;
    char ch = str[idx];
    string left = str.substr(0,idx);
    string right = str.substr(idx+1);
    
    int q = 1;
    if(k%fact == 0) q = fact;
    else q = k%fact;
    return sequence(left+right,q,res+ch);
}
int main(){
   string str = ""; //123
   int n = 3;
   for(int i=1;i<=n;i++){
      str+= to_string(i);
   }
   int k = 3;
   string res = "";
   cout<<sequence(str,k,res);  
  
}