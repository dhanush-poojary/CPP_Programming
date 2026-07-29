#include<iostream>//Leetcode 2182 Construct String With Repeat Limit
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
//here we have to construct string in lexicographically larger order 
   string s = "aababab";
   int repeatLimit = 2;//no of elements that can be repeated conscecutively
        unordered_map<char,int> mp;
        priority_queue<pair<char,int>> q;
        for(int i=0;i<s.length();i++){
             mp[s[i]]++;//insert the  character with its frequency inside map
        }
        for(auto p : mp){
              q.push(p);//then insert the pair into max heap so that we can have lexicographically larger character at top
        }
        string str = "";
        while(q.size()!=0)//do it untill the queue is empty
        {   pair<char,int> p1 = q.top();//take the top of queue in pair
            q.pop();
         
            for(int i=1;i<=repeatLimit;i++){
              str+=p1.first;  //append p1's char to str
              p1.second--;//and minus frequency
            if(p1.second <= 0) break;//if frequency gets empty then break
            }

            if(p1.second <= 0) continue;//if it gets then go to next element
            else{//if not then
             if(q.size() != 0)   //check whether q is empty or not if not then do it
              { 
                p1.second = p1.second-repeatLimit;//update p1's frequency 

                pair<char,int> p2 = q.top();//take the p2
                q.pop();
                str+=p2.first;////append p2's char to str
                p2.second--;//and minus frequency
               if(p2.second == 0) q.push(p1);// if it gets then insert only p1
               else{//if both gets empty then
                  q.push(p1);//insert both p1,p2
                  q.push(p2);
               }}
            }

        } 
    
      cout<<str; //prints the resultant string
}