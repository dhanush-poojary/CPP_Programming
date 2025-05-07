#include <iostream> 
using namespace std; 
int main()
{   
   int n = 10;
//   for(int i = n; i > 0; i /= 2) {   //O(log n)
//        cout<<"test"<<endl;
//     }
   
    // for(int i = n; i > 1; i /= i) {   //O(1)
    //     cout<<"test"<<endl;
    //  }
 
    //  int k = 2;
    //  for(int i = 0; i < n; i += k) {   //O(n)
    //    cout<<"test"<<endl;
    //     }
    
    // for(int i = 1; i < n; i *= 2) {   O(log n)
    //     cout<<"test"<<endl;
    // }


    // for(int i = 0; i < n; i++) {  O(n)
    //    cout<<"test"<<endl;
    //    }

  
   for(int i = 0; i < n; i++) {
     for(int j = 0; j < i; j++){
    cout<<"test"<<endl;
      
    }
    }
}