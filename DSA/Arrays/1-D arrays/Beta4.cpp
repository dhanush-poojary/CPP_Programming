#include<iostream>//Array as pointer and it's usages
//generally array's are passed with there refference 
//(address of first element's 1st bytes address)

using namespace std;
int main(){
    int arr[] = { 1,4,6,3,7,8,2,5};//initialized array
    int size = sizeof(arr)/4;//this will calculate array size

    int* ptr = arr; //these 2 line works the same each will point at the arrays first elements address
    // int* ptr = &arr[0];

    cout<<ptr[3]<<endl;//with pointer we can access it as similar to the array

    for(int i=0;i<size;i++){

        // cout<<"\t"<<i[arr];   //normal aaproach of printing array elements

        cout<<*ptr<<"\t";//we can print it by it's pointer too
        ptr++;  //this will be increamented by 4 bytes not 1

        // after the loop this pointer's address will be completely lost
    }


//////////////////////////////****Important*****////////////////////////////////
//after this loop pointer's address will be completely lost so it is important to store
//it again the address of the same in the pointer like
  // ptr = arr;


    ptr[0] = 10;//this will update the arr[] array
    ptr++;//this will be increamented by 4 bytes not 1
    *ptr = 100;//this will also update the arr[] array
     ptr--;//this will be decreamented by 4 bytes not 1 which will be sent back to first element of the array's address

    for(int i=0;i<size;i++){
        cout<<ptr[i]<<"\t";//prints array elements
          
    }
    
}