#include<iostream>//Leetcode 1005  Maximize Sum Of Array After K Negations
#include<queue>
#include<vector>
using namespace std;
int main() {
 vector<int> nums = {4,2,3};
 int k = 1;  //no of negetations
       priority_queue<int,vector<int>,greater<int>> q;//min heap
       for(int ele : nums){//inserting array ele in heap
            q.push(ele);
       }
         while(k!=0){//making k negetions
        if(q.top() == 0) break;//if we get 0 then  end negetions bcz 0 will be same after negetions  also does not effect sum
           int x = q.top();
           q.pop();//removing the current min element
           q.push(-x);//and inserting back it by it's negetion
//bcz taking negetion of smaller elements does not effect the sum majorly
           k--;//1 negetion done
       }
       
       int sum = 0;
       while(q.size() != 0){//untill heap gets empty
          sum+=q.top();//add the some of all elements
          q.pop();
       }
       cout<< sum;//it will print minimum sum after k negetions
    }