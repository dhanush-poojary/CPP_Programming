#include <iostream>//deleting an element from the array
using namespace std; 
int main()
{   int arr[] = {1,2,3,4,5,6};//already filled array
    int n =  sizeof(arr)/4 ;
    int pos;//here we need only the position
    cout<<"Enter the position to be deleted: ";
    cin>>pos;//position of that element
    for(int i=pos;i<n-1;i++){
        arr[i] = arr[i+1];//here we are just pushing 1 step forward of it's index from that position till the end
    }
    for(int i=0;i<n-1;i++){  //here -1 because 1 element is deleted
        cout<<"\t"<<arr[i];
    }
}