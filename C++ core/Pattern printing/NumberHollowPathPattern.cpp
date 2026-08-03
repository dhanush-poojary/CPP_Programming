#include<iostream>//Program for printing Number Hollow Path Pattern
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of lines: ";
    cin >> n;//user input of n number of lines

    // 1   10 9 8 7 6 5 4 3 2 1
    // 1 2   10 9 8 7 6 5 4 3 2
    // 1 2 3   10 9 8 7 6 5 4 3
    // 1 2 3 4   10 9 8 7 6 5 4 
    // 1 2 3 4 5   10 9 8 7 6 5
    // 1 2 3 4 5 6   10 9 8 7 6
    // 1 2 3 4 5 6 7   10 9 8 7
    // 1 2 3 4 5 6 7 8   10 9 8
    // 1 2 3 4 5 6 7 8 9   10 9
    // 1 2 3 4 5 6 7 8 9 10   10  

    
   for(int i=1;i<=n;i++){//this loop prints is for printing number of lines
    cout<<endl;
    for(int j=1;j<=i;j++){//this loop is for printing number increasing order
        //cout<<j<<" ";
        printf("%2d ",j);
    }
    for(int k=1;k<=2;k++){//this loop is for printing spaces in between 2 patterns
        cout<<"  ";
    }
    for(int j=n;j>=i;j--){//this loop is for printing number decreasing order
        //cout<<j<<" ";
        printf("%2d ",j);
    }
}
    return 0;
}