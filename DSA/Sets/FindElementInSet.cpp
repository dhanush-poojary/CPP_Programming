#include<iostream>//To find a element in a unordered set
#include<unordered_set>
using namespace std;
int main(){
   unordered_set<int> s;//declaration of a unordered set
   s.insert(1);//insertion
   s.insert(2);
   s.insert(3);
   s.insert(4);
    
   int target = 3;   //it will take O(1) T.C using hashing
   //find() will search the set if it doest not find the target then it will return last element of set
   //if it is found then target will be != s.end() if it gets equal then not found
   if(s.find(target) != s.end()) cout<<"It exisits";
   else cout<<"It Does not exist";

}