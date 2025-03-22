#include<iostream>//inseting and deleting elements from the vector
#include<vector>
//this header file is required to use vector functionalities throughout the program
using namespace std;
int main()
{  vector<int>v;//vector declaration without size

   v.push_back(1);//size 1 capacity 1
   v.push_back(2);//size 2 capacity 2
   v.push_back(3);//size 3 capacity 4
   v.push_back(4);//size 4 capacity 4
   v.push_back(5);//size 4 capacity 8
   
   cout<<endl<<"The capacity = "<<v.capacity()<<endl;//capacity is the amount of element that can be stored in side the
   //this vector 

   int size  = v.size();//only size of the number elements present in the vector
   for(int i=0;i<size;i++){
      cout<<"\t"<<v[i];//prints vectors elements
   }
   
    cout<<endl;

//eventhough we pop the element capacity will remain the same but size will be decreased
   v.pop_back();//last element will be deleted which is 5 
   v.pop_back();//2nd last element will be deleted which is 4

    size  = v.size();//only size of the number elements present in the vector
   for(int i=0;i<size;i++){
      cout<<"\t"<<v[i];//prints vectors elements
   }

   cout<<endl<<"The capacity = "<<v.capacity()<<endl;//capacity is the amount of element that can be stored in side the
   //this vector
}