#include<iostream>//Implementing queue using array or vector
#include<vector>
using namespace std;
class Queue{
   public:
   int f;
   int r;
   vector<int> arr;
   Queue(int val){
    vector<int>v(val);//an new array of val size 
    arr = v;//arr will an empty array of val size
     f = 0;
     r = 0;
   }
   void push(int val){//it will push an element at rear end
       if(r == arr.size()){//when rear reaches end it is full
          cout<<"The queue is full"<<endl;
          return;
       }
       arr[r] = val;
       r++;
   }
   void pop(){//it will pop an element at front end
       if((r-f) == 0){//when there is no element we cant pop
         cout<<"The queue is empty"<<endl;
         return;
       }
       f++;   
   }
   int front(){//it will give front element
     if((r-f)  == 0){
         cout<<"The queue is empty"<<endl;
         return -1;
       }
       return arr[f];
   }
   int rear(){//it will give rear elememt
      if((r-f) == 0){
         cout<<"The queue is empty"<<endl;
         return -1;
       }
        return arr[r-1];//after inserting rear will move by 1 so -1
   }
   void display(){//it will display the queue of array
    if((r-f) == 0){//cant display when 0 element present
         cout<<"The queue is empty"<<endl;
         return;
       }
        for(int i=f;i<r;i++){//rear-1 index is the last 
          cout<<arr[i]<<endl;
        }
        cout<<endl;
   }
   int size(){//it will return the current size of queue
     return (r-f);
   }
};
int main(){
   Queue q(5);//5 is the size of the queue

   q.push(10);//inserting the elements
   q.push(20);
   q.push(30);
   q.push(40);
   q.push(50);
   q.push(60);

   q.display();//for printing the queue
   cout<<q.size()<<endl;

   q.pop();//deleting
   cout<<endl;

   q.display();//for printing the queue

  //  cout<<q.front()<<endl;
  //  cout<<q.rear()<<endl;
   cout<<q.size()<<endl;
}