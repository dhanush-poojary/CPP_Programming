#include<iostream>//Program to sort all the negative numbers in a array
#include<vector>
using namespace std;
void display(vector<int>& v){//this function is for printing array elements
    for(int i=0;i<v.size();i++){
        cout<<"\t"<<v[i];
    }
    cout<<endl;
    return;
}
//this code will bring all the negetive numbers to front side
void sort(vector<int>& v){  //-5      -2      -4      3       1       6       8
    int i=0,j = v.size()-1;
    while(i<j){//as usual we are using 2 pointers approach
        if(v[j]>=1) j--;//instead of seeing 1 we are searching for all positive values
        if(v[i]<=0) i++;//instead of seeing 0 we are searching for all negetive values
        if(v[i]>0 && v[j]<0 && i<=j){//if v[i]>0 it means i is positive v[j]<means is is negetive 
            //that's why need to swap them and i<=j is for error purpose which is i can be greater then j before ending the loop
           int temp = v[i];
           v[i] = v[j];
           v[j] = temp;
           i++;
           j--;
        }
    }
    return;
}
//this code will bring negetive numbers to back side
// void sort(vector<int>& v){         // 1       8       3       6       -5      -4      -2
//     int i=0,j = v.size()-1; //but also we changed the positions of i and j as well
//     while(i<j){
//         if(v[i]>=1) i++;//instead of seeing 1 we are searching for all positive values
//         if(v[j]<=0) j--;//instead of seeing 0 we are searching for all negetive values
//      
//   if(v[i]<0 && v[j]>0 && i<=j){//if v[i]>0 it means i is positive v[j]<means is is negetive 
            //that's why need to swap them and i<=j is for error purpose which is i can be greater then j before ending the loop
//            int temp = v[i];
//            v[i] = v[j];
//            v[j] = temp;
//            i++;
//            j--;
//         }
//     }
//     return;
// }
int main(){
  vector<int> v;//array declaration
  v.push_back(1);//we are inserting elements in to the array negative included
  v.push_back(-2);
  v.push_back(3);
  v.push_back(-4);
  v.push_back(-5);
  v.push_back(6);
  v.push_back(8);

  display(v);//function calles
  sort(v);
  display(v);

}