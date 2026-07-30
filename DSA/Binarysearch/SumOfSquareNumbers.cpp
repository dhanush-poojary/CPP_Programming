#include<iostream>//Leetcode 633       sum of square numbers
#include<cmath>
//we have to return true if 2 numbers square's sum is equal to c
using namespace std; //x*x + y*y = c
bool isperfect(int x){//this function is for knowing perfect square
    int z = sqrt(x);//the number whose square root multiplied by itself
            //then if it is equal to that number then it is perfect square number
    if(z*z == x) return true;
    else return false;
}
int main(){      
    int c = 41;//target value 
    int x = 0;//assuming x as 0 because it is a perfect square
    int y = c;//y as the number itself for getting just lower sqrt
    while(x<=y){
        if(isperfect(x) && isperfect(y)){//if both numbers are 
            cout<<"true";//print true as it is x*x + y*y = c
            return 0;
        }
        else if(!isperfect(y)){//if y is not a perfect square
           y = (int)sqrt(y)* (int)sqrt(y);//then make it a perfect square number
           //each time y will be getting small
           x = c - y;//x will be getting big
        }
        else{//if x is not a perfect squre
    //but add 1 to it because the x need to getting bigger each time
            x = ((int)sqrt(x)+1) * ((int)sqrt(x+1)+1);//then make it perfect square number
            y = c - x;//reduce y's value
        }
    }
    cout<<"false";//if any number's sum of squre's does not equal's c then print false
}