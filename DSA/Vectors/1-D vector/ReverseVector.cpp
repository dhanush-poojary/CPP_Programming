#include<iostream>//Reverse a vector with using extra array
#include<vector>
using namespace std;
int display(vector<int>& a){//reveiving vector address
    cout<<"the vector after reversed= "<<endl;//this function will prints the vector
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}
int main(){
  vector<int> v1;//vector declaration
  v1.push_back(1);//inserting elements into the vector
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(4);
  v1.push_back(5);
  v1.push_back(6);

  vector<int> v2(v1.size());//we are creating the extra vector to store the reverse of first one

  for(int i=0;i<v1.size();i++){//this will reverse the entire vector 
    int j = v1.size() - 1 - i;//j stands for last index element 
     v2[i] = v1[j];//i is for first index element
  }
    
  display(v2);//function call
}