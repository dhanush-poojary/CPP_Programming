#include<iostream>//Program to sort all the 0's and 1's within the array
//it simply means we have sort 0's to front and 1 to end
#include<vector>//method - 1
using namespace std;
void display(vector<int>& v){//this function prints the array elements
    for(int i=0;i<v.size();i++){
        cout<<"\t"<<v[i];
    }
    cout<<endl;
    return;
}
void sort(vector<int>& v,int no0,int no1){
    for(int i=0;i<v.size();i++){
         if(i<no0) v[i] = 0;//untill count of 0 we are overwritting the elements of array with 0
         else v[i] = 1;//after cout of zero we are overwritting 1 in array elemets
    }
}
int main(){
  vector<int> v;//array declaration
  v.push_back(1);//inserting elements
  v.push_back(0);
  v.push_back(0);
  v.push_back(1);
  v.push_back(0);
  v.push_back(0);
  v.push_back(1);
  int no0 = 0,no1 = 0;//here we are taking the count of number of 0's and 1's in the array
  for(int i=0;i<v.size();i++){
       if(v[i]==0) no0++;//stores the count of 0
       else  no1++;  //stores the count of 1
  }
  display(v);//function call

  sort(v,no0,no1);//call with count of 0's and 1's
                               
  display(v);//function call

}