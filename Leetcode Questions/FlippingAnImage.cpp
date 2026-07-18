//Leetcode 832 Flipping an Image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int k=0;k<image.size();k++){
            int i=0;
            int j=image.size()-1;
            while(i<j){
                swap(image[k][i],image[k][j]);
                i++;
                j--;
            }
            j =0;
            while(j<image.size()){
              if(image[k][j] == 1) image[k][j] = 0;
              else image[k][j] = 1;
              j++;
            }
        }
        return image;
    }
};