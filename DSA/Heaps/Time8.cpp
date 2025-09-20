#include<iostream>//Leetcode    973  K Closest Points to Origin
#include<queue>
#include<unordered_map>
using namespace std;
int main(){
  vector<int > a;
  a.push_back(1);
  a.push_back(3);
  vector<int > b;
  b.push_back(-2);
  b.push_back(2);
  vector<vector<int> >arr;//an 2D array 
  arr.push_back(a);
  arr.push_back(b);

   int k = 1;//these many points we need to return
      priority_queue<pair<int,vector<int> > > pq;
//here it is guranteed that array will be 2 size
        for(vector<int> v : arr){//we get an 1D array if we traverse in 2D vector using foreach loop
                int x = v[0];//retriveing cordinates
                int y = v[1];

                //to calculate the distance between points (x,y)  to the origin(0,0) = we can do x*x + y*y    
                int dist = x*x + y*y;

                pq.push({dist,v});//insert the distance and that pair of array into the max heap
            //so that distance will be sorted order
                if(pq.size() > k) pq.pop();//if size gets k+1 then remove that bcz we dont want it
        }

        vector<vector<int>> v;
        while(pq.size() !=0){//insert all the elements of max heap untill it's empty
              v.push_back(pq.top().second);//insert the .second which is 1D array or vector
              pq.pop();//remove it
        }


    for(int i=0;i<v.size();i++){//printing the elements or points
      for(int j=0;j<v[i].size();j++){
          cout<<v[i][j]<<" ";
      }
       cout<<endl;
    }
}