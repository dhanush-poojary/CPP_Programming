#include<iostream>//Leetcode  60                           Permutation Sequence
#include<sstream>
using namespace std;
string sequence(string str,int k,string res){
    int n = str.length();
    if(n == 1){//if there is only 1 digit present
        res += str;//then append it
        return(res);//and return res string
    }
    int fact = 1;
    for(int i=2;i<=n-1;i++){//take the factorial from i=2 to n-1
        fact*=i;
    }
    int idx = k/fact;  //k/fact to find index of first sequence from original string

    if(k%fact == 0) idx--;//if it is divisible then idx--

    char ch = str[idx];//retrive first digit of our sequence
    string left = str.substr(0,idx);//retrive that digit's left 
    string right = str.substr(idx+1);//and right substring
    
    int q = 1;
    if(k%fact == 0) q = fact; //if k is divisible bt fact then pass fact
    else q = k%fact;//otherwise k%fact

    return sequence(left+right,q,res+ch);//left+right subrring as reamining and obtained digit
}
int main(){
   string str = ""; //123    input string
   int n = 3;

   for(int i=1;i<=n;i++){
      str+= to_string(i);  //input string generating
   }
   int k = 3;//we have to find 3rd permutation sequence
   string res = "";//empty string
   cout<<sequence(str,k,res);  //call recursion
   
}