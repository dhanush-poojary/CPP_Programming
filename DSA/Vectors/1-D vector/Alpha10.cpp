#include<iostream>//leetcode - 189    Rotate Array
//Program to Reverse an array within k steps 
//were k can be greater then size of the array

#include<vector>
using namespace std;
void display(vector<int>& a){//this function is for printing the vector elements
    
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<"\t";
    }
    return;
}
void reverse(vector<int>& arr,int start,int end){
    for(int i=start,j=end;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
   vector<int>v;//vector declaration
   v.push_back(1);//inserting elements
   v.push_back(6);
   v.push_back(2);
   v.push_back(3);
   v.push_back(7);
   v.push_back(4);
   int n = v.size();
   cout<<"the array before roatating = "<<endl;
   display(v);//function called for printing

   int k;
   cout<<endl<<"Enter k's value to be roatate the array: ";
   cin>>k;//user input of k steps

   if(k>v.size())  k = k % n;//in some cases k will go higher then size of the array that's why we are taking modulos of it
   //suppose 17 is k and n is 6 then 6*2 = 12 , 12-17 = 5 then 5 rotations
   //{1,6,2,3,7,4} ==     this need to be our array {6,2,3,7,4,1}


   reverse(v,0,n-1);//first we are reversing the entire array
   reverse(v,0,k-1);//then next we are reversing the first k elements
   reverse(v,k,n-1);//after that we are reversing elements after k elements which are k+1

   cout<<"the array after roatating = "<<endl;
   display(v);//function called for printing
} 