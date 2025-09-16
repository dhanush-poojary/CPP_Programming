#include<iostream>//Basic implementation of a Unordered map/ hash map
#include<unordered_map>
using namespace std;
int main(){
       unordered_map<string,int> mp;//declaration of unordered map
       pair<string,int> p1;//we can not directly initialize map so we need to use pair
       p1.first = "dhanush";//this is key element
       p1.second = 6;//it is value

       mp.insert(p1); //p1 will be inserted  
       
       pair<string,int> p2;
       p2.first = "ichigo";
       p2.second = 4;

       mp.insert(p2);//p2 will be inserted 

       pair<string,int> p3;
       p3.first = "zoro";
       p3.second = 7;

       mp.insert(p3); //p3 will be inserted  
  //like sets in here also we dont have index's so we need to use for each loop for printing of map's elements
       cout<<mp.size()<<endl;//3 will be printed
       for(pair<string,int> key : mp){//it will print the elements of a map in random order
          cout<<key.first<<" "<<key.second<<endl;
       }
         cout<<endl;
       mp.erase("ichigo");//we need to give only the key over here , and value automatically deleted

       for(pair<string,int> key : mp){//it will print the elements of a map in random order
        cout<<key.first<<" "<<key.second<<endl;
      }
      cout<<mp.size()<<endl;//2 will be printed
}