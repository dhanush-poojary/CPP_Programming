#include<iostream>//Program to check whether the entered number is a prime or composite
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;//user input
    bool flag ;//boolean dataype usage for making things easy
               //i<=n-1 is also correct 
    for(int i=2;i<=num/2;i++){// we are executing this loop the half of n's value which is 
    // 50/2 = 25 and starting from 2 is bcz every number divides 1 

        flag = false;//here we are assuming the number is prime
        if(num%i==0){///then we are dividing if the number divides then it is a composite number
           
            flag = true;//this is for finding composite number 
           
            break;//as soon as we got the composite we are terminatin the loop
        }
    }
    if(flag == true){//this is for composite number
        cout<<num<<" is a composite number!";
    }
    else if(num == 1){//this condition is for user input of 1 
        cout<<"1 is neither prime nor composite number!";
    }
    else{//if it is not a composite then it has to be prime 
        cout<<num<<" is a prime number!";
    }
}