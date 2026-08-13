#include<iostream>//Program for finding duplicate element in the array optimized 
using namespace std;
int main(){
   const int size = 8;
//we can not directly give  variable as a size of the array it will give an varning
//we have to use const keyword to avoid it
   int arr[size];//array declaration

   cout<<"Enter the array elements(8): ";
   for(int i=0;i<size;i++){
      cin>>arr[i];//user input of array elements
   }

   bool check = true;//this is a check mark if there is no duplicate element then this will
   //remain true only 

   for(int i=0;i<size;i++){//this loop will pick one element which is the i'th element itself
    //then travle in array and compares it with each array element wheter it is same or not
    //if it is same that means there as duplicate elements
       
    for(int j=i+1;j<size;j++){//this is for comparing i'th element with other elements of arr
        if(arr[i]==arr[j]){
            check = false;//if mark gets false that means the array element has duplicates 

            cout<<arr[i]<<" has a duplicate element!";//prints the duplicate element
            break;//then break else it will print as many times the elements are present
        }
    }
    if(check == true) {//if mark not remains true then it means there is no duplicate element
        cout<<"There is no Duplicate elements in the array";
        break;
    }
   }  

}