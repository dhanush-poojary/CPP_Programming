#include<iostream>//program to print prime numbers from 2 upto n numbers 
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;//user input of n numbers
    bool flag ;//again we are making use of boolean type
    for(int i=2;i<=num-1;i++){//1 and the num itself divides itself so we are execcuting inside
        flag = false;//here we are assuming every single number as prime
        for(int j=2;j<=i/2;j++){//we are dividing i with every number which is between 1 and the number itself
          //if i is 4 the i/2 which is 2 then the loop does not execute
            if(i%j==0){//here if the i is easily divided then it is composite not prime no.
            flag = true;//if this gets assigned then i is a composite number
            break;//it will stop the inner loop  only
        }
      }
        if(flag == false) cout<<i<<endl; //if the flag is still false then it is a prime number
    }
  
}