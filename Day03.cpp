//question https://leetcode.com/problems/flipping-an-image/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++){
            for (int j = 0; j< image[i].size(); j++){ //take size of ith element 
                if (image[i][j] == 1){// if its 1 
                    image[i][j] = 0;// change it  to zero
                }
                else{
                    image[i][j] = 1; // else change it to  one
                }
            }
        }
        for (int i = 0; i < image.size(); i++){
            reverse(image[i].begin(), image[i].end()); // then reverse the image
        }
    return image;
    }
};
/*Approach: Iterate through the vector and then change 1 to 0 and 0 to 1 (inverting) then reverse the vector (fliiping it horizontally)*/
//TC : O(N*M)
//SC: O(1)
