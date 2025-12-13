#include<iostream>//Leetcode 253     meeting Room II
#include<vector>
#include<algorithm>
//here we have to tell the no of room required after considering overlapping meetings
using namespace std;
int main(){
   vector<vector<int> > arr = {{1,10},{2,7},{3,19},{8,12},{10,20},{11,30}};
   vector<int> sp,ep;
   for(auto temp : arr){
      sp.push_back(temp[0]);//insert 0'th ele of arr into sp
      ep.push_back(temp[1]);//insert 1'st ele of arr into ep
   }
   sort(sp.begin(),sp.end());//sort sp
   sort(ep.begin(),ep.end());//sort ep
   int i=0,j = 0;
   int ans = 0;
   int room = 0;
   while(i<sp.size() && j<ep.size()){
      if(sp[i]<ep[j]){//start of a meeting
        room++;//assgin the room
        ans = max(ans,room);//compute answer
        i++;//move i to next room
      }
      else if(sp[i]>ep[j]){//ending of a meeting
           room--;//empty that room bcz meeting is done
           j++;//move j to next room
      }
      else{//meeting started and ended at the same time
        i++;//move both i and j to next
        j++;
      }
   }
   cout<<ans;//it will be no of room
}