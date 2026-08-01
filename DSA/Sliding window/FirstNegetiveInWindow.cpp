#include<iostream>//first negetive number in every window of size k
using namespace std;
int main(){
    int a[] = {2,-3,4,4,-7,-1,4,-2,6};//an array
    int n = 9;

    int k = 4;//this is our windows size/length
    int arr[n-k+1];//made a winodw sized array

    int p = -1;
     for(int i=0;i<k;i++){//taking the first windows first negetive number
     if(a[i]<0){
          p = i;
          break; //and break
     }   
    }
    if(p == -1) arr[0] = 1; //if there is no negetive number then store it as 1
    else arr[0] = a[p];//otherwise store that number

   int i=1,j=k;//windows starting and ending point

   int idx;
   while(j<n){//applying sliding window
      if(p >= i) arr[i] = a[p];//it means store in arr if windows first value or any value greater then i index
      else{
          p = -1;//making it once again zero
          for(int x=i;p<i+k;p++){
            if(a[p]<0){//taking the first negetive number
              p = x;
                break;//and break
            }
          }
          if(p != -1) arr[i] = a[p];//put that negetive number into arr
          else arr[i] = 1;//if no negetive then put 1
        }
       i++;//move to next window
       j++;
   }

    for(int ele : arr){//printing
      cout<<ele<<" ";
    }
}