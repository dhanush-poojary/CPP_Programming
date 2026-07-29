#include<iostream> //minimum product subset
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
//here we have to take the product of subset after minimizing elements
int main(){
  vector<int> arr = {-2,-3,1,4};
  
   int count_zero = 0,count_neg = 0,count_pos;
   int prod_pos = 1;
   int prod_neg = 1;
   int larg = INT_MIN;
   for(int i=0;i<arr.size();i++){
      if(arr[i]<0){//take the count of all negetive elements
        count_neg++;
        prod_neg*= arr[i];//take it's product
        larg = max(larg,arr[i]);//take the larget negetive element 
      }
      else if(arr[i] == 0) count_zero++;//take the count of all zero
      else {//take the count of all positive elements
        count_pos++;
        prod_pos*=arr[i];//also their product
      }
   }

   if(count_neg ==  0 ){//if positive ele only
      if(count_zero != 0) {//if zero exits then 
        cout<<0;//product will be zero
        return 0;
      }
      else{//no negeative and no zero
            auto m = min_element(arr.begin(),arr.end());//then minimum element present in arr 
            cout<<*m;//will be our product 
            return 0;
      }
   }
   else{//if negetive also
     if(count_neg%2 == 0){//even no of negetive
        prod_neg/=larg;//removing max negetive element so that prod will become smaller
        cout<<(prod_neg*prod_pos);//positve / negetive = positive * positive = positive
     }else{//odd no of negetive
      cout<<(prod_neg*prod_pos);//positve * negetive = negetive we will get minimum prod

     }
      
   }

}