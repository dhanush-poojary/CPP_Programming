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
  
  //in this code we are first check whether 1 is present in the array if not then smallest 
  //positive missing element will be 1 , 
  //then taking the i'th element and storing a copy of it  by adding one to it if 33 is i'th
  //element then 34 will be temp if we found cannot find 34 then it is the missing element
  //mostly it is i + 1'th element will be smallest positive missing element

  for(int i=0;i<size;i++){//with this loop we get i'th element
    bool check1 = true;//if it is true untill the end then it means temp or i+1'th element is missing

    bool check2 = true;//if it is true untill the end then it meanns 1 is the smallest missing element

      temp = arr[i];  //here we store i'th element
      temp++;//increment it by 1
      
      for(int j=0;j<size;j++){
//with this loop we check if our j'th element is 1 or not and j'th element is equals to temp
//or i+1'th value whether it is present or not if it is present then make mark as false
      if(arr[j] == 1) check2 = false;
      //if we find 1 in the loop then set it to false bcz it is not missing
      if(arr[j] ==  temp){
         check1 = false;
    //if we find i+1'th or temp in the loop then set it to false bcz it is not missing
         break;
       }
    }
    if(check2 == true)  {//prints 1
         cout<<" 1 is missing smallest posive number!";
         break;
    }
    if(check1 == true) {//prints temp
        cout<<temp<<" is missing smallest posive number!";
        break;
    }      
    }
}
