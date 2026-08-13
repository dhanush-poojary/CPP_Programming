#include<iostream>//Reverse a specific part of the array
#include<vector>
using namespace std;
void reverse(vector<int>& arr,int start,int end){//this function will reverse the specific part of the vector 
    for(int i=start,j=end;i<j;i++,j--){                        //with the user wants to reverse
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
     vector<int>v;//vector declaration
     v.push_back(1);//inserting elements in the vector
     v.push_back(2);      
     v.push_back(3);      
     v.push_back(4);      
     v.push_back(5);     
     v.push_back(6);     
     v.push_back(7);     
     
     cout<<"the array before reversing: "<<endl;
     for(int i=0;i<v.size();i++){
        cout<<"\t"<<v[i];//prints vector elements
     } 
     int i,j;
     cout<<endl<<"Enter the start and end point : ";
     cin>>i>>j;//2 point's index's for whoose part to be revered 

     reverse(v,i,j);//calling function with vector and loops iterators
     
     cout<<"the array after reversing: "<<endl;
     for(int i=0;i<v.size();i++){
        cout<<"\t"<<v[i];//prints vector elements
     } 
} 