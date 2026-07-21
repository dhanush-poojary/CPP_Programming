#include<iostream>//Leetcode 2483                         Minimum Penalty for a Shop
#include<vector>
//here we need to return the minimum penalty that can be obtained by closing shop at specific hour
using namespace std;
int main(){
    string customers = "YYNY" ;//2
    int n = customers.length();
        vector<int> prefix(n+1);//To stroe count of N before k'th hour
        vector<int> suffix(n+1);//To store count of Y after and including k'th hour
        prefix[0] = 0;
        for(int i=0;i<n;i++){//taking prefix sum which is only if customers[i] is N then 1 else 0
            prefix[i+1] = prefix[i] +  ((customers[i] == 'N') ? 1 : 0);
        }
        suffix[n] = 0;
        for(int i=n-1;i>=0;i--){//taking suffix sum which is only if customers[i] is Y then 1 else 0
             suffix[i]= suffix[i+1] + ((customers[i] == 'Y') ? 1 : 0);
        }
        int pen = n;
        for(int i=0;i<=n;i++){
             prefix[i]+=suffix[i];//adding booth into prefix sum array
             pen = min(pen,prefix[i]);//finding the minimum penalty out of those
        }
        for(int i=0;i<=n;i++){
            if(pen == prefix[i]){//this is for getting the index of that minimum penalty while traveling left to right
                cout<< i;
                break;
            }
        }
 
}