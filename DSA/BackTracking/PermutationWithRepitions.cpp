#include<iostream>//Permutations of string with backtracking with repeatition
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

void permutation(string &str,int i){//pass string through adress so it does not change
  if(i == str.size()-1){//when it reaches 2nd last element  return 
    cout<<str<<endl;
    return;
  }
  unordered_set<char> st;//create a new set for each call

  for(int idx=i;idx<str.size();idx++){
    //idx will be first index of the current permutation and i will be 2nd, 3 rd index
   //if element is not present then insert that
    if(st.find(str[idx]) != st.end()) continue;//if present then dont make a call bcz the 
                                              //call for that element is already been made
   st.insert(str[idx]);//non repeated elenents only
   
     swap(str[i],str[idx]);//instead of creating a new string just modify the original string
     permutation(str,i+1);//make a call for next element
     swap(str[i],str[idx]);//after call revert the changes of string change it back to original
    
   }
} 
int main(){
  string s = "abc";

  permutation(s,0);//prints all permutations of string s

}