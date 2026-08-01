#include<iostream>//Leetcode 1052                  Grumpy Bookstore Owner
using namespace std;
int main(){
      //in this question we need to calculate the most loss of statsfication in order to make sum
      int customers[] = {1,0,1,2,1,1,7,5}, grumpy[] = {0,1,0,1,0,1,0,1}, minutes = 3;
      int n = 8;
        int k = minutes;//just for small name 

        int prevloss = 0;
        for(int i=0;i<k;i++){//calculating the loss of only 1'st window 1 means loss
            if(grumpy[i] == 1) prevloss+= customers[i];
        }

        int maxloss = prevloss;
        int i = 1;//starting point of the window
        int j = k;//ending point of the window
        int idx;
        while(j<n){ 
             int currloss = prevloss;//stroing previous loss in curr loss
             if(grumpy[j] == 1) currloss+= customers[j]; //adding loss of current window's last element
             if(grumpy[i-1] == 1) currloss-=customers[i-1];//deducting the loss of previous windows first element 
        if(maxloss<currloss){//calculating the maximum loss
            maxloss = currloss;
            idx = i;//storing it's index
        }   
        prevloss = currloss;//changing previous loss
        i++;//movind the window
        j++;
        }

//filling zero's in the grumpy array's window whose loss of statisfaction is more in customers arrays's calculation
        for(int i=idx;i<idx+k;i++){
            grumpy[i] = 0;//only in that window
        }

        int sum = 0;//adding all the elements of customer to find out maximum sum of satisfaction only when the owner is not grumpy
        for(int i=0;i<n;i++){
            if(grumpy[i] == 0) sum+= customers[i];//calculating sum of customers array only if grumpy[i] != 1
        }

        cout<<sum;
    
}