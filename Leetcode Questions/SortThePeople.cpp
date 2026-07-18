//Leetcode 2418 Sort the People

class Solution {
public:
    static bool comp(pair<int,string> p1 ,pair<int,string> p2){  //made it static bcz we need this function to be used inside sort function which is STL function
        return p1.first > p2.first;
    }
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>arr;
        for(int i=0;i<names.size();i++){
            pair<int,string> p;
            p.first = heights[i];
            p.second = names[i];
            arr.push_back(p);
        }
        sort(arr.begin(),arr.end(),comp);
        int i = 0;
        for(auto p : arr){
            names[i++] = p.second;
        }
        return names;
    }
};