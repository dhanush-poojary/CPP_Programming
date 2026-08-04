#include<iostream>//implementation of order map/ hash map
#include<map>
using namespace std;
int main(){
    map<int,int> m;//declaration of map
    m[4] = 1;//insertion 
    m[3] = 2;
    m[5] = 0;
     for(auto key: m){//auto data type will automatically choose a pair
      cout<<key.first<<" "<<key.second<<endl;//prints
   }
   cout<<endl; 
   map<string,int> mp;//declaration of map
   mp["Zoro"] = 7;//insertion
   mp["dhanush"] = 6;
   mp["Ichigo"] = 8;

   for(auto key: mp){//auto data type will automatically choose a pair
      cout<<key.first<<" "<<key.second<<endl;//prints
   }

}