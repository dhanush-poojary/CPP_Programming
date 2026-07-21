#include<iostream>//Basic implementation of Unordered set
#include<unordered_set>
using namespace std;
int main(){
   unordered_set<int> s;//sets can have only the unique element no duplicates
   s.insert(2);
   s.insert(1);
   s.insert(3);
   s.insert(1);//it will never be inserted
   s.insert(5);
   s.insert(4);
   cout<<s.size()<<endl;//it will does not include duplicates size
   
   for(int ele: s){//it will print the elements of set in random order bcz set has no top or front
      cout<<ele<<" "; //no indexing in sets so we use for each loop
   }
   s.erase(1);//1 will be deleted
   cout<<endl;

   for(int ele: s){//it will print the elements of set in random order bcz set has no top or front
      cout<<ele<<" "; //no indexing in sets so we use for each loop
   }
} 