#include<iostream>//Implementing Min Heap using Array (CBT)
using namespace std;
class MinHeap{
  public:
   int arr[100];//array of unlimited size
   int idx;
   MinHeap(){
    idx = 1;//first index of array we are not starting from 0 ignore 0'th position
   }
   void push(int val){
      if(idx == 1){//insert at the 1'st not 0'th
       arr[1] = val;
       idx++;//increament the size
      } 
      else{//idx > 1
          arr[idx] = val;//insert it
          int i = idx;//retrive the idx
          //rearrange each node with it's parent node inorder to heapify it
          while(i != 1 ){   //i/2 will be i'th nodes parent node
           if(arr[i] < arr[i/2]) swap(arr[i],arr[i/2]);
           else break; 
           i/=2;//moving to present nodes parent 
        }
        idx++;//increament size
      }
   }
   void pop(){
      idx--;//popping the element
      arr[1] = arr[idx];//insert last element into top
      int i = 1;
     //rearranging the elements
      while(true){
         int left = 2*i;//left child node
         int right = (2*i)+1;//right child node

         if(left > idx-1) break; //left goes out of bound
         if(right > idx-1){//if right is not present then check or swap with left
              if(arr[i]>arr[left] ) {
                swap(arr[left],arr[i]); 
              i = left;   //also move i to left
        }
         break;
      }
         if( arr[left] < arr[right]){//left>right
              if(arr[i]>arr[left] ){ //swap with left's element
                swap(arr[left],arr[i]); 
              i = left;//also move i to left
            }
              else break;
         }
         else{//left<right
              if(arr[i]>arr[right] ) {//swap with right's element
                swap(arr[right],arr[i]); 
              i = right;
            }
              else break;
         }
      }
   }
   int top(){//it will return the top most element
        return arr[1];
   }
   int Size(){//it will return the size of the heap
       return idx-1;
   }
   void display(){//it will display the heap but as a array form 
       for(int i=1;i<idx;i++){
          cout<<arr[i]<<" ";
       }
       cout<<endl;
   }
};
int main(){
   MinHeap hp;
   cout<<hp.Size()<<endl;//0
  hp.push(10);//inserting 10
  hp.push(20);//inserting 20
  hp.push(30);//inserting 30
  hp.push(7);//inserting 7
  hp.push(4);//inserting 4

  hp.display();//for displaying the elements
  
  cout<<hp.top()<<endl;//4
  cout<<hp.Size()<<endl;//5
  hp.pop();//4
  
  hp.push(60);
  cout<<hp.top()<<endl;//7  
  hp.pop();//7
  
  cout<<hp.top()<<endl;//10  
  hp.display();//for displaying the elements
  cout<<hp.Size();//4
}