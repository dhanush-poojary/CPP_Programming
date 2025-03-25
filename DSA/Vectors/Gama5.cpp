#include<iostream>//leetcode - 75    sort colors
#include<vector>////Dutch flag algorithm
//there are 3 color red white and blue represented by 0 1 and 2 we have to sort according
using namespace std;

void display(vector<int>& v){//this function is for printing array
    for(int i=0;i<v.size();i++){
        cout<<"\t"<<v[i];
    }
    cout<<endl;
    return;
}
int main(){
   vector<int> v;//array declaration
   v.push_back(2);//inserting array elements
   v.push_back(0);
   v.push_back(2);
   v.push_back(1);
   v.push_back(1);
   v.push_back(0);
   
   int n = v.size()-1;
   display(v);//function call
 
//Dutch flag algorithm  
//   00   11   22 
//   low  mid  hi

   int low = 0,mid = 0,hi = n;//basically in this algorithm we are using 3 pointers
   while(mid<=hi){//when mid will be greater then hi we have to break the loop
      if(v[mid]==2){//if are mid is 2 then swap with hi 
          int temp = v[mid];
          v[mid] = v[hi];
          v[hi] = temp;
          hi--;//after it swapes we dont touch that element so decreament hi by 1
      }
      if(v[mid]==0){//if mid is 0 then swap with low 
       int temp = v[mid];
       v[mid] = v[low];
       v[low] = temp;
        low++;//increament low and mid as 0 is at it's correct spot
        mid++;//mid can not be less then low it should be equal or greater
      }
      if(v[mid]==1){//if it 1 then it means it is already sorted so 
        mid++;//increament the mid by one untill mid>=hi
      }
   }

   display(v);//function call

}