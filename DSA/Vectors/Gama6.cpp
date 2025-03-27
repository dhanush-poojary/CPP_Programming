#include<iostream>//program to merge 2 sorted array into another array
#include<vector>//method - 1
using namespace std;
int main(){
   vector<int> v1;//first array declaration
   v1.push_back(1);//inserting array elements
   v1.push_back(4);
   v1.push_back(5);
   v1.push_back(8);

   vector<int> v2;//second array declaration
   v2.push_back(2);//inserting array elements
   v2.push_back(3);
   v2.push_back(6);
   v2.push_back(7);
   v2.push_back(10);

   int size = v1.size() + v2.size();//3rd array's size will be m+n 
   vector<int> res(size);  //third array declaration

   
   int i = 0,j = 0,k = 0;
   while(k<size){//this while loop will execute m+n-1 times which is the size of resultant array
         if(v1[i]<v2[j] && i<v1.size()){//here we are checking for minimum of 2 elements froms each array
           //i<size is for index issue otherwise it will give an error
            res[k] = v1[i];///storing minimum element in k'th index in result array
            i++; //increamenting as this element is in place
         }
         else{  //if this v2[j]>v[1] then condition will hitted
            if(j<v2.size()){//j<size is for index issue otherwise it will give an error
            res[k] = v2[j]; ///storing maximum element in k'th index in result array
            j++;//increamenting as this element is in place
         }
        }
         k++;//after it gets stored then it means the elements are sorted and in place  so no touching 
      }  
     while(j>=0){//this loop is for copying the remaining elements in the second array
         res[k] = v2[j];
         j--;
         k--;
     }     
    cout<<"The array after merging :"<<endl;
      for(int x=0;x<size;x++){
        cout<<res[x]<<"\t";//prints the resultant array
     }
}