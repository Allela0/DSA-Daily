//question: https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        for (int i = 0; i<size; i++){
            if(nums[i] == 0){
                nums.erase(nums.begin() + i);
                count++;
                i--;
                size--;
            }
        }
        for(int i = 0; i<count; i++){
            nums.push_back(0);
        }

    }
};

//Approach: count the number of 0's in the array and then erase the zeroes using.erase STL fucntion decrementing i and size if zero is found. Then push back the amount of deleted zeroes to the end.
//TC: O(N^2)
//SC: O(1)
//Note: can be optimized using the two pointer approach

//question: https://leetcode.com/problems/rotate-array/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k % size;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        
    }
};

//Approach: reverse the entire array initially then reverse by the amount of steps given then reverse the array from steps to end
//TC: O(N)
//SC: O(1)

