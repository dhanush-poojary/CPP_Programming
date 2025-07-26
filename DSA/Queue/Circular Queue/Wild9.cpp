#include<iostream>//Leetcode    622             Design Circular Queue
#include<vector>//implementing a circular queue using  array or vector
using namespace std;
class CQueue{
   public:
   int f;
   int r;
   vector<int> arr;
   int size;
   int Cap;
   CQueue(int k){//k is the size of the queue
    vector<int>v(k);//making arr of k size
    arr = v;//empty vector of size k
     f = 0;
     Cap = k;
     r = 0;
     size = 0;
   }
   void push(int val){
       if( Cap == size){//the cq is full no element can be inseted
          cout<<"The queue is full"<<endl;
          return;
       }
       arr[r] = val;
       r++;
       if( r == Cap ) r = 0;//when r reaches cap then make it r = 0
       size++;
   }
   void pop(){
       if(size == 0){//no element present in queue
         cout<<"The queue is empty"<<endl;
         return;
       }
       f++; 
       if(f == Cap) f = 0;//when f reaches cap then make f = 0;
       size--;
   }
   int front(){//it will give the element present at front
     if(size  == 0){//no element present in queue
         cout<<"The queue is empty"<<endl;
         return -1;
       }
       return arr[f];
   }
   int rear(){//it will give the element present at rear
      if(size == 0){//no element present in queue
         cout<<"The queue is empty"<<endl;
         return -1;
       }
       if(r == 0) return arr[Cap-1];//cq's last index is  n-1 last element r-1 will lead to -1
        return arr[r-1];//otherwise just return r-1
   }
   int Size(){//for printing the size of cq
     return (size);
   }
   bool isEmpty(){//it will tell whether cq is empty or not
        if(size == 0) return true;
        else return false;
   }
   bool isFull(){//it will tell whether cq is a full or not
      if(Cap == size) return true;
      else return false;
   }
};
int main(){
   CQueue q(5);//create cq of size 5
   q.push(10);//insering the elements
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   cout<<q.Size()<<endl;//size if 5
   q.pop();//10 will be popped
   cout<<endl;
   cout<<q.front()<<endl;//20 will be printed
   cout<<q.rear()<<endl;//50 will be printed
   cout<<q.Size()<<endl;//size is 4
}