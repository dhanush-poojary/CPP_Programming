#include<iostream>//Leetcode    1700    Number of Students Unable to Eat Lunch
#include<queue>
using namespace std;
int main(){
   queue<int> q;
   int students[] = {1,1,0,0}, sandwiches[] = {0,1,0,1};
//here if the student does not get his choice of sandwiche he will go back of the queue
       int n = sizeof(students)/4;
 for(int i=0;i<n;i++){
            q.push(students[i]);//inserting the index of stduents into a queue
       }
       int x = 0;
       int count = 0;
       while(q.size()> 0 && count != q.size()){//when there is loop or continous popping and inserting to back of the queue we gonna break the loop
           if(q.front() == sandwiches[x]){//when student gets his desired choice
              x++;
                q.pop();
                count = 0;
           }
           else{//when student gets his desired choice
                 q.push(q.front());
                 q.pop();
                  count++;
           }
       }
       cout<<q.size();//how many elements present in queue are the  Number of Students Unable to Eat Lunch
}