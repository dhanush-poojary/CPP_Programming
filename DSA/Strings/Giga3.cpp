#include<iostream>//to count the number of characters that are different from the neighbouring characters
#include<string>
using namespace std;
int main(){
   string str = "abbcdeffghh";//an string
   int n = str.length();
    int count = 0;
    
    for(int i=0;i<n;i++){
       if(n == 1) break;  //if size itself is 1 then  break the loop
       //as first and last index works differently as the index issues
       if(i == 0 ){ //we are conly comparing the right side element
           if( str[i+1] != str[i]) count++;
       }
       else if(i == n ){//we are only comparing the left side element
        if( str[i-1] != str[i]) count++;
       }
        else//otherwise are just seeing whether one left and one right to the index i if there are not equal or not
        { if(str[i-1] != str[i] && str[i] != str[i+1]){
            count++;//if they then increament the count
            
        }
      }    
    }
    cout<<count;

}