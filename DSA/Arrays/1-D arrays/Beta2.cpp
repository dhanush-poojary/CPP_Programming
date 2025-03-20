#include<iostream>//Program for finding the smallest positive element where all element are positive
using namespace std;

//it means if an array 1 2 4 5 then the smallest missing ele will be 3
//if an array 33 44 55 66 77 then smallest missing ele will be 1
//if an array 1 2 3 4 5 then smallest missing ele will be 6

int main(){
    const int size = 5;
   //we can not directly give  variable as a size of the array it will give an varning
//we have to use const keyword to avoid it
    int arr[size];//array declaration
   
    cout<<"Enter the 5 array elements: ";
    for(int i=0;i<size;i++){
         cin>>arr[i];//user input of array elements
    }
    int temp;
  
  for(int i=0;i<size;i++){
    bool check1 = true;//

    bool check2 = true;

      temp = arr[i];
      temp++;
      
      for(int j=0;j<size;j++){
      if(arr[j] == 1) check2 = false;
      if(arr[j] ==  temp){
         check1 = false;
         break;
       }
    }
    if(check2 == true)  {
         cout<<" 1 is missing smallest posive number!";
         break;
    }
    if(check1 == true) {
        cout<<temp<<" is missing smallest posive number!";
        break;
    }      
    }
}
