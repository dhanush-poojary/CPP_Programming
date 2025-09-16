#include<iostream>//Better implementation of a unordered Map
#include<unordered_map>
using namespace std;
int main(){
   unordered_map<string,int> mp;//declaration of a unordered map

   mp["dhanush"] = 6;//intialize with key and val
   mp["Zoro"] = 7;
   mp["Ichigo"] = 8;
 
  //cout<<mp["zoro"]<<endl;//we can print it like this too

   cout<<mp.size()<<endl;//3 will be printed
   for(auto key: mp){//auto data type will automatically choose a pair
      cout<<key.first<<" "<<key.second<<endl;//prints
   }

} 