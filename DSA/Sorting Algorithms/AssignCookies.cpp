#include<iostream>//Leetcode 455                    Assign Cookies
#include<vector>
#include<algorithm>
//here we need to count how many cookies can be given to the childres or elements of g
using namespace std;
int main(){
   int a[] = {1,2,3}, b[] = {1,1}; //ans 1
   int m = 3, n = 2;
   vector<int> g(a,a+m), s(b,b+n);

   sort(g.begin(),g.end());//sort the both array
   sort(s.begin(),s.end());
        int count = 0;
        int i = 0,j = 0;
        while(i<g.size() && j<s.size()){
            if(s[i]>= g[i]){//if the element of s is greater then the elemenent of g then only increase count
                count++;
                i++;
                j++;
            }
            else j++;//otherwise find untill any value gets close to element of s
        }
        cout<<count;//print the count
 }