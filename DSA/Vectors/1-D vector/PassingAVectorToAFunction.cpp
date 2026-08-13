#include<iostream>//passing a vector to a function
#include<vector>
using namespace std;
//vector's are passed by there value and not by there address so it cannot be modifed
void update(vector<int>& a){//here we receiced the address of that vector instead
    a[0] = 99;//0'th index will be modified
    return;
}
int main(){
   vector<int>v;//vector declaration

   //vector<int>v(5); //dont give size here because it will defaultly put 0 in the indices
   
   cout<<"Enter the elements(5): ";
   for(int i=0;i<5;i++){ //here we are taking input through user of vector elements
      int x;  
      cin>>x;
      v.push_back(x);//we can not make it i because it will store i's value itself
   }

   for(int i=0;i<5;i++){
    cout<<v.at(i)<<"\t";//prints elements of vector
   }
  cout<<endl;

   update(v);//function called by passing a vector

   for(int i=0;i<5;i++){
      cout<<v[i]<<"\t";//prints elements of vector
   }
}