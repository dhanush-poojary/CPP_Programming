#include<iostream>//leetcode - 75    sort colors
#include<vector>//there are 3 color red white and blue represented by 0 1 and 2
using namespace std;
void display(vector<int>& v){//this function is for printing the array elements
    for(int i=0;i<v.size();i++){
        cout<<"\t"<<v[i];
    }
    cout<<endl;
    return;
}
void sort(vector<int>& v,int no0,int no1,int no2){//this function is for sorting 0 1 2 order
    for(int i=0;i<v.size();i++){ //here in this loop we are overwritting 0 until the count of 0's
//then after adding no0 and no1 so that after 0's we have to overwrite 1's 
        if(i<no0) v[i] = 0;//overwrite 0
        else if(i<no1+no0) v[i] = 1;//overwrites 1
        else v[i] = 2;//after i becomes greater then no1 + no0 then this bloack will be executed
    }
    return;
}
int main(){
   vector<int> v;//array declaration
   v.push_back(2);//inserting elements
   v.push_back(0);
   v.push_back(2);
   v.push_back(1);
   v.push_back(1);
   v.push_back(0);
   
   int no0 = 0,no1 = 0,no2 = 0;
   for(int i=0;i<v.size();i++){
//here we are taking the count of each number through traversing in the entire array    
    if(v[i]== 0) no0++;//store count of 0
    if(v[i]== 1) no1++;//store count of 1
    if(v[i]== 2) no2++;//store count of 2
   }
   display(v);//function call

   sort(v,no0,no1,no2);//function call with count of 0 1 and 2

   display(v);//function call

}