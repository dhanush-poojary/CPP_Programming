#include<iostream>//Program to sort all the 0's and 1's within the array
//it simply means we have sort 0's to front and 1 to end
#include<vector>//method -2
using namespace std;
void display(vector<int>& v){//this function prints the array elements
    for(int i=0;i<v.size();i++){
        cout<<"\t"<<v[i];
    }
    cout<<endl;
    return;
}
void sort(vector<int>& v){//in this function we are making use of 2 pointer approach and swapping 0's and 1's
    int i=0,j = v.size()-1;
    while(i<=j){
        if(v[j] == 1) j--;//if j element is one then we are not touching it
        if(v[i]==0) i++;//if i element is zero then we are not touching it
        if(v[i]==1 && v[j]==0 && i<=j){//if both are opposite v[i]==1 and v[j]==0 then sort it 
//and we are using i<=j because in while loop i will be greater sometimes so else it will give an issue while swapping
            v[i] = 0;
            v[j] = 1;
        }
    }
    return;
}
int main(){
  vector<int> v;//array declaration
  v.push_back(1);//inserting elements
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(1);
  v.push_back(1);
  v.push_back(0);

  display(v);//function call
  sort(v);//function call
  display(v);//function call

}