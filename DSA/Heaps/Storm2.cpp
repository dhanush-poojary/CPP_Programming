#include<iostream>//Implementing Max Heap using Array (CBT)
using namespace std;
class MaxHeap{
  public:
   int arr[100];
   int idx;
   MaxHeap(){
    idx = 1;//starting index is 1 we are skipping 0'th index 
   }
   void push(int val){
      if(idx == 1){//insert it to root it self
       arr[1] = val;
       idx++;//increament the size
      } 
      else{//rearranging the node with it's parent 
          arr[idx] = val;//insert it to idx'th index
          int i = idx;
          while(i != 1 ){   //i/2 will be i'th nodes parent node
           if(arr[i] > arr[i/2]) swap(arr[i],arr[i/2]);//swap with it's parent 
           else break; 
           i/=2;//move it current node's parent node
        }
        idx++;//increament the size
      }
   }
   void pop(){
      idx--;//popping the element
      arr[1] = arr[idx];//placing last element to first element of array
      int i = 1;
     //rearranging the elements
      while(true){//rearranging the elements

         int left = 2*i;//root's left child
         int right = (2*i)+1;//root's right child

         if(left > idx-1) break; //left goes out of bound
         if(right > idx-1){//if right is not present then check or swap with left
              if(arr[i]<arr[left] ) {
                swap(arr[left],arr[i]); 
              i = left; //move i to left
        }
         break;
      }
         if( arr[left] > arr[right]){//left > right
              if(arr[i]<arr[left] ) {
                swap(arr[left],arr[i]); 
              i = left; //move i to left
            }
              else break;
         }
         else{//left < right
              if(arr[i]<arr[right] ) {
                swap(arr[right],arr[i]); 
              i = right; //move i to right
            }
              else break;
         }
      }
   }
   int top(){//it will return top or first element of the array or max heap
        return arr[1];
   }
   int Size(){//it will return the size of the heap
       return idx-1;
   }
   void display(){
       for(int i=1;i<idx;i++){//printing the elements skip 0'th index
          cout<<arr[i]<<" ";
       }
       cout<<endl;
   }

};
int main(){
   MaxHeap hp;
   cout<<hp.Size()<<endl; //0 
  hp.push(10);//inserting the element 10
  hp.push(20);//inserting the element 20
  hp.push(30);//inserting the element 30
  hp.push(7);//inserting the element 7
  hp.push(4);//inserting the element 4

  hp.display();//it will print the elements but as an array
  
  cout<<hp.top()<<endl;//30
  cout<<hp.Size()<<endl;//5
  hp.pop();//30
  
  hp.push(60);
  cout<<hp.top()<<endl;//60  
  hp.pop();//60
  
  cout<<hp.top()<<endl;//20  
  hp.display();//it will print the elements but as an array
  cout<<hp.Size();//4
}