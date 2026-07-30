#include<iostream>//Leetcode 69            sqrt(x);
using namespace std;
int main(){
    int x = 36;//need to find perfect as well as not perfect square root
    int low = 0;
    int hi = x;//travel till that number from 0

    while(low<=hi){
        int mid = (low+hi)/2;
        long long mm = (long long)mid;//these conversion is because when multiplying that goes beyond integer range
        long long xx = (long long)x;
        if(mm*mm == x){//if any numbers sqare is equal to x then
            cout<<mid<<endl;//prints the sqrt(x)
            return 0;
        }
        else if(mm*mm > xx) hi = mid-1;//if greater then reduce search space from back
        else low = mid+1;//if lesser then reduce search space from back
    }
    cout<<hi;//this is not perfect  squre number
}