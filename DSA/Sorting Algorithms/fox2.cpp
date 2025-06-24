#include<iostream>//Count inversions in the array using merge sort 
#include<vector> //inversion means arr[i] > arr[j] and i < j , here i&j are index and arr[i]&arr[j] are elements
using namespace std;
int count = 0;//to make that merget function a void type
int inversion(vector<int>&a,vector<int>&b){
  int i =0,j =0;
  int c = 0;//here the both array's will be in sorted order so
      while(i<a.size() && j<b.size()){
         if(a[i]>b[j]){//if the 1st element of the array is greater then the 1st elemenet of 2nd array then
                      //remaining elements of 1st array will be greater then that too so add those at once
            c+= a.size()-i;
            j++;//increase only 2nd array's index
         }
         else i++;//increase only 2st array's index
        }
    return c;
}
void merge(vector<int>&arr,vector<int> &brr,vector<int> &res){
    int m = arr.size();//here we are merging 2 array's while sorting
    int n = brr.size();
     int i = 0,j=0,k=0;
    while(i<m && j<n){
        if(arr[i]<brr[j]) res[k++] = arr[i++];//add =(equal) to make merge sort stable
        else res[k++] = brr[j++];
    }
    while(i<m) res[k++] = arr[i++];//inserting reaminging elements left in both array's
    while(j<n) res[k++] = brr[j++];
}
void mergesort(vector<int> &v){//use int for returning count
  //int count=0;
    int n = v.size();
    if(n==1) return; //also here make it as return 0 as it is int
 
    int n1 = n/2, n2 = n-n/2;//here the n-n/2 will work for both odd and even numbers unlike n/2+1
    vector<int> a(n1), b(n2);//creating 2 sub array
    
    for(int i=0;i<n1;i++)  a[i] = v[i];//inserting elements of 1st sub array
    for(int i=0;i<n2;i++)  b[i] = v[i+n1];//inserting elements of 1st sub array
                            //here n1 is for we need 4 5 6 elements not 1 2 3 because those are inserted in 1st sub array
    //recursion
    mergesort(a);//this is for dividing the array in 2 sub array each time untill the array becomes 1 size
    mergesort(b);

//doing the same without using global variable
  // count+= mergesort(a);
  // count+= mergesort(b);

    count+= inversion(a,b);
        //sorting
    merge(a,b,v);//sorting those divided array parts 
   // return count;
}
int main(){
    int a[] = {5,1,3,0,4,9,6};//array
    int m = 7;

    vector<int> arr(a,a+m);//making a copy of an array
      for(int i=0;i<m;i++){//printing
        cout<<arr[i]<<"\t";
    }
    mergesort(arr);
    cout<<endl;
    cout<<"The Count of inversion in this array is: "<<count;
}