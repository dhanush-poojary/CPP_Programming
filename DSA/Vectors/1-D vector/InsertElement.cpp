#include <iostream>//inserting an element in to the array
using namespace std; 
int main()
{   int arr[] = {1,2,3,5,6};//already filled array
    int n =  sizeof(arr)/4 +1;//here +1 is because we are adding one extra element
    int ele,pos;
    cout<<"Enter the element to be inserted: ";
    cin>>ele;//the element 
    cout<<"Enter the position to be inserted: ";
    cin>>pos;//and it's position we it needs to be  inserted

    for(int i=n-2;i>=pos;i--){//here we are pushing each character 1 step by of it's index untill the position of element
        arr[i+1] = arr[i];
        if(i == pos) arr[i] = ele;//when it comes then add it in that position
    }
    for(int i=0;i<n;i++){
        cout<<"\t"<<arr[i];//prints the updated string
    }
}