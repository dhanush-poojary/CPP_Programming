#include <iostream>//To print the word which is repeated maximum time
#include<sstream>//using this header file we can grant access to strings every single character
#include<string>
#include<vector>
#include<algorithm>
using namespace std; 
int main()
{  string str = "Dhanush is a coder and he is a gamer";//an string
   stringstream ss(str);//we are making ss variable of sstream type for our string str
   string temp;//this is a temporary string


   vector<string> a;//we need to sort the each word so that similar words come together
   for( ; ss>>temp ; ){//ss will provide temp with every single word from str
    
    a.push_back(temp);//then push it on to vector 
   }

   sort(a.begin(),a.end());//then sort it
   //when we are sorting an vector of string each similar character will be together

   int count = 1;
   int maxx = 0;
   for(int i=1;i<a.size();i++){
      //1 is because we are making check of -1 so
       if(a[i] == a[i-1]) count++;//we are checking present value with previous value  
       else count = 1;//1 means it is not same and it is there only one time
       maxx = max(maxx,count);//this will compute the max count
      
   }

   for(int i=1;i<a.size();i++){
      //1 is because we are making check of -1 so
      if(a[i] == a[i-1]) count++;//we are checking present value with previous value  
    else count = 1;//1 means it is not same and it is there only one time
    if(maxx == count) {//when any words count equals the value of max then it will be printed
       cout<<a[i]<<" "<<maxx<<endl;
    }
}
   
   return 0;
}