#include<iostream>//finding The factors of the number
#include<cmath>
using namespace std;
//factors of a numbers means the numbers which can divided by that number
int main(){
   int n = 28;
   //here we are doing the task under O(sqrt(n)) time complexity
   for(int i=1;i<sqrt(n);i++){//here all the factor below the sqrt(n) will be printed
       if(n%i == 0) cout<<i<<endl;
   }
     for(int i=sqrt(n);i>=1;i--){//here all factors above the sqrt(n) will be printed
       if(n%i == 0) cout<<n/i<<endl;//(n/i) is mandatory
   }
           
   return 0;
}