#include<iostream>//Passing an array to a function
//generally array's are passed with there refference (address of first element 's 1st bytes address)

using namespace std;

void display(int a[],int size){//since array are passed as an refference
//int a[] is basically a pointer variable we can write int* a; also

    for(int i=0;i<size;i++){
//we can access all the array element using a pointer
        cout<<"\t"<<a[i];
    }
    return;//end of function
}

void update(int* b){//since array are passed as an refference
    //int b[] is basically a pointer variable we can write int* b; also

    b[2] = 6;//we have access to the entire array as it is a pointer pointing to the original array
}

int main(){
   int arr[5];//array declaration

   int size = sizeof(arr)/sizeof(arr[0]);//calculation of array size

   cout<<"Enter the 5 array elements: ";
   for(int i=0;i<size;i++){
        cin>>arr[i];//user input of array elements
   }
  cout<<"\nThe array before modifying = \t";
  display(arr,size);//function call with array and size
  update(arr);//function call with array
  cout<<"\nThe array after modifying = \t";
   display(arr,size);//function call with array and size
}

