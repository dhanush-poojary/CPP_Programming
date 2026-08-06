#include<iostream>//Merge sort
#include<vector>  //t.c is O(N long N) and s.c is O(N Log N)
using namespace std;
void merge(vector<int>&arr,vector<int> &brr,vector<int> &res){
    int m = arr.size();//here we are merging 2 array's while sorting
    int n = brr.size();
     int i = 0,j=0,k=0;
    while(i<m && j<n){//inserting minimum elements 2 array from front using 3 pointers
        if(arr[i]<brr[j]){   //add =(equal) to make merge sort stable
            res[k] = arr[i];
            i++;
        }
        else{
            res[k] = brr[j];
            j++;
        }
        k++;//this need to be done at both cases
    }
    while(i<m){//insert without checking the remaining elements from arr
        res[k] = arr[i];
        i++;
        k++;
    }
    while(j<n){//insert without checking the remaining elements from brr
        res[k] = brr[j];
        j++;
        k++;
    }
}
void mergesort(vector<int> &v){
    int n = v.size();
    if(n==1) return; //base case for the recursion
    int n1 = n/2, n2 = n-n/2;//here the n-n/2 will work for both odd and even numbers unlike n/2+1
    vector<int> a(n1), b(n2);//creating 2 sub array
    
    for(int i=0;i<n1;i++)  a[i] = v[i];//inserting elements of 1st sub array
    for(int i=0;i<n2;i++)  b[i] = v[i+n1];//inserting elements of 1st sub array
                            //here n1 is for we need 4 5 6 elements not 1 2 3 because those are inserted in 1st sub array
    //recursion
    mergesort(a);//this is for dividing the array in 2 sub array each time untill the array becomes 1 size
    mergesort(b);

    //sorting
    merge(a,b,v);//sorting those divided array parts 
}
int main(){
    int a[] = {5,4,3,2,1};//array
    int m = 5;//array size

    vector<int> arr(a,a+m);//copying the array in a vector
      for(int i=0;i<m;i++){
        cout<<arr[i]<<"\t";//printing
    }

    mergesort(arr);

    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<arr[i]<<"\t";//printing
    }
}