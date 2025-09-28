#include<iostream>//Leetcode   295     Find Median from Data Stream
#include<queue>
using namespace std;
class MedianFinder {
public:
    priority_queue<int> max;//create 2 heaps min and max
    priority_queue<int,vector<int>, greater<int> > min;
    MedianFinder() {
        
    }
    void addNum(int num) {
        //min will hold all smaller values of left of median
        //min will hold all larger values of right of median
        if(max.size() == 0 || num < max.top() ) max.push(num);//insert into max heap
        else min.push(num);//otherwise insert into min heap
        
              if(max.size()>min.size()+1){//if any heap's difference becomes 2 then we have to rearrange the element
  //if it is 1 then it's okay          
                   min.push(max.top());//insert the top of max into min
                   max.pop();
              }
              if(min.size()>max.size()+1){//if any heap's difference becomes 2 then we have to rearrange the element
  //if it is 1 then it's okay          
                    max.push(min.top());//insert the top of min into max
                   min.pop();
              }
              }
    
    double findMedian() {
         if(max.size() == min.size()) return (max.top() + min.top())/2.0;//for even length return average of right and left median
         else if(max.size() > min.size()) return max.top();//max consist of median odd length
         else return min.top();//min consist of median odd length
        
          }
}; 
int main(){   
    MedianFinder min; //median changes upon each insertion
    min.addNum(6);//inserting
    min.addNum(1);
    cout<<min.findMedian()<<endl;//finding median
    min.addNum(3);//inserting
    min.addNum(4);
    cout<<min.findMedian()<<endl;//finding median
    min.addNum(2);//inserting
    cout<<min.findMedian()<<endl;//finding median
}        