#include<iostream>//implementation of a ordered set/ hash set
#include<set>
using namespace std;
int main(){
    set<int>s;//in ordered set elements are sorted automatically in sorted order
    s.insert(4);//insertion takes O(log n) time complexity
    s.insert(2);
    s.insert(5);
    s.insert(1);

    for(int ele : s){//it will print the elements of set
       cout<<ele<<" ";
    }
}