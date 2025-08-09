#include<iostream>//Leetcode     649       Dota2 Senate
#include<queue>
using namespace std;
int main(){
  string senate = "RDD";
   int n = senate.length();
        queue<int>q;//for storing the index of senate
        queue<int>R;//for storing the index of only 'R'
        queue<int>D;//for storing the index of only 'D'

        for(int i=0;i<n;i++){//for storing the index of r d and senate
              q.push(i);
              if(senate[i] == 'R') R.push(i);
              if(senate[i] == 'D') D.push(i); 
        }

        while(q.size() > 1){//repeat it untill only 1 element is left in q
              if(senate[q.front()] == 'X') q.pop();//it means that character is banned of it's rights
              else if(senate[q.front()] == 'R'){//if it is 'R' then 
                     if(D.size() == 0) { //see whether d is empty if it is then announce the victory
                      cout<<"Radiant";
                    return 0;
                  }
                     else{//otherwise ban the first D right after R
                           senate[D.front()] = 'X';//turn that into banned
                           D.pop();//remove it from d
                           q.push(q.front());//and put it to end of queue
                           q.pop();//then remove it
                           R.push(R.front());//also put it to end of queue
                           R.pop();//the remove it
                     }
              }
             else if(senate[q.front()] == 'D'){//if it is 'D' then
                     if(R.size() == 0) {//see whether R is empty if it is then announce the victory
                        cout<<"Desire";
                        return 0;
                     }
                     else{//otherwise ban the first R right after D
                           senate[R.front()] = 'X';//turn that into banned
                           R.pop();//remove it from d
                           q.push(q.front());//and put it to end of queue
                           q.pop();//then remove it
                           D.push(D.front());//also put it to end of queue
                           D.pop();//the remove it
                     }
        }
        }
        if(senate[q.front()] == 'R') cout<<"Radiant";//if first remaining character of senate is 'R' then return Radiant
        else cout<<"Dire";//if it is 'D' then return Dire         
           
   
}