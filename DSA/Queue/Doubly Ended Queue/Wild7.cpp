#include<iostream>//Basic implementation of Deque or doubly ended queue
#include<deque>
using namespace std;
void display(deque<int> &dq){
     int n = dq.size();
     for(int i=0;i<n;i++){//it can printed like a normal queue
        int x = dq.front();
        cout<<x<<endl;
        dq.pop_front();//pop it and 
        dq.push_back(x);//insert it to rear end
     }
     cout<<endl;
}
int main(){
   deque<int> dq;//declaration of deque

   dq.push_back(10);//inserting elements from back or rear end
   dq.push_back(20);
   dq.push_back(30);
   dq.push_back(40);
   display(dq);//it prints the deque

   dq.push_front(69);//it will insert element at front
   display(dq);//it prints the deque

   dq.pop_back();//it will delete element from rear or back
   display(dq);//it prints the deque
}